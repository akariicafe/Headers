@class RBLaunchdJobManager, RBLaunchTracker;
@protocol RBLaunchManagerDelegate;

@interface RBLaunchManager : NSObject {
    RBLaunchdJobManager *_jobManager;
    id<RBLaunchManagerDelegate> _delegate;
    RBLaunchTracker *_launchTracker;
}

- (id)executeLaunchRequest:(id)a0 existingProcess:(id)a1 requestIdentity:(id)a2 withError:(out id *)a3;
- (id)initWithJobManager:(id)a0 timeProvider:(id)a1 delegate:(id)a2;
- (void)_validateBundleIDForProcess:(id)a0 launchedWithContext:(id)a1;
- (BOOL)_checkLaunchForBackoff:(id)a0 error:(out id *)a1;
- (id)init;
- (id)_resolveNewProcessForInstance:(id)a0 requestIdentity:(id)a1 context:(id)a2 withError:(out id *)a3;
- (void).cxx_destruct;

@end
