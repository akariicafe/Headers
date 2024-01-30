@class UILayoutGuide, SBHWidgetWrapperViewController, NSString, UIView;
@protocol SBHWidgetDragHandlerPassing, SBHWidgetDragHandling;

@interface SBHAddWidgetDetailsSheetPageViewController : UIViewController <SBHWidgetWrapperViewControllerDelegate>

@property (retain, nonatomic) UIView *referenceView;
@property (nonatomic) double scale;
@property (retain, nonatomic) UILayoutGuide *layoutGuide;
@property (readonly, nonatomic) SBHWidgetWrapperViewController *widgetWrapperViewController;
@property (weak, nonatomic) id<SBHWidgetDragHandlerPassing> delegate;
@property (nonatomic, getter=isJumpAnimationInProgress) BOOL jumpAnimationInProgress;
@property (readonly, nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } wrapperViewTransform;
@property (readonly, weak, nonatomic) id<SBHWidgetDragHandling> widgetDragHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (id)initWithWidgetWrapperViewController:(id)a0;
- (void)updateParallaxEffectInReferenceView:(id)a0;
- (void)_createConstraints;
- (void)_createViews;
- (void)_createSizeConstraintsForWrapperView:(id)a0;
- (void)_updateWidgetScale;
- (void)_pauseLayer:(id)a0;
- (void)_resumeLayer:(id)a0;

@end
