@interface CRScriptIdentificationUtils : NSObject

+ (void)assignScriptCategory:(id)a0 probability:(void *)a1 assignedIndex:(long long)a2 scriptCount:(struct vector<long, std::allocator<long>> { long long *x0; long long *x1; struct __compressed_pair<long *, std::allocator<long>> { long long *x0; } x2; })a3;
+ (void)checkUseSequenceScriptLocale:(id)a0 probability:(void *)a1 assignedIndex:(long long)a2 size:(struct CGSize { double x0; double x1; })a3;
+ (long long)computeAssignedIndex:(void *)a0 scriptRatioThresholds:(id)a1;
+ (void)computeSingleTextFeatureScriptCategory:(id)a0 scriptMap:(const void *)a1 scriptRatioThresholds:(id)a2;
+ (void)computeTextFeatureScriptCategory:(id)a0 scriptMap:(const void *)a1 scriptMapFullTile:(const void *)a2 withScaleIds:(const void *)a3 scriptRatioThresholds:(id)a4;
+ (struct vector<std::unique_ptr<CRImageBuffer>, std::allocator<std::unique_ptr<CRImageBuffer>>> { void *x0; void *x1; struct __compressed_pair<std::unique_ptr<CRImageBuffer> *, std::allocator<std::unique_ptr<CRImageBuffer>>> { void *x0; } x2; })createMaps:(struct CGSize { double x0; double x1; })a0 channels:(long long)a1;
+ (struct vector<std::unique_ptr<CRImageBuffer>, std::allocator<std::unique_ptr<CRImageBuffer>>> { void *x0; void *x1; struct __compressed_pair<std::unique_ptr<CRImageBuffer> *, std::allocator<std::unique_ptr<CRImageBuffer>>> { void *x0; } x2; })createMapsFromMLMultiArray:(id)a0 size:(struct CGSize { double x0; double x1; })a1 channels:(long long)a2;
+ (struct vector<float *, std::allocator<float *>> { float **x0; float **x1; struct __compressed_pair<float **, std::allocator<float *>> { float **x0; } x2; })getBufferData:(const void *)a0;

@end
