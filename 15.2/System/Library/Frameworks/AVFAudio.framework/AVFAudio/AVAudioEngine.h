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

- (void)disconnectMIDIOutput:(id)a0;
- (long long)renderOffline:(unsigned int)a0 toBuffer:(id)a1 error:(id *)a2;
- (void)connect:(id)a0 to:(id)a1 fromBus:(unsigned long long)a2 toBus:(unsigned long long)a3 format:(id)a4;
- (BOOL)enableManualRenderingMode:(long long)a0 format:(id)a1 maximumFrameCount:(unsigned int)a2 error:(id *)a3;
- (void)disconnectNodeOutput:(id)a0;
- (void)prepare;
- (void)disconnectMIDI:(id)a0 fromNodes:(id)a1;
- (void *)implementation;
- (id)description;
- (void)connectMIDI:(id)a0 to:(id)a1 format:(id)a2 block:(id /* block */)a3;
- (BOOL)startAndReturnError:(id *)a0;
- (void)disconnectMIDIInput:(id)a0;
- (void)connect:(id)a0 to:(id)a1 format:(id)a2;
- (void)disableManualRenderingMode;
- (id)init;
- (void)connect:(id)a0 toConnectionPoints:(id)a1 fromBus:(unsigned long long)a2 format:(id)a3;
- (void)pause;
- (void)disconnectNodeInput:(id)a0;
- (void)disconnectMIDI:(id)a0 from:(id)a1;
- (void)attachNode:(id)a0;
- (void)disconnectNodeOutput:(id)a0 bus:(unsigned long long)a1;
- (id)inputConnectionPointForNode:(id)a0 inputBus:(unsigned long long)a1;
- (void)disconnectNodeInput:(id)a0 bus:(unsigned long long)a1;
- (void)connectMIDI:(id)a0 toNodes:(id)a1 format:(id)a2 block:(id /* block */)a3;
- (void)dealloc;
- (void)reset;
- (void)detachNode:(id)a0;
- (id)outputConnectionPointsForNode:(id)a0 outputBus:(unsigned long long)a1;
- (void)stop;

@end
