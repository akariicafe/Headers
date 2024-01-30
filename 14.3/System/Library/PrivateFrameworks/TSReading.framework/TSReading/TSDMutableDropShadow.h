@interface TSDMutableDropShadow : TSDDropShadow

@property (nonatomic) double angle;
@property (nonatomic) double offset;
@property (nonatomic) double radius;
@property (nonatomic) double opacity;
@property (nonatomic) struct CGColor { } *color;
@property (nonatomic, getter=isEnabled) BOOL enabled;

- (void)setRadius:(double)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setOpacity:(double)a0;
- (void)setAngle:(double)a0;
- (void)setColor:(struct CGColor { } *)a0;
- (void)setEnabled:(BOOL)a0;
- (void)setOffset:(double)a0;
- (void)setTSUColor:(id)a0;

@end
