@class NSArray;

@interface MLCTransposeLayer : MLCLayer

@property (readonly, nonatomic) NSArray *shape;
@property (readonly, copy, nonatomic) NSArray *dimensions;

+ (id)layerWithDimensions:(id)a0;

- (id)initWithDimensions:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (BOOL)compileForDevice:(id)a0 sourceTensors:(id)a1 resultTensor:(id)a2;
- (id)summarizedDOTDescription;
- (BOOL)isSupportedShapeForTensorSources:(id)a0;
- (unsigned long long)resultSizeFromSourceSize:(unsigned long long)a0 dimension:(unsigned long long)a1;
- (id)resultTensorFromSources:(id)a0;
- (unsigned long long)resultSizeFromSourceSizes:(id)a0 dimension:(unsigned long long)a1;
- (BOOL)isStaticBatchSize;

@end
