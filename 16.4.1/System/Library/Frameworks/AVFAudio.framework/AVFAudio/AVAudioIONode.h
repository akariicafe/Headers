@interface AVAudioIONode : AVAudioNode

@property (readonly, nonatomic) double presentationLatency;
@property (readonly, nonatomic) struct OpaqueAudioComponentInstance { } *audioUnit;
@property (readonly, nonatomic, getter=isVoiceProcessingEnabled) BOOL voiceProcessingEnabled;

- (BOOL)isInManualRenderingMode;
- (void)didAttachToEngine:(id)a0;
- (long long)manualRenderingMode;
- (BOOL)enableRealtimeRenderingModeWithIOUnit:(void *)a0 isInput:(BOOL)a1 forceIOUnitReset:(BOOL)a2;
- (void)didDetachFromEngine:(id)a0 error:(id *)a1;
- (BOOL)enableManualRenderingMode:(long long)a0 isInput:(BOOL)a1;
- (id)initWithIOUnit:(void *)a0 isInput:(BOOL)a1;
- (BOOL)setVoiceProcessingEnabled:(BOOL)a0 error:(id *)a1;

@end
