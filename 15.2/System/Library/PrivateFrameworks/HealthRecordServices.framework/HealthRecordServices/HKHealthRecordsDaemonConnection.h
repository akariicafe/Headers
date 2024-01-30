@class NSString, _HKXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface HKHealthRecordsDaemonConnection : NSObject <_HKXPCExportable, HKProxyProviderSource> {
    NSObject<OS_dispatch_queue> *_clientQueue;
    _HKXPCConnection *_connection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy, nonatomic) NSString *daemonLaunchDarwinNotificationName;

+ (id)sharedConnection;

- (void)connectionInvalidated;
- (id)remoteInterface;
- (id)initWithListenerEndpoint:(id)a0;
- (void).cxx_destruct;
- (void)fetchEndpointForServiceIdentifier:(id)a0 endpointHandler:(id /* block */)a1 errorHandler:(id /* block */)a2;
- (id)init;
- (id)exportedInterface;
- (void)dealloc;

@end
