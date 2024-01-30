@class AVAudioEngine, AUAudioUnit, AVAudioTime;

@interface AVAudioNode : NSObject {
    void *_impl;
}

@property (readonly, nonatomic) struct AVAudioNodeImplBase { void /* function */ **x0; struct AVAudioEngineImpl *x1; id x2; struct vector<bool, std::__1::allocator<bool> > { unsigned long long *x0; unsigned long long x1; struct __compressed_pair<unsigned long, std::__1::allocator<unsigned long> > { unsigned long long x0; } x2; } x3; BOOL x4; BOOL x5; struct unique_ptr<AVAudioMixingImpl, std::__1::default_delete<AVAudioMixingImpl> > { struct __compressed_pair<AVAudioMixingImpl *, std::__1::default_delete<AVAudioMixingImpl> > { struct AVAudioMixingImpl *x0; } x0; } x6; struct unique_ptr<std::__1::map<std::__1::pair<AVAudioNode *, unsigned int>, AVAudioMixingDestination *, std::__1::less<std::__1::pair<AVAudioNode *, unsigned int> >, std::__1::allocator<std::__1::pair<const std::__1::pair<AVAudioNode *, unsigned int>, AVAudioMixingDestination *> > >, std::__1::default_delete<std::__1::map<std::__1::pair<AVAudioNode *, unsigned int>, AVAudioMixingDestination *, std::__1::less<std::__1::pair<AVAudioNode *, unsigned int> >, std::__1::allocator<std::__1::pair<const std::__1::pair<AVAudioNode *, unsigned int>, AVAudioMixingDestination *> > > > > { struct __compressed_pair<std::__1::map<std::__1::pair<AVAudioNode *, unsigned int>, AVAudioMixingDestination *, std::__1::less<std::__1::pair<AVAudioNode *, unsigned int> >, std::__1::allocator<std::__1::pair<const std::__1::pair<AVAudioNode *, unsigned int>, AVAudioMixingDestination *> > > *, std::__1::default_delete<std::__1::map<std::__1::pair<AVAudioNode *, unsigned int>, AVAudioMixingDestination *, std::__1::less<std::__1::pair<AVAudioNode *, unsigned int> >, std::__1::allocator<std::__1::pair<const std::__1::pair<AVAudioNode *, unsigned int>, AVAudioMixingDestination *> > > > > { struct map<std::__1::pair<AVAudioNode *, unsigned int>, AVAudioMixingDestination *, std::__1::less<std::__1::pair<AVAudioNode *, unsigned int> >, std::__1::allocator<std::__1::pair<const std::__1::pair<AVAudioNode *, unsigned int>, AVAudioMixingDestination *> > > *x0; } x0; } x7; BOOL x8; long long x9; double x10; struct atomic<double> { struct __cxx_atomic_impl<double, std::__1::__cxx_atomic_base_impl<double> > { _Atomic double x0; } x0; } x11; } *impl;
@property (readonly, nonatomic) AVAudioEngine *engine;
@property (readonly, nonatomic) unsigned long long numberOfInputs;
@property (readonly, nonatomic) unsigned long long numberOfOutputs;
@property (readonly, nonatomic) AVAudioTime *lastRenderTime;
@property (readonly, nonatomic) AUAudioUnit *AUAudioUnit;
@property (readonly, nonatomic) double latency;
@property (readonly, nonatomic) double outputPresentationLatency;

- (struct AVAudio3DPoint { float x0; float x1; float x2; })position;
- (float)rate;
- (id)clock;
- (float)volume;
- (void)setVolume:(float)a0;
- (id)init;
- (void)reset;
- (long long)sourceMode;
- (float)reverbBlend;
- (void)dealloc;
- (float)obstruction;
- (float)pan;
- (void)didAttachToEngine:(id)a0;
- (void)didDetachFromEngine:(id)a0 error:(id *)a1;
- (long long)renderingAlgorithm;
- (void)setRenderingAlgorithm:(long long)a0;
- (void)setSourceMode:(long long)a0;
- (long long)pointSourceInHeadMode;
- (void)setPointSourceInHeadMode:(long long)a0;
- (void)setReverbBlend:(float)a0;
- (void)setObstruction:(float)a0;
- (void)setOcclusion:(float)a0;
- (id)destinationForMixer:(id)a0 bus:(unsigned long long)a1;
- (id)initWithImpl:(struct AVAudioNodeImplBase { void /* function */ **x0; struct AVAudioEngineImpl *x1; id x2; struct vector<bool, std::__1::allocator<bool> > { unsigned long long *x0; unsigned long long x1; struct __compressed_pair<unsigned long, std::__1::allocator<unsigned long> > { unsigned long long x0; } x2; } x3; BOOL x4; BOOL x5; struct unique_ptr<AVAudioMixingImpl, std::__1::default_delete<AVAudioMixingImpl> > { struct __compressed_pair<AVAudioMixingImpl *, std::__1::default_delete<AVAudioMixingImpl> > { struct AVAudioMixingImpl *x0; } x0; } x6; struct unique_ptr<std::__1::map<std::__1::pair<AVAudioNode *, unsigned int>, AVAudioMixingDestination *, std::__1::less<std::__1::pair<AVAudioNode *, unsigned int> >, std::__1::allocator<std::__1::pair<const std::__1::pair<AVAudioNode *, unsigned int>, AVAudioMixingDestination *> > >, std::__1::default_delete<std::__1::map<std::__1::pair<AVAudioNode *, unsigned int>, AVAudioMixingDestination *, std::__1::less<std::__1::pair<AVAudioNode *, unsigned int> >, std::__1::allocator<std::__1::pair<const std::__1::pair<AVAudioNode *, unsigned int>, AVAudioMixingDestination *> > > > > { struct __compressed_pair<std::__1::map<std::__1::pair<AVAudioNode *, unsigned int>, AVAudioMixingDestination *, std::__1::less<std::__1::pair<AVAudioNode *, unsigned int> >, std::__1::allocator<std::__1::pair<const std::__1::pair<AVAudioNode *, unsigned int>, AVAudioMixingDestination *> > > *, std::__1::default_delete<std::__1::map<std::__1::pair<AVAudioNode *, unsigned int>, AVAudioMixingDestination *, std::__1::less<std::__1::pair<AVAudioNode *, unsigned int> >, std::__1::allocator<std::__1::pair<const std::__1::pair<AVAudioNode *, unsigned int>, AVAudioMixingDestination *> > > > > { struct map<std::__1::pair<AVAudioNode *, unsigned int>, AVAudioMixingDestination *, std::__1::less<std::__1::pair<AVAudioNode *, unsigned int> >, std::__1::allocator<std::__1::pair<const std::__1::pair<AVAudioNode *, unsigned int>, AVAudioMixingDestination *> > > *x0; } x0; } x7; BOOL x8; long long x9; double x10; struct atomic<double> { struct __cxx_atomic_impl<double, std::__1::__cxx_atomic_base_impl<double> > { _Atomic double x0; } x0; } x11; } *)a0;
- (void)setRate:(float)a0;
- (BOOL)resetImpl:(struct AVAudioNodeImplBase { void /* function */ **x0; struct AVAudioEngineImpl *x1; id x2; struct vector<bool, std::__1::allocator<bool> > { unsigned long long *x0; unsigned long long x1; struct __compressed_pair<unsigned long, std::__1::allocator<unsigned long> > { unsigned long long x0; } x2; } x3; BOOL x4; BOOL x5; struct unique_ptr<AVAudioMixingImpl, std::__1::default_delete<AVAudioMixingImpl> > { struct __compressed_pair<AVAudioMixingImpl *, std::__1::default_delete<AVAudioMixingImpl> > { struct AVAudioMixingImpl *x0; } x0; } x6; struct unique_ptr<std::__1::map<std::__1::pair<AVAudioNode *, unsigned int>, AVAudioMixingDestination *, std::__1::less<std::__1::pair<AVAudioNode *, unsigned int> >, std::__1::allocator<std::__1::pair<const std::__1::pair<AVAudioNode *, unsigned int>, AVAudioMixingDestination *> > >, std::__1::default_delete<std::__1::map<std::__1::pair<AVAudioNode *, unsigned int>, AVAudioMixingDestination *, std::__1::less<std::__1::pair<AVAudioNode *, unsigned int> >, std::__1::allocator<std::__1::pair<const std::__1::pair<AVAudioNode *, unsigned int>, AVAudioMixingDestination *> > > > > { struct __compressed_pair<std::__1::map<std::__1::pair<AVAudioNode *, unsigned int>, AVAudioMixingDestination *, std::__1::less<std::__1::pair<AVAudioNode *, unsigned int> >, std::__1::allocator<std::__1::pair<const std::__1::pair<AVAudioNode *, unsigned int>, AVAudioMixingDestination *> > > *, std::__1::default_delete<std::__1::map<std::__1::pair<AVAudioNode *, unsigned int>, AVAudioMixingDestination *, std::__1::less<std::__1::pair<AVAudioNode *, unsigned int> >, std::__1::allocator<std::__1::pair<const std::__1::pair<AVAudioNode *, unsigned int>, AVAudioMixingDestination *> > > > > { struct map<std::__1::pair<AVAudioNode *, unsigned int>, AVAudioMixingDestination *, std::__1::less<std::__1::pair<AVAudioNode *, unsigned int> >, std::__1::allocator<std::__1::pair<const std::__1::pair<AVAudioNode *, unsigned int>, AVAudioMixingDestination *> > > *x0; } x0; } x7; BOOL x8; long long x9; double x10; struct atomic<double> { struct __cxx_atomic_impl<double, std::__1::__cxx_atomic_base_impl<double> > { _Atomic double x0; } x0; } x11; } *)a0;
- (void)setPosition:(struct AVAudio3DPoint { float x0; float x1; float x2; })a0;
- (id)outputFormatForBus:(unsigned long long)a0;
- (BOOL)setOutputFormat:(id)a0 forBus:(unsigned long long)a1;
- (id)inputFormatForBus:(unsigned long long)a0;
- (BOOL)setInputFormat:(id)a0 forBus:(unsigned long long)a1;
- (id)nameForInputBus:(unsigned long long)a0;
- (id)nameForOutputBus:(unsigned long long)a0;
- (void)setNumberOfInputs:(unsigned int)a0;
- (void)setNumberOfOutputs:(unsigned int)a0;
- (void)installTapOnBus:(unsigned long long)a0 bufferSize:(unsigned int)a1 format:(id)a2 block:(id /* block */)a3;
- (void)removeTapOnBus:(unsigned long long)a0;
- (void)setPan:(float)a0;
- (struct OpaqueAudioComponentInstance { } *)audioUnit;
- (float)occlusion;

@end
