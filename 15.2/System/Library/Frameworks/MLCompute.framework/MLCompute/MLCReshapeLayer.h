@class NSArray;

@interface MLCReshapeLayer : MLCLayer

@property (readonly, copy, nonatomic) NSArray *shape;

+ (id)layerWithShape:(id)a0;
+ (BOOL)supportsDataType:(int)a0 onDevice:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (id)initWithShape:(id)a0;
- (BOOL)compileForDevice:(id)a0 sourceTensors:(id)a1 resultTensor:(id)a2;
- (id)summarizedDOTDescription;
- (BOOL)isSupportedShapeForTensorSources:(id)a0;
- (id)resultTensorFromSources:(id)a0;
- (unsigned long long)resultSizeFromSourceSize:(unsigned long long)a0 dimension:(unsigned long long)a1;
- (unsigned long long)deviceMemorySizeWithOptimizer:(id)a0 device:(id)a1;
- (unsigned long long)deviceMemorySizeForForward;
- (BOOL)isStaticBatchSize;

@end
