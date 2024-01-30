@class UITouch;

@interface CKInvisibleInkGestureRecognizer : UIGestureRecognizer

@property (retain, nonatomic) UITouch *firstTouch;
@property (nonatomic) struct CGPoint { double x; double y; } startLocation;
@property (nonatomic) double startTime;

- (BOOL)canBePreventedByGestureRecognizer:(id)a0;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)reset;
- (BOOL)shouldRequireFailureOfGestureRecognizer:(id)a0;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (BOOL)canPreventGestureRecognizer:(id)a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (BOOL)shouldBeRequiredToFailByGestureRecognizer:(id)a0;
- (BOOL)_hasActiveTouchesInEvent:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
