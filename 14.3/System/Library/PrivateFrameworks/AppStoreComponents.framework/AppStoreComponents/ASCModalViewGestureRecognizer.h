@class NSMutableSet, UIView;

@interface ASCModalViewGestureRecognizer : UIGestureRecognizer

@property (readonly, nonatomic) NSMutableSet *activeTouches;
@property (readonly, nonatomic) UIView *targetView;

- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)reset;
- (id)initWithCoder:(id)a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isAnyTouch:(id)a0 fromEvent:(id)a1 outsideView:(id)a2;
- (id)initWithTargetView:(id)a0 target:(id)a1 action:(SEL)a2;

@end
