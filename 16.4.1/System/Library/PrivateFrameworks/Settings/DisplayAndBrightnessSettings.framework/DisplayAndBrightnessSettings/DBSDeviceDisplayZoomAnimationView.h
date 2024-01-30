@class CALayer, CAPackage, CAStateController;

@interface DBSDeviceDisplayZoomAnimationView : UIView

@property (nonatomic) unsigned long long displayZoomOption;
@property (retain, nonatomic) CALayer *packageLayer;
@property (retain, nonatomic) CAPackage *package;
@property (retain, nonatomic) CAStateController *stateController;
@property (nonatomic) unsigned long long state;
@property (nonatomic) float duration;
@property (nonatomic, getter=isAnimating) BOOL animating;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } preferredSize;
@property (nonatomic) double scale;

- (void)startAnimation;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setPackage:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)stopAnimation;
- (void).cxx_destruct;
- (void)_startAnimationForLayer:(id)a0;
- (void)_configureView;
- (void)_stepAnimamtionForLayer:(id)a0;
- (id)initWithDisplayZoomOption:(unsigned long long)a0;

@end
