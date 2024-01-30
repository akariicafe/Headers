@interface MPSNDArrayGradientState : MPSState {
    unsigned long long _srcCount;
    struct NDArraySrcInfo { unsigned long long x0; } *_srcInfo;
    unsigned int _provenance;
}

- (void)dealloc;
- (id)initWithSourceCount:(unsigned long long)a0;
- (id)destinationArrayDescriptorForSourceArrays:(id)a0 sourceGradientIndex:(unsigned long long)a1;

@end
