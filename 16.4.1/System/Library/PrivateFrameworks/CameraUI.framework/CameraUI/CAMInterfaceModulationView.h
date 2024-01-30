@class CALayer, UIView;

@interface CAMInterfaceModulationView : UIView

@property (retain, nonatomic, setter=_setModulationFilterLayer:) CALayer *_modulationFilterLayer;
@property (nonatomic, setter=_setInFlightAnimationCount:) unsigned long long _inFlightAnimationCount;
@property (readonly, weak, nonatomic) UIView *hostingView;
@property (nonatomic) unsigned long long interfaceModulation;

- (void)didAddSubview:(id)a0;
- (void)setInterfaceModulation:(unsigned long long)a0 animated:(BOOL)a1;
- (void)modulationAnimationDidStop:(BOOL)a0;
- (void)_addOrRemoveModulationLayer;
- (id)initWithHostingView:(id)a0;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
