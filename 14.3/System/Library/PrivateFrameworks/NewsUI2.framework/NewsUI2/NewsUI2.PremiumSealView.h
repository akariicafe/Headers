@interface NewsUI2.PremiumSealView : UIView <TUMotionManagerObserver> {
    void /* unknown type, empty encoding */ isHidingSeal;
    void /* unknown type, empty encoding */ innerImageView;
    void /* unknown type, empty encoding */ outerImageShineView;
    void /* unknown type, empty encoding */ innerImageShineView;
    void /* unknown type, empty encoding */ shineImageFactory;
    void /* unknown type, empty encoding */ eventManager;
}

- (void)motionManager:(id)a0 didUpdateMotionData:(id)a1;
- (void)motionManager:(id)a0 motionEnabled:(BOOL)a1;
- (void).cxx_destruct;
- (void)willMoveToWindow:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
