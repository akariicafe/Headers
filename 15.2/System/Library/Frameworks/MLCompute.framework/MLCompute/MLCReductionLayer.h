@class NSArray;

@interface MLCReductionLayer : MLCLayer

@property (readonly, nonatomic) int reductionType;
@property (readonly, nonatomic) unsigned long long dimension;
@property (readonly, nonatomic) NSArray *dimensions;

+ (BOOL)supportsDataType:(int)a0 onDevice:(id)a1;
+ (id)layerWithReductionType:(int)a0 dimension:(unsigned long long)a1;
+ (id)layerWithReductionType:(int)a0 dimensions:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (BOOL)compileForDevice:(id)a0 sourceTensors:(id)a1 resultTensor:(id)a2;
- (id)summarizedDOTDescription;
- (BOOL)isSupportedShapeForTensorSources:(id)a0;
- (id)resultTensorFromSources:(id)a0;
- (unsigned long long)resultSizeFromSourceSize:(unsigned long long)a0 dimension:(unsigned long long)a1;
- (id)initWithReduceType:(int)a0 dimensions:(id)a1;

@end
