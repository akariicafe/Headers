@interface TSDMutableReflection : TSDReflection

@property (nonatomic) double opacity;
@property (nonatomic) double fadeAcceleration;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setOpacity:(double)a0;
- (void)setFadeAcceleration:(double)a0;

@end
