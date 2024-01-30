@class UILayoutGuide, SBHWidgetWrapperViewController, NSString, UIView;
@protocol SBHWidgetDragHandling, SBHAddWidgetDetailsSheetPageViewControllerDelegate;

@interface SBHAddWidgetDetailsSheetPageViewController : UIViewController <SBHWidgetWrapperViewControllerDelegate>

@property (retain, nonatomic) UIView *referenceView;
@property (nonatomic) double scale;
@property (retain, nonatomic) UILayoutGuide *layoutGuide;
@property (readonly, nonatomic) SBHWidgetWrapperViewController *widgetWrapperViewController;
@property (weak, nonatomic) id<SBHAddWidgetDetailsSheetPageViewControllerDelegate> delegate;
@property (nonatomic, getter=isJumpAnimationInProgress) BOOL jumpAnimationInProgress;
@property (readonly, nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } wrapperViewTransform;
@property (readonly, weak, nonatomic) id<SBHWidgetDragHandling> widgetDragHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_createConstraints;
- (void)viewDidLayoutSubviews;
- (void)_createViews;
- (void)loadView;
- (void).cxx_destruct;
- (id)initWithWidgetWrapperViewController:(id)a0;
- (void)updateParallaxEffectInReferenceView:(id)a0;
- (id)backgroundViewMatchingMaterialBeneathWrapperViewController:(id)a0;
- (void)configureBackgroundView:(id)a0 matchingMaterialBeneathWrapperViewController:(id)a1;
- (void)_createSizeConstraintsForWrapperView:(id)a0;
- (void)_updateWidgetScale;
- (void)_pauseLayer:(id)a0;
- (void)_resumeLayer:(id)a0;

@end
