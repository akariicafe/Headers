@interface MLCReductionLayer : MLCLayer

@property (readonly, nonatomic) int reductionType;
@property (readonly, nonatomic) unsigned long long dimension;

+ (id)layerWithReductionType:(int)a0 dimension:(unsigned long long)a1;

- (id)description;
- (BOOL)compileForDevice:(id)a0 sourceTensors:(id)a1 resultTensor:(id)a2;
- (id)summarizedDOTDescription;
- (BOOL)isSupportedShapeForTensorSources:(id)a0;
- (unsigned long long)resultSizeFromSourceSize:(unsigned long long)a0 dimension:(unsigned long long)a1;
- (id)resultTensorFromSources:(id)a0;
- (id)initWithReduceType:(int)a0 dimension:(unsigned long long)a1;

@end
