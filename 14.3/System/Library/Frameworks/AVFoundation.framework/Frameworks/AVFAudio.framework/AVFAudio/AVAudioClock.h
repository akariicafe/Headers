@class AVAudioTime;

@interface AVAudioClock : NSObject {
    void *_impl;
}

@property (readonly, nonatomic) AVAudioTime *currentTime;

- (id)initWithNode:(struct AVAudioNodeImplBase { void /* function */ **x0; struct AVAudioEngineImpl *x1; id x2; struct vector<bool, std::__1::allocator<bool> > { unsigned long long *x0; unsigned long long x1; struct __compressed_pair<unsigned long, std::__1::allocator<unsigned long> > { unsigned long long x0; } x2; } x3; BOOL x4; BOOL x5; struct unique_ptr<AVAudioMixingImpl, std::__1::default_delete<AVAudioMixingImpl> > { struct __compressed_pair<AVAudioMixingImpl *, std::__1::default_delete<AVAudioMixingImpl> > { struct AVAudioMixingImpl *x0; } x0; } x6; struct unique_ptr<std::__1::map<std::__1::pair<AVAudioNode *, unsigned int>, AVAudioMixingDestination *, std::__1::less<std::__1::pair<AVAudioNode *, unsigned int> >, std::__1::allocator<std::__1::pair<const std::__1::pair<AVAudioNode *, unsigned int>, AVAudioMixingDestination *> > >, std::__1::default_delete<std::__1::map<std::__1::pair<AVAudioNode *, unsigned int>, AVAudioMixingDestination *, std::__1::less<std::__1::pair<AVAudioNode *, unsigned int> >, std::__1::allocator<std::__1::pair<const std::__1::pair<AVAudioNode *, unsigned int>, AVAudioMixingDestination *> > > > > { struct __compressed_pair<std::__1::map<std::__1::pair<AVAudioNode *, unsigned int>, AVAudioMixingDestination *, std::__1::less<std::__1::pair<AVAudioNode *, unsigned int> >, std::__1::allocator<std::__1::pair<const std::__1::pair<AVAudioNode *, unsigned int>, AVAudioMixingDestination *> > > *, std::__1::default_delete<std::__1::map<std::__1::pair<AVAudioNode *, unsigned int>, AVAudioMixingDestination *, std::__1::less<std::__1::pair<AVAudioNode *, unsigned int> >, std::__1::allocator<std::__1::pair<const std::__1::pair<AVAudioNode *, unsigned int>, AVAudioMixingDestination *> > > > > { struct map<std::__1::pair<AVAudioNode *, unsigned int>, AVAudioMixingDestination *, std::__1::less<std::__1::pair<AVAudioNode *, unsigned int> >, std::__1::allocator<std::__1::pair<const std::__1::pair<AVAudioNode *, unsigned int>, AVAudioMixingDestination *> > > *x0; } x0; } x7; BOOL x8; long long x9; double x10; struct atomic<double> { struct __cxx_atomic_impl<double, std::__1::__cxx_atomic_base_impl<double> > { _Atomic double x0; } x0; } x11; } *)a0;
- (id)init;
- (void)dealloc;
- (id)awaitIOCycle:(unsigned int *)a0;
- (struct AudioTimeStamp { double x0; unsigned long long x1; double x2; unsigned long long x3; struct SMPTETime { short x0; short x1; unsigned int x2; unsigned int x3; unsigned int x4; short x5; short x6; short x7; short x8; } x4; unsigned int x5; unsigned int x6; })currentAudioTimeStamp;
- (long long)currentIONumberFrames;

@end
