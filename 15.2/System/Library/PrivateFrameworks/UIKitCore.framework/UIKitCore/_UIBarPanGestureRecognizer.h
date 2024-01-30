@interface _UIBarPanGestureRecognizer : UIPanGestureRecognizer

@property (readonly, nonatomic) long long barAction;
@property (readonly, nonatomic) double bias;

- (void)_setDelegate:(id)a0;
- (BOOL)canPreventGestureRecognizer:(id)a0;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (id)description;
- (void)setDelegate:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
