@class NSData;

@interface MPSCNNNeuronPReLU : MPSCNNNeuron {
    NSData *_aData;
}

- (id)initWithDevice:(id)a0 neuronDescriptor:(id)a1 aArray:(const float *)a2;
- (id)initWithDevice:(id)a0 neuronDescriptor:(id)a1;
- (id)initWithDevice:(id)a0 a:(const float *)a1 count:(unsigned long long)a2;

@end
