@class MLCPoolingDescriptor;

@interface MLCPoolingLayer : MLCLayer

@property (readonly, copy, nonatomic) MLCPoolingDescriptor *descriptor;

+ (id)layerWithDescriptor:(id)a0;
+ (BOOL)supportsDataType:(int)a0 onDevice:(id)a1;

- (id)initWithDescriptor:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)compileForDevice:(id)a0 sourceTensors:(id)a1 resultTensor:(id)a2;
- (id)summarizedDOTDescription;

@end
