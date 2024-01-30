@class MLCYOLOLossDescriptor;

@interface MLCYOLOLossLayer : MLCLossLayer

@property (readonly, copy, nonatomic) MLCYOLOLossDescriptor *yoloLossDescriptor;

+ (id)layerWithDescriptor:(id)a0;

- (void).cxx_destruct;
- (id)description;
- (BOOL)compileForDevice:(id)a0 sourceTensors:(id)a1 resultTensor:(id)a2;
- (id)summarizedDOTDescription;
- (unsigned long long)resultSizeFromSourceSize:(unsigned long long)a0 dimension:(unsigned long long)a1;
- (id)initWithLossDescriptor:(id)a0;

@end
