@class AVAudioPlayerNode, AVAudioMixerNode, AVAudioEngine, NSObject, AUAudioUnitBusArray;
@protocol OS_dispatch_queue;

@interface REPlayerAudioUnit : AUAudioUnit {
    AUAudioUnitBusArray *_outputBusArray;
    AVAudioEngine *_engine;
    AVAudioMixerNode *_sampleRateConverter;
    AVAudioPlayerNode *_playingNode;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _didHitStop;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _looping;
    id _resource;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _engineConfigurationMutex;
    struct shared_ptr<AudioStreamRecordingManager::StreamWriter> { struct StreamWriter *__ptr_; struct __shared_weak_count *__cntrl_; } _recordingStreamWriter;
    id /* block */ _playingNodeRenderBlock;
    id /* block */ _sampleRateConverterRenderBlock;
    struct OpaqueAudioComponentInstance { } *_playingNodeAudioUnit;
    unsigned long long _currentMachStartTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _currentEventTime;
    struct atomic<REAudioPlaybackState> { struct __cxx_atomic_impl<REAudioPlaybackState, std::__cxx_atomic_base_impl<REAudioPlaybackState>> { _Atomic unsigned long long __a_value; } __a_; } _playbackState;
    struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>> { _Atomic unsigned int __a_value; } __a_; } _playedFrames;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _shouldDispatchCompletion;
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } _fadeWindow;
    unsigned long long _currentFadeIndex;
    struct atomic<FadeState> { struct __cxx_atomic_impl<FadeState, std::__cxx_atomic_base_impl<FadeState>> { _Atomic struct FadeState __a_value; } __a_; } _nextFadeState;
    struct FadeState { unsigned int uniqueID; BOOL shouldFade; } _currentFadeState;
}

@property (readonly) unsigned long long state;
@property (nonatomic) unsigned char missedPlayStrategy;
@property (readonly) BOOL isPrepared;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialWorkQueue;
@property (copy) id /* block */ playbackStateDidChange;

- (id /* block */)internalRenderBlock;
- (id).cxx_construct;
- (id)initWithComponentDescription:(struct AudioComponentDescription { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })a0 options:(unsigned int)a1 error:(id *)a2;
- (BOOL)allocateRenderResourcesAndReturnError:(id *)a0;
- (void)dealloc;
- (double)sampleRate;
- (void)stop;
- (id)outputBusses;
- (void).cxx_destruct;
- (id)channelCapabilities;
- (void)deallocateRenderResources;
- (void)_playbackCompletionCallback;
- (void)changePlaybackStateTo:(unsigned long long)a0;
- (void)prepareToPlayBuffer:(id)a0 withLayoutTag:(unsigned int)a1 looping:(BOOL)a2;
- (void)prepareToPlayFile:(id)a0 withLayoutTag:(unsigned int)a1 looping:(BOOL)a2;
- (void)scheduleMachStartTime:(unsigned long long)a0 fromEventTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 useMissedPlayStrategy:(BOOL)a2;

@end
