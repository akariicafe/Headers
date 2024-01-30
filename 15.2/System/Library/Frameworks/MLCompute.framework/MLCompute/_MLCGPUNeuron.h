@interface _MLCGPUNeuron : _MLCGPULayer

+ (int)mpsNeurontypeFrom:(int)a0;
+ (id)createMPSNeuronDescriptorWith:(id)a0;
+ (id)layerWithDevice:(id)a0 descriptor:(id)a1;

- (id)initWithDevice:(id)a0 descriptor:(id)a1;

@end
