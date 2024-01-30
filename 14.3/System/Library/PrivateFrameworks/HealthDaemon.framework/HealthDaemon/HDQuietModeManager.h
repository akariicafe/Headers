@class NSString, HDAssertionManager, HDDNDModeAssertionService, NSObject;
@protocol OS_dispatch_queue;

@interface HDQuietModeManager : NSObject <HDAssertionObserver> {
    NSObject<OS_dispatch_queue> *_queue;
    HDAssertionManager *_assertionManager;
    BOOL _enableDNDDuringWorkout;
    HDDNDModeAssertionService *_dndModeAssertionService;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)assertionManager:(id)a0 assertionInvalidated:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)takeQuietModeAssertionForOwnerIdentifier:(id)a0;
- (void)_observeDNDWorkoutDefault;
- (void)_queue_takeQuietModeAssertion;
- (void)_queue_releaseQuietModeAssertion;
- (void)_loadWorkoutDNDDefault;
- (void)unitTest_setDNDModeAssertionService:(id)a0;
- (void)unitTest_setEnableDND:(BOOL)a0;

@end
