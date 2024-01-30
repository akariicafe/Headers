@class SBWorkspaceTransitionRequest, NSSet, SBDeviceApplicationSceneEntity;
@protocol BSInvalidatable;

@interface SBUIMainScreenAnimationController : SBUIWorkspaceAnimationController

@property (retain, nonatomic) id<BSInvalidatable> wallpaperRequiredAssertion;
@property (retain, nonatomic) id<BSInvalidatable> bannerSuppressionAssertion;
@property (readonly, nonatomic) SBWorkspaceTransitionRequest *transitionRequest;
@property (readonly, copy, nonatomic) NSSet *toApplicationSceneEntities;
@property (readonly, nonatomic) SBDeviceApplicationSceneEntity *toApplicationSceneEntity;
@property (readonly, copy, nonatomic) NSSet *fromApplicationSceneEntities;
@property (readonly, nonatomic) SBDeviceApplicationSceneEntity *fromApplicationSceneEntity;

- (void)__startAnimation;
- (id)_getTransitionWindow;
- (void)_begin;
- (id)initWithTransitionContextProvider:(id)a0;
- (BOOL)_shouldDismissBanner;
- (id)initWithWorkspaceTransitionRequest:(id)a0;
- (void)_dismissBannerAnimated:(BOOL)a0;
- (BOOL)__wantsInitialProgressStateChange;
- (id)_primaryAppOrAnyAppFromSet:(id)a0;
- (void).cxx_destruct;
- (void)_cleanupAnimation;

@end
