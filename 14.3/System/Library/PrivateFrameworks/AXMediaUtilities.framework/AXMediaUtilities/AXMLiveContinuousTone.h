@interface AXMLiveContinuousTone : AXMTone

@property (readonly, nonatomic) double phase;
@property (nonatomic) unsigned long long framesRendered;
@property (nonatomic) BOOL releasing;
@property (nonatomic) unsigned long long releaseFrame;
@property (nonatomic) BOOL muted;

- (void)startRelease;
- (void)renderInBuffer:(struct vector<int, std::__1::allocator<int> > { int *x0; int *x1; struct __compressed_pair<int *, std::__1::allocator<int> > { int *x0; } x2; } *)a0 atFrame:(unsigned long long)a1 numSamples:(unsigned long long)a2;
- (void)setFrequency:(double)a0;
- (void)resetRelease;
- (id)initWithSampleRate:(double)a0 envelope:(id)a1;

@end
