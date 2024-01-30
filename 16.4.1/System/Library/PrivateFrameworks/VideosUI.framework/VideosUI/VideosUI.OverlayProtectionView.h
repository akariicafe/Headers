@interface VideosUI.OverlayProtectionView : VUIBaseView {
    void /* unknown type, empty encoding */ legibilityGradientLayer;
    void /* unknown type, empty encoding */ legibilityBlurView;
    void /* unknown type, empty encoding */ legibilityBlurMaskLayer;
    void /* unknown type, empty encoding */ cornerBlurView;
    void /* unknown type, empty encoding */ cornerBlurMaskLayer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_legibilityGradientLayerDelegate;
    void /* unknown type, empty encoding */ $__lazy_storage_$_legibilityBlurMaskLayerDelegate;
    void /* unknown type, empty encoding */ $__lazy_storage_$_cornerBlurMaskLayerDelegate;
    void /* unknown type, empty encoding */ protectionHeight;
    void /* unknown type, empty encoding */ cornerRadius;
}

- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;

@end
