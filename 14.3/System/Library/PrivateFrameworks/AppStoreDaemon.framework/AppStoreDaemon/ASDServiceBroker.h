@class NSString, NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface ASDServiceBroker : NSObject <ASDClipServiceBroker> {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_machServiceName;
    int _token;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newBrokerForMachServiceName:(id)a0;
+ (id)interface;
+ (id)machServiceName;
+ (id)defaultBroker;

- (void)getManagedAppServiceWithCompletionHandler:(id /* block */)a0;
- (id)getPurchaseServiceWithError:(id *)a0;
- (void).cxx_destruct;
- (id)getRepairServiceWithError:(id *)a0;
- (void)getRepairServiceWithCompletionHandler:(id /* block */)a0;
- (void)getOcelotServiceWithCompletionHandler:(id /* block */)a0;
- (id)getClipServiceWithError:(id *)a0;
- (void)dealloc;
- (id)getPurchaseHistoryServiceWithError:(id *)a0;
- (id)getInstallAttributionServiceWithError:(id *)a0;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)initWithMachServiceName:(id)a0;
- (id)getTestFlightFeedbackServiceWithError:(id *)a0;
- (void)getLibraryServiceWithCompletionHandler:(id /* block */)a0;
- (void)_connect;
- (id)getUpdatesServiceWithError:(id *)a0;
- (void)getCrossfireServiceWithCompletionHandler:(id /* block */)a0;
- (id)getDiagnosticServiceWithError:(id *)a0;
- (id)getLibraryServiceWithError:(id *)a0;
- (void)getPurchaseHistoryServiceWithCompletionHandler:(id /* block */)a0;
- (id)getManagedAppServiceWithError:(id *)a0;
- (id)getIAPHistoryServiceWithError:(id *)a0;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)getIAPHistoryServiceWithCompletionHandler:(id /* block */)a0;
- (void)getClipServiceWithCompletionHandler:(id /* block */)a0;
- (void)getInstallAttributionServiceWithCompletionHandler:(id /* block */)a0;
- (void)getDiagnosticServiceWithCompletionHandler:(id /* block */)a0;
- (id)getInstallationServiceWithError:(id *)a0;
- (void)getArcadeServiceWithCompletionHandler:(id /* block */)a0;
- (void)getUpdatesServiceWithCompletionHandler:(id /* block */)a0;
- (void)getTestFlightFeedbackServiceWithCompletionHandler:(id /* block */)a0;
- (void)getPurchaseServiceWithCompletionHandler:(id /* block */)a0;
- (void)getAppStoreServiceWithCompletionHandler:(id /* block */)a0;
- (void)getPersonalizationServiceWithCompletionHandler:(id /* block */)a0;
- (void)getInstallationServiceWithCompletionHandler:(id /* block */)a0;

@end
