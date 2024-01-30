@interface SXMosaicGalleryLayoutItem : NSObject

@property (readonly, nonatomic) struct CGSize { double width; double height; } dimensions;
@property (readonly, nonatomic) int tileType;

- (double)aspectRatio;
- (id)description;
- (id)initWithDimensions:(struct CGSize { double x0; double x1; })a0;

@end
