@class NSObject, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface CPApplicationLauncher : NSObject

@property (class, readonly) CPApplicationLauncher *sharedInstance;

@property (retain, nonatomic) NSMutableDictionary *sessionIDtoAuthMap;
@property (retain, nonatomic) NSMutableDictionary *sessionIDtoCompletionMap;
@property (retain, nonatomic) NSMutableDictionary *bundleIDToAssertionMap;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (id)init;
- (void)_insertBKSAssertion:(id)a0 forBundleID:(id)a1;
- (BOOL)_launchApplicationWithBundleIdentifier:(id)a0;
- (BOOL)_acquireAssertionForBundleID:(id)a0;
- (void)_invokeAndDequeueCompletionForSessionID:(id)a0 error:(id)a1;
- (void)_invalidateBKSAssertionForBundleID:(id)a0;
- (void)_revokeAndRemoveAuthForSessionID:(id)a0;
- (BOOL)_launchAndAcquireAssertionForBundleID:(id)a0 sessionID:(id)a1;
- (void)_validatePiPStartedFor:(id)a0 bundleID:(id)a1;
- (id)_sessionIDForActivity:(id)a0;
- (id)_appBundleIDForActivity:(id)a0;
- (void)_handleStateTransitionForAuthorization:(id)a0 state:(long long)a1;
- (void)_insertAuth:(id)a0 completion:(id /* block */)a1 forSessionID:(id)a2;
- (void)_launchAppWithBackgroundPiPForActivity:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)_sessionAlreadyAuthorizingOrAuthorizedForPiP:(id)a0;
- (void)_authorizePiPForActivity:(id)a0 withCompletion:(id /* block */)a1;
- (id)_sessionIDForAuthorization:(id)a0;
- (id)_authorizationsForBundleID:(id)a0;
- (void)_revokeAuthorizations:(id)a0;
- (id)_authorizationForActivitySession:(id)a0;
- (void)launchAppWithBackgroundPiPForActivity:(id)a0 withCompletion:(id /* block */)a1;
- (void)authorizePiPForActivity:(id)a0 withCompletion:(id /* block */)a1;
- (void)revokeBackgroundPiPAuthorizationForBundleID:(id)a0;
- (void)revokeBackgroundPiPAuthorizationForSession:(id)a0;

@end
