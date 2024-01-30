@class NSArray;

@interface MLCTransposeLayer : MLCLayer

@property (readonly, nonatomic) NSArray *shape;
@property (readonly, copy, nonatomic) NSArray *dimensions;

+ (id)layerWithDimensions:(id)a0;
+ (BOOL)supportsDataType:(int)a0 onDevice:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDimensions:(id)a0;
- (BOOL)compileForDevice:(id)a0 sourceTensors:(id)a1 resultTensor:(id)a2;
- (id)summarizedDOTDescription;
- (BOOL)isSupportedShapeForTensorSources:(id)a0;
- (id)resultTensorFromSources:(id)a0;
- (unsigned long long)resultSizeFromSourceSize:(unsigned long long)a0 dimension:(unsigned long long)a1;
- (unsigned long long)resultSizeFromSourceSizes:(id)a0 dimension:(unsigned long long)a1;
- (BOOL)isStaticBatchSize;

@end
