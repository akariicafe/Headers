@interface HealthExperienceUI.ProfileGradientView : UIView {
    void /* unknown type, empty encoding */ lastAnimate;
    void /* unknown type, empty encoding */ angle;
    void /* unknown type, empty encoding */ defaultColor;
    void /* unknown type, empty encoding */ staticAngle;
    void /* unknown type, empty encoding */ $__lazy_storage_$_displayLink;
}

@property (class, nonatomic, readonly) Class layerClass;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)didMoveToSuperview;
- (void).cxx_destruct;
- (void)updateGradient;

@end
