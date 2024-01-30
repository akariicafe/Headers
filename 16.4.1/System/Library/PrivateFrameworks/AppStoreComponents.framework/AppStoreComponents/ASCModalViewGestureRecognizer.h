@class NSMutableSet, UIView;

@interface ASCModalViewGestureRecognizer : UIGestureRecognizer

@property (readonly, nonatomic) NSMutableSet *activeTouches;
@property (readonly, nonatomic) UIView *targetView;

- (void)encodeWithCoder:(id)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)reset;
- (id)initWithTargetView:(id)a0 target:(id)a1 action:(SEL)a2;
- (BOOL)isAnyTouch:(id)a0 fromEvent:(id)a1 outsideView:(id)a2;

@end
