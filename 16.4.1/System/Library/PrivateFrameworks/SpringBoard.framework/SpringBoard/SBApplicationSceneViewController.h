@class SBApplicationSceneView, NSString, UIView, SBStatusBarSettings, SBApplicationSceneHandle;
@protocol SBScenePlaceholderContentContext, SBApplicationSceneViewControllingStatusBarDelegate;

@interface SBApplicationSceneViewController : SBSceneViewController <SBApplicationSceneViewControlling>

@property (readonly, nonatomic, getter=_sceneView) SBApplicationSceneView *sceneView;
@property (readonly, nonatomic, getter=_isApplicationStatusBarHidden) BOOL _applicationStatusBarHidden;
@property (retain, nonatomic, getter=_overrideStatusBarSettings, setter=_setOverrideStatusBarSettings:) SBStatusBarSettings *overrideStatusBarSettings;
@property (readonly, nonatomic) SBApplicationSceneHandle *sceneHandle;
@property (readonly, nonatomic) double statusBarAlpha;
@property (readonly, nonatomic) long long overrideStatusBarStyle;
@property (weak, nonatomic) id<SBApplicationSceneViewControllingStatusBarDelegate> applicationSceneStatusBarDelegate;
@property (readonly, nonatomic) long long displayMode;
@property (retain, nonatomic) id<SBScenePlaceholderContentContext> placeholderContentContext;
@property (retain, nonatomic) UIView *customContentView;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } contentReferenceSize;
@property (readonly, nonatomic) long long contentOrientation;
@property (readonly, nonatomic) long long containerOrientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSceneHandle:(id)a0;
- (double)_applicationStatusBarAlpha;
- (void).cxx_destruct;

@end
