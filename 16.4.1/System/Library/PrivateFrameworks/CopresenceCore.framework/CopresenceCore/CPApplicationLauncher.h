@class NSMutableDictionary, CPApplicationLauncherSwift, NSObject, CPFeatureFlags;
@protocol OS_dispatch_queue;

@interface CPApplicationLauncher : NSObject {
    CPApplicationLauncherSwift *_newApplicationLauncher;
}

@property (class, readonly) CPApplicationLauncher *sharedInstance;

@property (retain, nonatomic) NSMutableDictionary *sessionIDtoAuthMap;
@property (retain, nonatomic) NSMutableDictionary *sessionIDtoCompletionMap;
@property (retain, nonatomic) NSMutableDictionary *bundleIDToAssertionMap;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) CPFeatureFlags *featureFlags;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_acquireAssertionForBundleID:(id)a0;
- (id)_authorizationForActivitySession:(id)a0;
- (id)_authorizationsForBundleID:(id)a0;
- (void)_authorizePiPForActivity:(id)a0 withCompletion:(id /* block */)a1;
- (void)_handleStateTransitionForAuthorization:(id)a0 activitySession:(id)a1 state:(long long)a2;
- (void)_insertAuth:(id)a0 completion:(id /* block */)a1 forSessionID:(id)a2;
- (void)_insertBKSAssertion:(id)a0 forBundleID:(id)a1;
- (void)_invalidateBKSAssertionForBundleID:(id)a0;
- (void)_invokeAndDequeueCompletionForSessionID:(id)a0 success:(BOOL)a1 error:(id)a2;
- (void)_launchAndAcquireAssertionIfNecessaryForActivitySession:(id)a0 options:(long long)a1 completion:(id /* block */)a2;
- (void)_launchAppForActivitySession:(id)a0 options:(long long)a1 completion:(id /* block */)a2;
- (void)_launchApplicationForActivitySession:(id)a0 options:(long long)a1 completion:(id /* block */)a2;
- (id)_openApplicationOptionsForActivitySession:(id)a0 options:(long long)a1;
- (void)_revokeAndRemoveAuthForSessionID:(id)a0;
- (void)_revokeAuthorizations:(id)a0;
- (BOOL)_sessionAlreadyAuthorizingOrAuthorizedForPiP:(id)a0;
- (id)_sessionIDForActivity:(id)a0;
- (id)_sessionIDForAuthorization:(id)a0;
- (void)_validatePiPStartedFor:(id)a0 bundleID:(id)a1;
- (void)authorizePiPForActivity:(id)a0 withCompletion:(id /* block */)a1;
- (void)launchAppForActivitySession:(id)a0 options:(long long)a1 completion:(id /* block */)a2;
- (void)revokeBackgroundAuthorizationForBundleID:(id)a0;
- (void)revokeBackgroundAuthorizationForSession:(id)a0;

@end
