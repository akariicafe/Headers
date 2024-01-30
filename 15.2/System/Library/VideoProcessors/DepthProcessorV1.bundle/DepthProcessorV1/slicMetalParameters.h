@interface slicMetalParameters : NSObject

@property (nonatomic) struct CGSize { double width; double height; } inputImageSize;
@property (nonatomic) struct CGSize { double width; double height; } mapSize;
@property (nonatomic) float superPixelSize;
@property (nonatomic) unsigned int no_iters;
@property (nonatomic) float defaultsSlicoSpatialBias;
@property (nonatomic) float slicoInverseWeight;

@end
