@interface MSImageScalingSpecification : NSObject

@property (nonatomic) double nominalShortSideLength;
@property (nonatomic) double minimumLongSideLength;
@property (nonatomic) double maximumLongSideLength;
@property (nonatomic) int assetTypeFlags;

+ (id)assetsToGenerateFromImageWithInputSize:(struct CGSize { double x0; double x1; })a0 toConformToSpecifications:(id)a1;
+ (id)specificationWithSharedAlbumSpecificationString:(id)a0;

- (double)scaleFactorForInputSize:(struct CGSize { double x0; double x1; })a0;
- (id)description;

@end
