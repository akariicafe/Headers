@interface TSDContentLocation : NSObject <NSCopying>

@property (nonatomic) struct CGPoint { double x; double y; } unscaledPoint;
@property (nonatomic) double viewScale;

+ (id)contentLocation;
+ (id)contentLocationWithUnscaledPoint:(struct CGPoint { double x0; double x1; })a0 viewScale:(double)a1;
+ (id)contentLocationInterpolatingFromLocation:(id)a0 toLocation:(id)a1 fraction:(double)a2;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
