@class NSString, RBSAssertion;

@interface SBLegacyVOIPRefreshWakeTracker : NSObject <SBApplicationWakeLifecycleHandling>

@property (retain, nonatomic) RBSAssertion *appKeepAliveAssertion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (double)wakeDuration;
- (void)endWake;
- (id)_createAssertionForAppProcessIdentity:(id)a0;
- (BOOL)beginWakeForApplication:(id)a0;

@end
