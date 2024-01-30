@class AVAudioMixerNode, AVAudioInputNode, NSSet, AVAudioOutputNode, AVAudioFormat;

@interface AVAudioEngine : NSObject {
    void *_impl;
}

@property (nonatomic) struct OpaqueMusicSequence { } *musicSequence;
@property (readonly, nonatomic) AVAudioOutputNode *outputNode;
@property (readonly, nonatomic) AVAudioInputNode *inputNode;
@property (readonly, nonatomic) AVAudioMixerNode *mainMixerNode;
@property (readonly, nonatomic, getter=isRunning) BOOL running;
@property (nonatomic, getter=isAutoShutdownEnabled) BOOL autoShutdownEnabled;
@property (readonly, copy) NSSet *attachedNodes;
@property (readonly, nonatomic) id /* block */ manualRenderingBlock;
@property (readonly, nonatomic) BOOL isInManualRenderingMode;
@property (readonly, nonatomic) long long manualRenderingMode;
@property (readonly, nonatomic) AVAudioFormat *manualRenderingFormat;
@property (readonly, nonatomic) unsigned int manualRenderingMaximumFrameCount;
@property (readonly, nonatomic) long long manualRenderingSampleTime;

- (id)outputConnectionPointsForNode:(id)a0 outputBus:(unsigned long long)a1;
- (void)prepare;
- (void)connectMIDI:(id)a0 to:(id)a1 format:(id)a2 block:(id /* block */)a3;
- (id)init;
- (BOOL)startAndReturnError:(id *)a0;
- (void)reset;
- (void)dealloc;
- (void)disconnectNodeOutput:(id)a0 bus:(unsigned long long)a1;
- (void)stop;
- (void)connectMIDI:(id)a0 toNodes:(id)a1 format:(id)a2 block:(id /* block */)a3;
- (BOOL)enableManualRenderingMode:(long long)a0 format:(id)a1 maximumFrameCount:(unsigned int)a2 error:(id *)a3;
- (void)connect:(id)a0 to:(id)a1 format:(id)a2;
- (void)detachNode:(id)a0;
- (void)disconnectNodeInput:(id)a0;
- (void)disconnectNodeInput:(id)a0 bus:(unsigned long long)a1;
- (id)description;
- (void)pause;
- (void)disconnectMIDIOutput:(id)a0;
- (void)disconnectMIDI:(id)a0 from:(id)a1;
- (void)connect:(id)a0 toConnectionPoints:(id)a1 fromBus:(unsigned long long)a2 format:(id)a3;
- (void)attachNode:(id)a0;
- (long long)renderOffline:(unsigned int)a0 toBuffer:(id)a1 error:(id *)a2;
- (void)disconnectMIDI:(id)a0 fromNodes:(id)a1;
- (void)disconnectMIDIInput:(id)a0;
- (void)connect:(id)a0 to:(id)a1 fromBus:(unsigned long long)a2 toBus:(unsigned long long)a3 format:(id)a4;
- (void)disconnectNodeOutput:(id)a0;
- (void)disableManualRenderingMode;
- (struct AVAudioEngineImpl { id x0; struct unique_ptr<AVAudioEngineGraph, std::__1::default_delete<AVAudioEngineGraph> > { struct __compressed_pair<AVAudioEngineGraph *, std::__1::default_delete<AVAudioEngineGraph> > { struct AVAudioEngineGraph *x0; } x0; } x1; id x2; id x3; id x4; id x5; struct unique_ptr<AVAudioIOUnit, std::__1::default_delete<AVAudioIOUnit> > { struct __compressed_pair<AVAudioIOUnit *, std::__1::default_delete<AVAudioIOUnit> > { struct AVAudioIOUnit *x0; } x0; } x6; BOOL x7; id x8; int x9; id /* block */ x10; BOOL x11; struct unique_ptr<AVAEBlock<AVAudioEngineManualRenderingStatus (^)(unsigned int, AudioBufferList *, int *)>, std::__1::default_delete<AVAEBlock<AVAudioEngineManualRenderingStatus (^)(unsigned int, AudioBufferList *, int *)> > > { struct __compressed_pair<AVAEBlock<AVAudioEngineManualRenderingStatus (^)(unsigned int, AudioBufferList *, int *)> *, std::__1::default_delete<AVAEBlock<AVAudioEngineManualRenderingStatus (^)(unsigned int, AudioBufferList *, int *)> > > { struct AVAEBlock<AVAudioEngineManualRenderingStatus (^)(unsigned int, AudioBufferList *, int *)> *x0; } x0; } x12; struct recursive_mutex { struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x0; } x13; struct recursive_semaphore_mutex_t<caulk::semaphore> { struct _opaque_pthread_t *x0; int x1; struct semaphore { struct semaphore { unsigned int x0; BOOL x1; } x0; struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x1; int x2; } x2; } x14; } *)implementation;
- (id)inputConnectionPointForNode:(id)a0 inputBus:(unsigned long long)a1;

@end
