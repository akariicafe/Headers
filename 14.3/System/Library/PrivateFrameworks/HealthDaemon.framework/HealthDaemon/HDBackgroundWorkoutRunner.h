@class NSString, HDAssertionManager, NSObject, HDDaemon;
@protocol OS_dispatch_queue;

@interface HDBackgroundWorkoutRunner : NSObject <HDProcessStateObserver, HDAssertionObserver> {
    HDDaemon *_daemon;
    HDAssertionManager *_assertionManager;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)assertionManager:(id)a0 assertionInvalidated:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDaemon:(id)a0;
- (void)assertionManager:(id)a0 assertionTaken:(id)a1;
- (void)processDidEnterForeground:(id)a0;
- (BOOL)_queue_hasBackgroundPermissionForBundleIdentifier:(id)a0 errorOut:(id *)a1;
- (id)_queue_acquireBKSAssertionForClient:(id)a0;
- (id)_queue_acquireCLInUseAssertionForClient:(id)a0;
- (void)_queue_releaseCLInUseAssertion:(id)a0 forClient:(id)a1;
- (void)_queue_releaseBKSAssertion:(id)a0 forClient:(id)a1;
- (id)takeBackgroundRunningAssertionForOwnerIdentifier:(id)a0 client:(id)a1 includeCoreLocationAssertion:(BOOL)a2;
- (BOOL)hasBackgroundPermissionForBundleIdentifier:(id)a0 errorOut:(id *)a1;

@end
