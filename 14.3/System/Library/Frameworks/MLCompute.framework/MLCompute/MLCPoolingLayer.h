@class MLCPoolingDescriptor;

@interface MLCPoolingLayer : MLCLayer

@property (readonly, copy, nonatomic) MLCPoolingDescriptor *descriptor;

+ (id)layerWithDescriptor:(id)a0;

- (id)initWithDescriptor:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (BOOL)compileForDevice:(id)a0 sourceTensors:(id)a1 resultTensor:(id)a2;
- (id)summarizedDOTDescription;

@end
