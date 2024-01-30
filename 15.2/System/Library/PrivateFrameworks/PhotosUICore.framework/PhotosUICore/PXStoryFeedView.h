@class PXStoryFeedViewLayout, PXTouchingUIGestureRecognizer, PXStoryFeedViewModel, PXStoryTransitionableTungstenViewManager, NSString, PXGView;
@protocol PXGAXResponder;

@interface PXStoryFeedView : UIView <UIGestureRecognizerDelegate, PXTouchingUIGestureRecognizerDelegate, PXGAXResponder, PXTapToRadarDiagnosticProvider>

@property (readonly, nonatomic) PXTouchingUIGestureRecognizer *touchingGestureRecognizer;
@property (readonly, nonatomic) PXStoryFeedViewLayout *feedViewLayout;
@property (copy, nonatomic) id /* block */ currentTouchCompletion;
@property (readonly, nonatomic) PXStoryFeedViewModel *viewModel;
@property (readonly, nonatomic) PXGView *tungstenView;
@property (readonly, nonatomic) PXStoryTransitionableTungstenViewManager *tungstenViewManager;
@property (nonatomic) BOOL isActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PXGAXResponder> axNextResponder;

- (BOOL)axGroup:(id)a0 didRequestToPerformAction:(long long)a1 userInfo:(id)a2;
- (id)axContainingScrollViewForAXGroup:(id)a0;
- (void)axGroup:(id)a0 didChange:(unsigned long long)a1 userInfo:(id)a2;
- (void)_handleChangeToModifySelectionWithUserInfo:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 configuration:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)regionOfInterestForObjectReference:(id)a0;
- (void)collectTapToRadarDiagnosticsIntoContainer:(id)a0;
- (void)touchingUIGestureRecognizerWillBeginTouching:(id)a0;
- (void)touchingUIGestureRecognizerWillEndTouching:(id)a0;
- (id)itemPlacementControllerForItemReference:(id)a0;
- (void)_handleTouch:(id)a0;
- (BOOL)handlePrimaryInteractionAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)beginTouchingAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)endTouching;
- (void)_installGestureRecognizers;

@end
