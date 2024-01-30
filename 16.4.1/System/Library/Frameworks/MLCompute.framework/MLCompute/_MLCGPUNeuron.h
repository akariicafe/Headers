@interface _MLCGPUNeuron : _MLCGPULayer

+ (id)createMPSNeuronDescriptorWith:(id)a0;
+ (id)layerWithDevice:(id)a0 descriptor:(id)a1;
+ (int)mpsNeurontypeFrom:(int)a0;

- (id)initWithDevice:(id)a0 descriptor:(id)a1;

@end
