@class AVAudioPlayerNode, AVAudioMixerNode, AVAudioEngine, NSObject, AUAudioUnitBusArray;
@protocol OS_dispatch_queue;

@interface REPlayerAudioUnit : AUAudioUnit {
    AUAudioUnitBusArray *_outputBusArray;
    AVAudioEngine *_engine;
    AVAudioMixerNode *_sampleRateConverter;
    AVAudioPlayerNode *_playingNode;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__1::__cxx_atomic_base_impl<bool> > { _Atomic BOOL __a_value; } __a_; } _didHitStop;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__1::__cxx_atomic_base_impl<bool> > { _Atomic BOOL __a_value; } __a_; } _looping;
    id _resource;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _engineConfigurationMutex;
    struct shared_ptr<AudioStreamRecordingManager::StreamWriter> { struct StreamWriter *__ptr_; struct __shared_weak_count *__cntrl_; } _recordingStreamWriter;
    id /* block */ _playingNodeRenderBlock;
    id /* block */ _sampleRateConverterRenderBlock;
    struct OpaqueAudioComponentInstance { } *_playingNodeAudioUnit;
    double _startTime;
    double _pauseTime;
    struct atomic<double> { struct __cxx_atomic_impl<double, std::__1::__cxx_atomic_base_impl<double> > { _Atomic double __a_value; } __a_; } _renderSampleTime;
    unsigned long long _currentPlayTimeParamAddress;
    struct atomic<REAudioPlaybackState> { struct __cxx_atomic_impl<REAudioPlaybackState, std::__1::__cxx_atomic_base_impl<REAudioPlaybackState> > { _Atomic unsigned long long __a_value; } __a_; } _playbackState;
    struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> > { _Atomic unsigned int __a_value; } __a_; } _playedFrames;
    BOOL _isScheduled;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__1::__cxx_atomic_base_impl<bool> > { _Atomic BOOL __a_value; } __a_; } _shouldDispatchCompletion;
}

@property (readonly) BOOL isPrepared;
@property (readonly) double assetDuration;
@property double playbackPosition;
@property (retain) NSObject<OS_dispatch_queue> *serialWorkQueue;
@property (copy) id /* block */ streamPlaybackDidComplete;

- (void)play;
- (id)channelCapabilities;
- (void).cxx_destruct;
- (void)stop;
- (void)pause;
- (id).cxx_construct;
- (void)deallocateRenderResources;
- (id)initWithComponentDescription:(struct AudioComponentDescription { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })a0 options:(unsigned int)a1 error:(id *)a2;
- (void)resume;
- (id)outputBusses;
- (BOOL)allocateRenderResourcesAndReturnError:(id *)a0;
- (double)outputSampleRate;
- (id /* block */)internalRenderBlock;
- (void)scheduleCurrentResourceOnPlayer:(id)a0;
- (void)scheduleCurrentResourceOnPlayer:(id)a0 startingProgress:(double)a1;
- (void)_playbackCompletionCallback;
- (void)prepareToPlayFile:(id)a0 withLayoutTag:(unsigned int)a1 looping:(BOOL)a2;
- (void)prepareToPlayBuffer:(id)a0 withLayoutTag:(unsigned int)a1 looping:(BOOL)a2;

@end
