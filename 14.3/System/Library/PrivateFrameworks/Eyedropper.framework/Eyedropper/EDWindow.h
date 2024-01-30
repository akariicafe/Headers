@class EDWindowRootViewController;
@protocol EDWindowTrackingDelegate;

@interface EDWindow : UIWindow

@property (retain, nonatomic) EDWindowRootViewController *root;
@property (weak, nonatomic) id<EDWindowTrackingDelegate> trackingDelegate;

+ (BOOL)_isSecure;

- (BOOL)_shouldAutorotateToInterfaceOrientation:(long long)a0;
- (void)handleStatusBarChangeFromHeight:(double)a0 toHeight:(double)a1;
- (BOOL)_canBecomeKeyWindow;
- (BOOL)_preventsRootPresentationController;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (BOOL)_shouldControlAutorotation;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
