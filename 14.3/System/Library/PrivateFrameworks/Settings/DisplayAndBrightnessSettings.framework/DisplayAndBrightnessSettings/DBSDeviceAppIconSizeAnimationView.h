@class CALayer, CAPackage, CAStateController;

@interface DBSDeviceAppIconSizeAnimationView : UIView

@property (nonatomic) unsigned long long _deviceAppIconSize;
@property (retain, nonatomic) CALayer *packageLayer;
@property (retain, nonatomic) CAPackage *package;
@property (retain, nonatomic) CAStateController *stateController;
@property (nonatomic) unsigned long long state;
@property (nonatomic) float duration;
@property (nonatomic, getter=isAnimating) BOOL animating;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)_setPackage:(id)a0;
- (void)stopAnimation;
- (void)_startAnimationForLayer:(id)a0;
- (void)startAnimation;
- (void)traitCollectionDidChange:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_configureView;
- (void)_stepAnimamtionForLayer:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 deviceAppIconSize:(unsigned long long)a1;

@end
