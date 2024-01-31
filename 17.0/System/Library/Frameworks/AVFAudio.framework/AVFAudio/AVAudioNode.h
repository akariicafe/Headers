@class AVAudioEngine, AUAudioUnit, AVAudioTime;

@interface AVAudioNode : NSObject {
    void *_impl;
}

@property (readonly, nonatomic) void *impl;
@property (readonly, nonatomic) AVAudioEngine *engine;
@property (readonly, nonatomic) unsigned long long numberOfInputs;
@property (readonly, nonatomic) unsigned long long numberOfOutputs;
@property (readonly, nonatomic) AVAudioTime *lastRenderTime;
@property (readonly, nonatomic) AUAudioUnit *AUAudioUnit;
@property (readonly, nonatomic) double latency;
@property (readonly, nonatomic) double outputPresentationLatency;

- (long long)sourceMode;
- (void)setSourceMode:(long long)a0;
- (id)destinationForMixer:(id)a0 bus:(unsigned long long)a1;
- (void)setPan:(float)a0;
- (float)pan;
- (id)initWithImpl:(void *)a0;
- (float)reverbBlend;
- (void)setPosition:(struct AVAudio3DPoint { float x0; float x1; float x2; })a0;
- (void)setVolume:(float)a0;
- (id)init;
- (void)reset;
- (void)dealloc;
- (struct OpaqueAudioComponentInstance { } *)audioUnit;
- (struct AVAudio3DPoint { float x0; float x1; float x2; })position;
- (id)clock;
- (void)setRenderingAlgorithm:(long long)a0;
- (void)setRate:(float)a0;
- (float)volume;
- (void)setOcclusion:(float)a0;
- (long long)renderingAlgorithm;
- (void)setPointSourceInHeadMode:(long long)a0;
- (long long)pointSourceInHeadMode;
- (void)setObstruction:(float)a0;
- (float)obstruction;
- (void)setReverbBlend:(float)a0;
- (void)didAttachToEngine:(id)a0;
- (float)occlusion;
- (float)rate;
- (void)installTapOnBus:(unsigned long long)a0 bufferSize:(unsigned int)a1 format:(id)a2 block:(id /* block */)a3;
- (void)removeTapOnBus:(unsigned long long)a0;
- (void)didDetachFromEngine:(id)a0 error:(id *)a1;
- (id)inputFormatForBus:(unsigned long long)a0;
- (id)nameForInputBus:(unsigned long long)a0;
- (id)nameForOutputBus:(unsigned long long)a0;
- (id)outputFormatForBus:(unsigned long long)a0;
- (BOOL)resetImpl:(void *)a0;
- (BOOL)setInputFormat:(id)a0 forBus:(unsigned long long)a1;
- (void)setNumberOfInputs:(unsigned int)a0;
- (void)setNumberOfOutputs:(unsigned int)a0;
- (BOOL)setOutputFormat:(id)a0 forBus:(unsigned long long)a1;

@end
