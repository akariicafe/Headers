@class CKActionMenuView;

@interface CKActionMenuWindow : UIAutoRotatingWindow

@property (retain, nonatomic) CKActionMenuView *actionMenuView;
@property (nonatomic) BOOL shouldDismissOnTap;

+ (id)sharedInstance;

- (void)actionMenuGestureRecognized:(id)a0;
- (void)presentActionMenuView:(id)a0 fromPoint:(struct CGPoint { double x0; double x1; })a1 inView:(id)a2 animated:(BOOL)a3;
- (BOOL)_canAffectStatusBarAppearance;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)dismissActionMenuViewAnimated:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)_shouldAutorotateToInterfaceOrientation:(long long)a0;

@end
