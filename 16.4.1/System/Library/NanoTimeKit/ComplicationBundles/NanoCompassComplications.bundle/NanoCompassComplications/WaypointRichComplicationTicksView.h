@class UIColor, CAReplicatorLayer, CALayer;

@interface WaypointRichComplicationTicksView : UIView {
    CAReplicatorLayer *_largeTicksReplicatorLayer;
    CALayer *_largeTickLayer;
    double _largeTickPositionY;
    CAReplicatorLayer *_smallTicksReplicatorLayer;
    CALayer *_smallTickLayer;
    double _smallTickPositionY;
    CAReplicatorLayer *_highlightedLargeTicksReplicatorLayer;
    CALayer *_highlightedLargeTickLayer;
    CAReplicatorLayer *_highlightedSmallTicksReplicatorLayer;
    CALayer *_highlightedSmallTickLayer;
    long long _largeTickCount;
    long long _smallTickCountPerLargeTick;
    double _largeTicksTransformAngle;
}

@property (retain, nonatomic) UIColor *largeTickColor;
@property (retain, nonatomic) UIColor *smallTickColor;
@property (retain, nonatomic) UIColor *highlightColor;
@property (nonatomic) float progress;
@property (nonatomic) float progressDirection;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_updateTicksRotationTransform;
- (id)initWithLargeTickCount:(long long)a0 smallTickCountPerLargeTick:(long long)a1 largeTickSize:(struct CGSize { double x0; double x1; })a2 smallTickSize:(struct CGSize { double x0; double x1; })a3 dialRange:(double)a4 startAngle:(double)a5;
- (void)setLargeTicksTransformAngle:(double)a0;

@end
