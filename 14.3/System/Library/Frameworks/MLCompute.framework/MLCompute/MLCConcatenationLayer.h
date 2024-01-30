@interface MLCConcatenationLayer : MLCLayer

@property (readonly, nonatomic) unsigned long long dimension;

+ (id)layer;
+ (id)layerWithDimension:(unsigned long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)compileForDevice:(id)a0 sourceTensors:(id)a1 resultTensor:(id)a2;
- (id)summarizedDOTDescription;
- (BOOL)isSupportedShapeForTensorSources:(id)a0;
- (id)resultTensorFromSources:(id)a0;
- (unsigned long long)deviceMemorySizeWithOptimizer:(id)a0 device:(id)a1;
- (unsigned long long)deviceMemorySizeForForward;
- (BOOL)isStaticBatchSize;
- (id)initWithDimension:(unsigned long long)a0;

@end
