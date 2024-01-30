@interface RawDFNetworkCommon : NSObject

+ (id)platformIdentifier;
+ (int)allocateBuffersForNetwork:(struct { void *x0; int x1; } *)a0 bindMode:(int)a1 bindBuffers:(BOOL)a2 descriptions:(const struct NameAndSize { char *x0; unsigned long long x1; unsigned long long x2; } *)a3 textures:(id *)a4 pixelBuffers:(struct __CVBuffer **)a5 numBuffers:(unsigned long long)a6 pixelFormat:(unsigned int)a7 metalContext:(id)a8;
+ (int)loadEspressoNetworkFromPath:(id)a0 andStoreNetwork:(struct { void *x0; int x1; } *)a1 andPlan:(void **)a2 espressoContext:(void **)a3;
+ (id)rawDFnetworkTypeToString:(int)a0;

@end
