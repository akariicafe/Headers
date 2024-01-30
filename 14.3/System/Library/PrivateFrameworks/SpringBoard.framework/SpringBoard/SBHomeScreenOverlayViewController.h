@class SBTitledHomeScreenButton, SBHRootFolderVisualConfiguration, SBHRootSidebarController, UIViewController, NSString, NSLayoutConstraint, MTMaterialView, UIViewFloatAnimatableProperty, SBFTodayGestureSettings;
@protocol SBHomeScreenOverlayViewControllerDelegate, SBHOccludable;

@interface SBHomeScreenOverlayViewController : UIViewController <WGWidgetGroupViewControllerDelegate, SBHWidgetSheetViewControllerPresenter, SBHOccludable>

@property (readonly, nonatomic) MTMaterialView *backgroundView;
@property (readonly, nonatomic) SBHRootFolderVisualConfiguration *rootFolderVisualConfiguration;
@property (retain, nonatomic) NSLayoutConstraint *contentLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *contentWidthConstraint;
@property (retain, nonatomic) SBTitledHomeScreenButton *doneButton;
@property (retain, nonatomic) SBTitledHomeScreenButton *widgetButton;
@property (nonatomic) BOOL showsDoneButton;
@property (nonatomic) BOOL showsAddWidgetButton;
@property (retain, nonatomic) SBFTodayGestureSettings *gestureSettings;
@property (retain, nonatomic) UIViewFloatAnimatableProperty *overlayPresentationFloatAnimatableProperty;
@property (weak, nonatomic) id<SBHomeScreenOverlayViewControllerDelegate> delegate;
@property (nonatomic) double presentationProgress;
@property (readonly, nonatomic) double layerPresentationProgress;
@property (nonatomic, getter=isFromLeading) BOOL fromLeading;
@property (readonly, nonatomic) double contentWidth;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } contentRect;
@property (nonatomic) BOOL shouldUseReducedMotionAnimation;
@property (readonly, nonatomic, getter=isHeaderVisible) BOOL headerVisible;
@property (readonly, nonatomic) SBHRootSidebarController *contentViewController;
@property (retain, nonatomic) UIViewController<SBHOccludable> *leftSidebarViewController;
@property (retain, nonatomic) UIViewController<SBHOccludable> *rightSidebarViewController;
@property (nonatomic) BOOL suppressesExtraEditingButtons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double titledButtonsAlpha;
@property (nonatomic, getter=isOccluded) BOOL occluded;

- (void).cxx_destruct;
- (id)makeTitledButtonOfClass:(Class)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setShowsDoneButton:(BOOL)a0 animated:(BOOL)a1;
- (BOOL)bs_endAppearanceTransition:(BOOL)a0;
- (void)widgetButtonTriggered:(id)a0;
- (void)doneButtonTriggered:(id)a0;
- (BOOL)bs_beginAppearanceTransition:(BOOL)a0 animated:(BOOL)a1;
- (BOOL)bs_endAppearanceTransition;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)newHomeScreenButtonBackgroundView;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (unsigned long long)presenterType;
- (void)setSuppressesEditingStateForListView:(BOOL)a0;
- (void)setShowsAddWidgetButton:(BOOL)a0 animated:(BOOL)a1;
- (void)updateExtraButtonVisibilityAnimated:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (struct CGSize { double x0; double x1; })widgetGroupViewController:(id)a0 sizeForInterfaceOrientation:(long long)a1;
- (void)viewDidLoad;
- (void)setPresentationProgress:(double)a0 interactive:(BOOL)a1 animated:(BOOL)a2 completionHandler:(id /* block */)a3;
- (struct CGSize { double x0; double x1; })_suggestedTodayViewSizeForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)animatePresentationProgress:(double)a0 withGestureLiftOffVelocity:(double)a1 completionHandler:(id /* block */)a2;
- (double)contentWidthWithContainerWidth:(double)a0;
- (void)_updateConstraintsForPresentationProgress:(double)a0;
- (void)_configureMatchMoveAnimationForBackgroundView:(id)a0 withSourceView:(id)a1;
- (void)setPresentationProgress:(double)a0 withAnimationUpdateMode:(long long)a1 overrideAnimationSettings:(id)a2 completionHandler:(id /* block */)a3;
- (void)_updateLayoutForEditButtons;
- (void)_button:(id)a0 appearAnimated:(BOOL)a1;
- (void)_button:(id)a0 disappearAnimated:(BOOL)a1 completion:(id /* block */)a2;

@end
