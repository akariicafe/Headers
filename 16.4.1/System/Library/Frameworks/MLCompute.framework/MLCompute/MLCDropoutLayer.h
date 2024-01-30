@interface MLCDropoutLayer : MLCLayer

@property (readonly, nonatomic) float rate;
@property (readonly, nonatomic) unsigned long long seed;

+ (id)layerWithRate:(float)a0 seed:(unsigned long long)a1;

- (id)description;
- (BOOL)compileForDevice:(id)a0 sourceTensors:(id)a1 resultTensor:(id)a2;
- (id)initWithRate:(float)a0 seed:(unsigned long long)a1;
- (BOOL)isSupportedShapeForTensorSources:(id)a0;
- (id)resultTensorFromSources:(id)a0;
- (id)summarizedDOTDescription;

@end
