@interface PXPlacesMapPipelineFactory : NSObject

+ (id)defaultPipelineForDataSource:(id)a0;
+ (id)pinPipelineForDataSource:(id)a0;
+ (id)thumbnailPipelineForDataSource:(id)a0 extendedTraitCollection:(id)a1 geotaggableInfo:(id)a2;
+ (id)thumbnailPipelineForDataSource:(id)a0 extendedTraitCollection:(id)a1 geotaggableInfo:(id)a2 popoverImageType:(unsigned long long)a3 popoverImageOptions:(unsigned long long)a4;

@end
