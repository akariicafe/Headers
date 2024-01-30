@class NSData;

@interface MPSCNNNeuronPReLUNode : MPSCNNNeuronNode {
    NSData *_aData;
}

+ (id)nodeWithSource:(id)a0 aData:(id)a1;

- (id)descriptor;
- (void)dealloc;
- (id)initWithSource:(id)a0 aData:(id)a1;

@end
