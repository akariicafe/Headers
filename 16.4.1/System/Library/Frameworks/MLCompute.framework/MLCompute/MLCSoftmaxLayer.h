@interface MLCSoftmaxLayer : MLCLayer

@property (readonly, nonatomic) int operation;
@property (readonly, nonatomic) unsigned long long dimension;

+ (id)layerWithOperation:(int)a0;
+ (id)layerWithOperation:(int)a0 dimension:(unsigned long long)a1;

- (id)description;
- (BOOL)compileForDevice:(id)a0 sourceTensors:(id)a1 resultTensor:(id)a2;
- (id)initWithSoftmaxOperation:(int)a0 dimension:(unsigned long long)a1;
- (BOOL)isSupportedShapeForTensorSources:(id)a0;
- (id)resultTensorFromSources:(id)a0;
- (id)summarizedDOTDescription;

@end
