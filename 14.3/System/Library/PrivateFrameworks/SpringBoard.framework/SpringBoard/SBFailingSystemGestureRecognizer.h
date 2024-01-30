@protocol SBSystemGestureRecognizerDelegate;

@interface SBFailingSystemGestureRecognizer : UIGestureRecognizer

@property (weak, nonatomic) id<SBSystemGestureRecognizerDelegate> delegate;

- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (id)init;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
