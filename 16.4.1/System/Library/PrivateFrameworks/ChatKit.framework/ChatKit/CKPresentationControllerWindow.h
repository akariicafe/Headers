@interface CKPresentationControllerWindow : UIWindow

@property (nonatomic) BOOL restrictedToPortraitOrientation;

- (BOOL)_canAffectStatusBarAppearance;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 allowsRotation:(BOOL)a1 restrictedToPortraitOrientation:(BOOL)a2;
- (id)initWithWindowScene:(id)a0 allowsRotation:(BOOL)a1 restrictedToPortraitOrientation:(BOOL)a2;
- (id)initWithWindowScene:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 allowsRotation:(BOOL)a2 restrictedToPortraitOrientation:(BOOL)a3;
- (void)restrictedToPortraitOrientation:(BOOL)a0;

@end
