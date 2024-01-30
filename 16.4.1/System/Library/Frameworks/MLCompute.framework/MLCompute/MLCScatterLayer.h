@interface MLCScatterLayer : MLCLayer

@property (readonly, nonatomic) unsigned long long dimension;
@property (readonly, nonatomic) int reductionType;

+ (id)layerWithDimension:(unsigned long long)a0 reductionType:(int)a1;

- (id)description;
- (BOOL)compileForDevice:(id)a0 sourceTensors:(id)a1 resultTensor:(id)a2;
- (id)initWithDimension:(unsigned long long)a0 reductionType:(int)a1;
- (BOOL)isSupportedShapeForTensorSources:(id)a0;
- (id)resultTensorFromSources:(id)a0;
- (id)summarizedDOTDescription;

@end
