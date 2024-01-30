@class NSOrderedSet, TDRadiosityImageRenditionSpec;

@interface TDFlattenedImageRenditionSpec : TDSimpleArtworkRenditionSpec

@property (retain, nonatomic) NSOrderedSet *layerReferences;
@property (retain, nonatomic) TDRadiosityImageRenditionSpec *radiosityImage;

- (id)createCSIRepresentationWithCompression:(BOOL)a0 colorSpaceID:(unsigned long long)a1 document:(id)a2;
- (void)drawFlattenedImageIntoContext:(struct CGContext { } *)a0 document:(id)a1;
- (void)addLayerReferencesObject:(id)a0;
- (BOOL)updatePackingPropertiesWithDocument:(id)a0;

@end
