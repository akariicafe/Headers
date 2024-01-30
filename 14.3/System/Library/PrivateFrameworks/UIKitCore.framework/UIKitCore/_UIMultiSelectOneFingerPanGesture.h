@class UITouch, UIEvent;
@protocol _UIMultiSelectOneFingerPanGestureDelegate;

@interface _UIMultiSelectOneFingerPanGesture : UIPanGestureRecognizer

@property (readonly, nonatomic) UITouch *activeTouch;
@property (readonly, nonatomic) UIEvent *activeEvent;
@property (weak, nonatomic) id<_UIMultiSelectOneFingerPanGestureDelegate> oneFingerPanDelegate;

- (BOOL)_affectedByGesture:(id)a0;
- (BOOL)canBePreventedByGestureRecognizer:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (BOOL)canPreventGestureRecognizer:(id)a0;
- (BOOL)_preventsDragInteractionGestures;
- (BOOL)shouldBeRequiredToFailByGestureRecognizer:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
