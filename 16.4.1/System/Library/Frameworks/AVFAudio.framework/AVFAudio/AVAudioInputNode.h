@class NSString;

@interface AVAudioInputNode : AVAudioIONode <AVAudioMixing>

@property (nonatomic, getter=isVoiceProcessingBypassed) BOOL voiceProcessingBypassed;
@property (nonatomic, getter=isVoiceProcessingAGCEnabled) BOOL voiceProcessingAGCEnabled;
@property (nonatomic, getter=isVoiceProcessingInputMuted) BOOL voiceProcessingInputMuted;
@property (nonatomic) float volume;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setRate:(float)a0;
- (float)rate;
- (BOOL)setManualRenderingInputPCMFormat:(id)a0 inputBlock:(id /* block */)a1;

@end
