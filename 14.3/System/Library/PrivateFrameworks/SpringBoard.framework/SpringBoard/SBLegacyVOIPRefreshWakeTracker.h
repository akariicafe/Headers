@class NSString, BKSProcessAssertion, FBProcessManager;

@interface SBLegacyVOIPRefreshWakeTracker : NSObject <SBApplicationWakeLifecycleHandling> {
    FBProcessManager *_processManager;
}

@property (retain, nonatomic) BKSProcessAssertion *appKeepAliveAssertion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)endWake;
- (double)wakeDuration;
- (id)initWithProcessManager:(id)a0;
- (void)_activateAppIfNeeded:(id)a0;
- (id)_createAssertionForBundleID:(id)a0;
- (BOOL)beginWakeForApplication:(id)a0;

@end
