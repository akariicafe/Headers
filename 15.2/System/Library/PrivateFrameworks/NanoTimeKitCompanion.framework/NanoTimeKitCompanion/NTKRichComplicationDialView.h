@class CALayer, CAReplicatorLayer;

@interface NTKRichComplicationDialView : UIView {
    CAReplicatorLayer *_largeTicksReplicatorLayer;
    double _largeTickPositionY;
    CAReplicatorLayer *_smallTicksReplicatorLayer;
    double _smallTickPositionY;
    long long _largeTickCount;
    long long _smallTickCountPerLargeTick;
    double _largeTicksTransformAngle;
}

@property (readonly, nonatomic) CALayer *largeTickLayer;
@property (readonly, nonatomic) CALayer *smallTickLayer;
@property (nonatomic) float progress;
@property (nonatomic) float progressDirection;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)setLargeTicksTransformAngle:(double)a0;
- (id)initWithLargeTickCount:(long long)a0 smallTickCountPerLargeTick:(long long)a1 largeTickSize:(struct CGSize { double x0; double x1; })a2 smallTickSize:(struct CGSize { double x0; double x1; })a3 dialRange:(double)a4 startAngle:(double)a5;
- (void)_updateTicksRotationTransform;
- (id)initWithTickCount:(long long)a0 tickSize:(struct CGSize { double x0; double x1; })a1 dialRange:(double)a2 startAngle:(double)a3;

@end
