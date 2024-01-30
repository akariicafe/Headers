@interface SXMosaicGalleryLayoutItem : NSObject

@property (readonly, nonatomic) struct CGSize { double width; double height; } dimensions;
@property (readonly, nonatomic) int tileType;

- (id)initWithDimensions:(struct CGSize { double x0; double x1; })a0;
- (double)aspectRatio;
- (id)description;

@end
