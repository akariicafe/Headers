@interface MPSNDArrayGatherGradientState : MPSNDArrayGradientState {
    unsigned char _axis;
}

- (id)destinationArrayDescriptorForSourceArrays:(id)a0 sourceGradientIndex:(unsigned long long)a1;

@end
