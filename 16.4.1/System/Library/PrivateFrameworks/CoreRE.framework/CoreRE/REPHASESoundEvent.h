@class AVAudioSession, PHASEEngine, PHASESource, PHASEMixerParameters, PHASESoundEvent, PHASEListener, PHASESoundEventNodeDefinition, AUAudioUnit, REPHASESoundPrepareState, PHASEExternalOutputStream, PHASEExternalOutputStreamController;

@interface REPHASESoundEvent : NSObject <PHASEExternalStreamDelegate> {
    struct queue<REPHASESoundEventCommandState, std::deque<REPHASESoundEventCommandState>> { struct deque<REPHASESoundEventCommandState, std::allocator<REPHASESoundEventCommandState>> { struct __split_buffer<REPHASESoundEventCommandState *, std::allocator<REPHASESoundEventCommandState *>> { struct REPHASESoundEventCommandState **__first_; struct REPHASESoundEventCommandState **__begin_; struct REPHASESoundEventCommandState **__end_; struct __compressed_pair<REPHASESoundEventCommandState **, std::allocator<REPHASESoundEventCommandState *>> { struct REPHASESoundEventCommandState **__value_; } __end_cap_; } __map_; unsigned long long __start_; struct __compressed_pair<unsigned long, std::allocator<REPHASESoundEventCommandState>> { unsigned long long __value_; } __size_; } c; } _commandQueue;
    unsigned long long _state;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _isStopping;
    PHASEEngine *_engine;
    PHASESource *_source;
    PHASEListener *_listener;
    PHASEMixerParameters *_mixerParameters;
    PHASESoundEventNodeDefinition *_rootNode;
    struct recursive_mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _stateChangeMutex;
    struct recursive_mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _commandQueueMutex;
    struct optional<double> { union { char __null_state_; double __val_; } ; BOOL __engaged_; } _stationaryTime;
    id /* block */ _soundEventFactory;
}

@property (retain, nonatomic) REPHASESoundPrepareState *prepareState;
@property (readonly, nonatomic) PHASESoundEvent *soundEvent;
@property (readonly, nonatomic) PHASEExternalOutputStreamController *externalStreamController;
@property (readonly) unsigned long long state;
@property (readonly) AVAudioSession *audioSession;
@property (nonatomic) float cachedPlaybackSpeed;
@property (nonatomic) float cachedReverbSendLevel;
@property (nonatomic) float cachedDirectSendLevel;
@property (retain, nonatomic) PHASEExternalOutputStream *externalStream;
@property (retain, nonatomic) AUAudioUnit *audioUnit;
@property (copy, nonatomic) id /* block */ playbackStateChangeHandler;

+ (void)controllerWithEngine:(id)a0 streamUUID:(id)a1 mixerDefinition:(id)a2 source:(id)a3 listener:(id)a4 normalizationMode:(int)a5 calibrationMode:(int)a6 calibrationLevel:(double)a7 callback:(id /* block */)a8;
+ (void)eventWithEngine:(id)a0 streamUUID:(id)a1 mixerDefinition:(id)a2 source:(id)a3 listener:(id)a4 normalizationMode:(int)a5 calibrationMode:(int)a6 calibrationLevel:(double)a7 audioSession:(id)a8 callback:(id /* block */)a9;
+ (void)eventWithEngine:(id)a0 streamUUID:(id)a1 prepareState:(id)a2 maximumFramesToRender:(unsigned int)a3 audioSession:(id)a4 callback:(id /* block */)a5;

- (BOOL)_resume;
- (id).cxx_construct;
- (void)pause;
- (BOOL)_startWithCompletionHandler:(id /* block */)a0;
- (BOOL)_pause;
- (BOOL)seekToTime:(double)a0;
- (id)description;
- (void).cxx_destruct;
- (void)resume;
- (void)prepareWithCompletion:(id /* block */)a0;
- (unsigned long long)changeToState:(unsigned long long)a0;
- (id)initWithAudioSession:(id)a0;
- (BOOL)_seekToTime:(double)a0;
- (void)stopAndDestroy;
- (BOOL)_stopAndDestroy;
- (id)initWithEngine:(id)a0 rootNode:(id)a1 source:(id)a2 listener:(id)a3 mixerParameters:(id)a4 audioSession:(id)a5 outError:(id *)a6;
- (id)initWithSoundEventFactory:(id /* block */)a0;
- (id)paramForKey:(id)a0;
- (void)stream:(id)a0 didInvalidateWithError:(id)a1;
- (void)updateCommandQueue;

@end
