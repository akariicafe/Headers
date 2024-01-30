@class UITouch, NSString, UITextGestureTuning, UITextRangeAdjustmentGestureRecognizer, UIView;
@protocol UITextRangeAdjustmentInteractionDelegate;

@interface UITextRangeAdjustmentInteraction : NSObject <UIGestureRecognizerDelegate, UIInteraction> {
    UITextGestureTuning *_gestureTuning;
}

@property (nonatomic) struct CGPoint { double x; double y; } initialPoint;
@property (nonatomic) struct CGPoint { double x; double y; } basePoint;
@property (nonatomic) struct CGPoint { double x; double y; } extentPoint;
@property (nonatomic) struct CGPoint { double x; double y; } initialBasePoint;
@property (nonatomic) double initialDistance;
@property (nonatomic) struct CGPoint { double x; double y; } touchOffset;
@property (nonatomic) double firstMovedTime;
@property (retain, nonatomic) UITouch *activeTouch;
@property (nonatomic) BOOL baseIsStart;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } initialExtentPoint;
@property (weak, nonatomic) id<UITextRangeAdjustmentInteractionDelegate> delegate;
@property (readonly, nonatomic) UITextRangeAdjustmentGestureRecognizer *adjustmentGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) UIView *view;

- (void)willMoveToView:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void)_updateAdjustmentInteractionWithState:(long long)a0 location:(struct CGPoint { double x0; double x1; })a1 locationOfFirstTouch:(struct CGPoint { double x0; double x1; })a2 forTouchType:(long long)a3;
- (void)manuallyUpdateInteractionWithGestureState:(long long)a0 location:(struct CGPoint { double x0; double x1; })a1 locationOfFirstTouch:(struct CGPoint { double x0; double x1; })a2 forTouchType:(long long)a3;
- (void)didMoveToView:(id)a0;
- (void)_adjustmentInteractionBeganWithLocation:(struct CGPoint { double x0; double x1; })a0 startPoint:(struct CGPoint { double x0; double x1; })a1 forTouchType:(long long)a2;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (void)_adjustmentInteractionChangedWithLocation:(struct CGPoint { double x0; double x1; })a0 forTouchType:(long long)a1;
- (void)_createGestureTuningIfNecessary;
- (void)_didRecognizeAdjustmentGesture:(id)a0;
- (BOOL)_gestureTuningEnabledForTouches:(id)a0;
- (struct CGPoint { double x0; double x1; })_convertPointToViewCoordinateSpace:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_shouldApplyOffsetForTouchType:(long long)a0;
- (void)_adjustmentInteractionEndedAtLocation:(struct CGPoint { double x0; double x1; })a0 forTouchType:(long long)a1;
- (void)_adjustmentInteractionCancelled;
- (BOOL)_pointCloserToEnd:(struct CGPoint { double x0; double x1; })a0 startEdge:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 endEdge:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)updateBaseAndExtentPointsFromEdges;
- (void)_setTouchOffset:(struct CGPoint { double x0; double x1; })a0 touchPoint:(struct CGPoint { double x0; double x1; })a1;
- (struct CGPoint { double x0; double x1; })applyTouchOffset:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })_activeTouchPoint;

@end
