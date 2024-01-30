@interface AGXGPURawCounterSourceGroup : _GPURawCounterSourceGroup {
    struct AGXGPURawCounter { void /* function */ **x0; } *_impl;
}

- (id)initWithAcceleratorPort:(unsigned int)a0;
- (BOOL)stopSampling;
- (void)dealloc;
- (void)setOptions:(id)a0;
- (BOOL)startSampling;
- (id)subDivideCounterList:(id)a0 withOptions:(id)a1;
- (unsigned long long)sampleMarker;

@end
