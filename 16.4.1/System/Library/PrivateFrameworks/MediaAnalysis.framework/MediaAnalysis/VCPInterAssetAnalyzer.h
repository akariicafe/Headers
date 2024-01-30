@interface VCPInterAssetAnalyzer : NSObject

+ (BOOL)canUseLastFrameOfAsset:(id)a0 withResources:(id)a1;
+ (struct CGSize { double x0; double x1; })thumbnailSizeForAsset:(id)a0 withResources:(id)a1;

- (id)init;
- (int)_generateLastFrameDistanceDescriptor:(id *)a0 withDescriptorClass:(Class)a1 forAsset:(id)a2;
- (struct __CVBuffer { } *)_getThumbnailForAsset:(id)a0 withResouces:(id)a1 andPixelFormat:(int)a2;
- (int)computeDistance:(float *)a0 fromArray:(id)a1 toArray:(id)a2;
- (int)computeDistance:(float *)a0 withDescriptorClass:(id)a1 fromAsset:(id)a2 toAsset:(id)a3;
- (int)generateDistanceDescriptor:(id *)a0 withDescriptorClass:(Class)a1 forAsset:(id)a2 withResources:(id)a3 lastFrame:(BOOL)a4;

@end
