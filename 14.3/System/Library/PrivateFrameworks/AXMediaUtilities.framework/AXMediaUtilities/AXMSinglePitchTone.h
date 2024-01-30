@interface AXMSinglePitchTone : AXMTone

- (id)initWithFrequency:(double)a0 sampleRate:(double)a1 envelope:(id)a2;
- (id)initWithSampleRate:(double)a0 envelope:(id)a1;
- (void)renderInBuffer:(struct vector<int, std::__1::allocator<int> > { int *x0; int *x1; struct __compressed_pair<int *, std::__1::allocator<int> > { int *x0; } x2; } *)a0 atFrame:(unsigned long long)a1;

@end
