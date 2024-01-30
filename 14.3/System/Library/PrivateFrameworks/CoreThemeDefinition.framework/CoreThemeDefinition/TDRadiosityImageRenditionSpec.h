@class TDFlattenedImageRenditionSpec;

@interface TDRadiosityImageRenditionSpec : TDSimpleArtworkRenditionSpec

@property (retain, nonatomic) TDFlattenedImageRenditionSpec *flattenedImage;

- (id)createCSIRepresentationWithCompression:(BOOL)a0 colorSpaceID:(unsigned long long)a1 document:(id)a2;
- (BOOL)updatePackingPropertiesWithDocument:(id)a0;

@end
