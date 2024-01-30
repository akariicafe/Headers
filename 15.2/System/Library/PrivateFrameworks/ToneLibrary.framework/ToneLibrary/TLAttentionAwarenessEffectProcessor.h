@class AVAudioInputNode, NSString, AVAudioSession, AVAudioUnitEQ, AVAudioUnitReverb, AVAudioPCMBuffer, NSObject, AVAudioEngine;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface TLAttentionAwarenessEffectProcessor : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSString *_accessQueueLabel;
    AVAudioSession *_audioSession;
    AVAudioPCMBuffer *_destinationPCMBuffer;
    AVAudioEngine *_engine;
    AVAudioInputNode *_inputNode;
    struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *_inputNodeInputBufferList;
    AVAudioUnitEQ *_lowPassFilter;
    AVAudioUnitReverb *_reverb;
    struct { BOOL shouldBypassLowPassFilter; float volumeForLowPassFilterGlobalGain; float effectMix; } _effectParameters;
    NSObject<OS_dispatch_source> *_effectMixFadingTimer;
}

@property (nonatomic) struct { BOOL x0; float x1; float x2; } effectParameters;

- (BOOL)start;
- (void).cxx_destruct;
- (void)_assertRunningOnAccessQueue;
- (void)dealloc;
- (void)stop;
- (void)_assertNotRunningOnAccessQueue;
- (void)setEffectParameters:(struct { BOOL x0; float x1; float x2; })a0 effectMixFadeDuration:(double)a1;
- (id)initWithProcessingFormat:(id)a0 framesPerRender:(unsigned int)a1 audioSession:(id)a2 effectParameters:(struct { BOOL x0; float x1; float x2; })a3;
- (struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)render:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0 numberOfFrames:(unsigned int)a1;
- (void)_applyEffectParameters:(struct { BOOL x0; float x1; float x2; })a0 includingEffectMix:(BOOL)a1;
- (float)_sanitizeEffectMix:(float)a0;
- (void)_applyEffectMix:(float)a0;
- (float)_currentEffectMix;

@end
