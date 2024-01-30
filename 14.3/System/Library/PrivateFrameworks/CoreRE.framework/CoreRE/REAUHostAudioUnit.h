@class AUAudioUnit, AUAudioUnitBus, AUAudioUnitBusArray, AVAudioFormat;

@interface REAUHostAudioUnit : AUAudioUnit {
    AUAudioUnitBus *_inputBus;
    AUAudioUnitBusArray *_inputBusArray;
    AUAudioUnitBus *_outputBus;
    AUAudioUnitBusArray *_outputBusArray;
    id /* block */ _cachedRenderBlock;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__1::__cxx_atomic_base_impl<bool> > { _Atomic BOOL __a_value; } __a_; } _running;
    BOOL _prepared;
    BOOL _shouldPrepareTargetOnAllocate;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _targetPreparationMutex;
    double _currentHostingSampleRate;
    unsigned int _currentHostingMaxFramesToRender;
    struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *_abl;
    float *_buffer;
    struct atomic<float> { struct __cxx_atomic_impl<float, std::__1::__cxx_atomic_base_impl<float> > { _Atomic float __a_value; } __a_; } _signalPresent;
    double _signalPresentDecayPerSample;
    struct shared_ptr<AudioStreamRecordingManager::StreamWriter> { struct StreamWriter *__ptr_; struct __shared_weak_count *__cntrl_; } _recordingStreamWriter;
}

@property (nonatomic) unsigned int desiredLayoutTag;
@property (retain, nonatomic) AUAudioUnit *target;
@property (nonatomic, getter=isPrepared) BOOL prepared;
@property (nonatomic, getter=isRunning) BOOL running;
@property (nonatomic) float signalPresent;
@property (copy, nonatomic) id /* block */ pullInputOverride;
@property (retain, nonatomic) AVAudioFormat *inputFormat;

- (id)channelCapabilities;
- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;
- (void)deallocateRenderResources;
- (id)initWithComponentDescription:(struct AudioComponentDescription { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })a0 options:(unsigned int)a1 error:(id *)a2;
- (id)outputBusses;
- (BOOL)allocateRenderResourcesAndReturnError:(id *)a0;
- (id /* block */)internalRenderBlock;
- (void)prepareTargetAU;
- (float)signalPresent;

@end
