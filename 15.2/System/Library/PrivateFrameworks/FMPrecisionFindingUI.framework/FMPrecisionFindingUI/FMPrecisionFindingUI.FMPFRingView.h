@class NSString;

@interface FMPrecisionFindingUI.FMPFRingView : UIView {
    void /* unknown type, empty encoding */ style;
    void /* unknown type, empty encoding */ sceneSize;
    void /* unknown type, empty encoding */ verticalOffset;
    void /* unknown type, empty encoding */ diskRadius;
    void /* unknown type, empty encoding */ additionalRadiusScale;
    void /* unknown type, empty encoding */ startAngle;
    void /* unknown type, empty encoding */ endAngle;
    void /* unknown type, empty encoding */ startAngleSpring;
    void /* unknown type, empty encoding */ endAngleSpring;
    void /* unknown type, empty encoding */ additionalRadiusScaleSpring;
    void /* unknown type, empty encoding */ opacitySpring;
}

@property (class, nonatomic, readonly) Class layerClass;

@property (nonatomic, readonly) NSString *description;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)dealloc;

@end
