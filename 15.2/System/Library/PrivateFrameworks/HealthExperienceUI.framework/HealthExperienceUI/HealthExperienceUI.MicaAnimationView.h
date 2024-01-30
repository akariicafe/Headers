@interface HealthExperienceUI.MicaAnimationView : UIView {
    void /* unknown type, empty encoding */ packageLayer;
    void /* unknown type, empty encoding */ package;
    void /* unknown type, empty encoding */ stateController;
    void /* unknown type, empty encoding */ animation;
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ transitionSpeed;
    void /* unknown type, empty encoding */ insetSize;
    void /* unknown type, empty encoding */ scaleForDeviceSize;
    void /* unknown type, empty encoding */ loopCount;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)stepAnimationForLayer:(id)a0;

@end
