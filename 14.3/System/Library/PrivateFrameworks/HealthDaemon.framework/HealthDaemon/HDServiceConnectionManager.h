@class NSString, HDProfile, NSMutableDictionary, NSObject, HDHealthServiceManager;
@protocol OS_dispatch_queue;

@interface HDServiceConnectionManager : NSObject <HDDatabaseProtectedDataObserver, HDDiagnosticObject, HDHealthDaemonReadyObserver> {
    HDProfile *_profile;
    HDHealthServiceManager *_serviceManager;
    BOOL _connecting;
    BOOL _BTLEEnabled;
    NSMutableDictionary *_activeServices;
    NSObject<OS_dispatch_queue> *_deviceQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProfile:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)disconnectFromServices;
- (void)daemonReady:(id)a0;
- (id)diagnosticDescription;
- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (void)_disconnectFromService:(id)a0;
- (void)_connectToService:(id)a0;
- (void)disconnectFromService:(id)a0;
- (void)_handleBluetoothUpdates:(long long)a0;
- (void)_subscribeBluetoothStateUpdates;
- (void)connectToService:(id)a0;
- (void)reconnectToServices;
- (void)_disconnectFromServicesStopConnecting:(BOOL)a0;
- (void)_connectToServices;

@end
