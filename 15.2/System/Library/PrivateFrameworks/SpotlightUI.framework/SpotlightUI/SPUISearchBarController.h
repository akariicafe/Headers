@class NSLayoutConstraint, _UINavigationBarTitleView;
@protocol SPUISearchBarDelegate;

@interface SPUISearchBarController : SPUISpotlightRemoteViewController

@property (retain) _UINavigationBarTitleView *view;
@property (retain) NSLayoutConstraint *heightAnchor;
@property (weak, nonatomic) id<SPUISearchBarDelegate> delegate;
@property (nonatomic) BOOL roundedCornerVisible;

+ (id)todayViewSearchBar;
+ (id)notificationCenterSearchBar;

- (void)setBlurProgress:(double)a0 animated:(BOOL)a1;
- (struct CGSize { double x0; double x1; })initialFittingSize;
- (void)scene:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 oldClientSettings:(id)a2 transitionContext:(id)a3;
- (void)updateSceneSettingsWithBlock:(id /* block */)a0;
- (id)sceneSpecification;
- (void)didInvalidateSceneWhenForeground;
- (BOOL)setSceneFrameOnRotation;
- (void)loadView;
- (id)backgroundBlurView;
- (void).cxx_destruct;

@end
