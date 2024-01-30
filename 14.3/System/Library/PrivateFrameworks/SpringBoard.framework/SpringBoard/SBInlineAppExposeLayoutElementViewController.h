@class NSString, BSCornerRadiusConfiguration, SBInlineAppExposeContainerViewController, NSMutableSet;

@interface SBInlineAppExposeLayoutElementViewController : SBLayoutElementViewController <SBLayoutStateTransitionObserver, SBMainDisplaySceneLayoutElementViewControlling> {
    SBInlineAppExposeContainerViewController *_inlineContainerViewController;
    NSMutableSet *_maskDisplayCornersReasons;
}

@property (retain, nonatomic) BSCornerRadiusConfiguration *cornerRadiusConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setShadowOffset:(double)a0;
- (void)layoutStateTransitionCoordinator:(id)a0 transitionWillEndWithTransitionContext:(id)a1;
- (void)layoutStateTransitionCoordinator:(id)a0 transitionDidEndWithTransitionContext:(id)a1;
- (void)layoutStateTransitionCoordinator:(id)a0 transitionDidBeginWithTransitionContext:(id)a1;
- (id)relinquishInlineContainerViewController;
- (void)configureWithWorkspaceEntity:(id)a0 forLayoutElement:(id)a1 layoutState:(id)a2 referenceFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (id)animationControllerForTransitionRequest:(id)a0;
- (void).cxx_destruct;
- (id)_newDisplayLayoutElementForEntity:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)prepareForReuse;
- (void)setShadowOpacity:(double)a0;
- (BOOL)SB_conformsToMainDisplaySceneLayoutElementViewControlling;
- (void)setMaskDisplayCorners:(BOOL)a0 forReason:(id)a1;
- (void)invalidate;

@end
