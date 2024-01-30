@interface TSDImageDataAttributes : TSPDataAttributes

@property (readonly, nonatomic) struct CGSize { double width; double height; } pixelSize;
@property (readonly, nonatomic) BOOL hasPixelSize;
@property (readonly, nonatomic) BOOL imageIsSRGB;
@property (readonly, nonatomic) BOOL hasImageIsSRGB;
@property (readonly, nonatomic) BOOL shouldBeInterpretedAsGenericIfUntagged;

- (id)initWithMessage:(const void *)a0;
- (struct CGSize { double x0; double x1; })size;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)saveToMessage:(void *)a0;
- (id)copyWithShouldBeInterpretedAsGenericIfUntagged:(BOOL)a0;
- (id)initWithShouldBeInterpretedAsGenericIfUntagged:(BOOL)a0;
- (id)copyWithPixelSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithPixelSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithIsSRGB:(BOOL)a0;
- (id)copyWithIsSRGB:(BOOL)a0;

@end
