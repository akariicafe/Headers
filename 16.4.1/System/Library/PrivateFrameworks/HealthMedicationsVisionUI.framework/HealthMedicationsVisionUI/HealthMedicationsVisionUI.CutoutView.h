@interface HealthMedicationsVisionUI.CutoutView : UIView {
    void /* unknown type, empty encoding */ cutoutFrame;
    void /* unknown type, empty encoding */ borderWidth;
    void /* unknown type, empty encoding */ cornerRadius;
    void /* unknown type, empty encoding */ checkmarkDiameter;
    void /* unknown type, empty encoding */ expansionAmountForOutlineBox;
    void /* unknown type, empty encoding */ animationSquishAmount;
    void /* unknown type, empty encoding */ $__lazy_storage_$_blurView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_checkmarkView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backgroundLayer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backgroundLayerMask;
    void /* unknown type, empty encoding */ $__lazy_storage_$_borderLayer;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
