@class TSUColor;

@interface TSDMutableCurvedShadow : TSDCurvedShadow

@property (nonatomic) double curve;
@property (nonatomic) double offset;
@property (nonatomic) double angle;
@property (nonatomic) struct CGColor { } *color;
@property (nonatomic) double radius;
@property (nonatomic) double opacity;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) TSUColor *TSUColor;

- (void)setOffset:(double)a0;
- (void)setCurve:(double)a0;
- (void)setRadius:(double)a0;
- (void)setColor:(struct CGColor { } *)a0;
- (void)setOpacity:(double)a0;
- (void)setAngle:(double)a0;
- (void)setTSUColor:(id)a0;

@end
