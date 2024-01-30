@class CKDismissView, NSArray, NSString, CKActionMenuView;

@interface CKActionMenuWindow : UIAutoRotatingWindow <CKDismissViewDelegate>

@property (retain, nonatomic) CKActionMenuView *actionMenuView;
@property (retain, nonatomic) CKDismissView *dismissView;
@property (copy, nonatomic) NSArray *passthroughViews;
@property (nonatomic) BOOL shouldDismissOnTap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)_shouldAutorotateToInterfaceOrientation:(long long)a0;
- (BOOL)_canAffectStatusBarAppearance;
- (void)dismissViewWasTapped:(id)a0;
- (void).cxx_destruct;
- (void)dismissActionMenuViewAnimated:(BOOL)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)presentActionMenuView:(id)a0 fromPoint:(struct CGPoint { double x0; double x1; })a1 inView:(id)a2 animated:(BOOL)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)actionMenuGestureRecognized:(id)a0;

@end
