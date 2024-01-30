@class CALayer, CAShapeLayer;

@interface FMFAnnotationView : FMAnnotationView

@property (retain, nonatomic) CAShapeLayer *accuracyLayer;
@property (retain, nonatomic) CAShapeLayer *smallPulseLayer;
@property (retain, nonatomic) CAShapeLayer *largePulseLayer;
@property (nonatomic) double lastAccuracyRadius;
@property (retain, nonatomic) CALayer *stewieSmallBadgeLayer;
@property (retain, nonatomic) CALayer *stewieLargeBadgeLayer;
@property (nonatomic) BOOL isLiveAnimated;

- (void).cxx_destruct;
- (id)initWithAnnotation:(id)a0 reuseIdentifier:(id)a1 tintColor:(id)a2;
- (id)buildStewieLayerWithDiameter:(double)a0 image:(id)a1 size:(struct CGSize { double x0; double x1; })a2 offsetInParentLayer:(id)a3 by:(struct CGPoint { double x0; double x1; })a4;
- (id)buildAccuracyLayer;
- (id)buildPulseLayerWithDiameter:(double)a0 centeredInParentLayer:(id)a1;
- (void)startLiveAnimation;
- (void)stopLiveAnimation;
- (void)updateWithLocation:(id)a0;

@end
