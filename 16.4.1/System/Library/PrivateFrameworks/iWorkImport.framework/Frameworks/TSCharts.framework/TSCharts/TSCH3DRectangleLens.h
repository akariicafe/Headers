@interface TSCH3DRectangleLens : TSCH3DLens

@property (readonly, nonatomic) float width;
@property (readonly, nonatomic) float height;
@property (nonatomic) float left;
@property (nonatomic) float right;
@property (nonatomic) float bottom;
@property (nonatomic) float top;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void)normalize;
- (void)deviceNormalize;
- (id)frustumRect;
- (id)narrowByNormalizedBounds:(const void *)a0;
- (id)narrowedByNormalizedBounds:(const void *)a0;
- (void)setPerPixel:(const void *)a0;
- (void)setPerPixelSize:(const void *)a0;
- (id)shiftByPercentage:(const void *)a0;
- (id)shiftedByPercentage:(const void *)a0;

@end
