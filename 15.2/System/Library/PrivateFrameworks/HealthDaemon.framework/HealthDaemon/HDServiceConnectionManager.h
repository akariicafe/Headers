@class NSString, HDProfile, NSMutableDictionary, NSObject, HDHealthServiceManager;
@protocol OS_dispatch_queue;

@interface HDServiceConnectionManager : NSObject <HDDatabaseProtectedDataObserver, HDDiagnosticObject, HDProfileReadyObserver> {
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

- (id)diagnosticDescription;
- (id)initWithProfile:(id)a0;
- (void)profileDidBecomeReady:(id)a0;
- (void)disconnectFromService:(id)a0;
- (void)connectToService:(id)a0;
- (void)reconnectToServices;
- (void).cxx_destruct;
- (id)init;
- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (void)dealloc;
- (void)disconnectFromServices;

@end
