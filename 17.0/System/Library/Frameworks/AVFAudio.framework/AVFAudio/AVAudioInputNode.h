@class NSString;

@interface AVAudioInputNode : AVAudioIONode <AVAudioMixing>

@property (nonatomic, getter=isVoiceProcessingBypassed) BOOL voiceProcessingBypassed;
@property (nonatomic, getter=isVoiceProcessingAGCEnabled) BOOL voiceProcessingAGCEnabled;
@property (nonatomic, getter=isVoiceProcessingInputMuted) BOOL voiceProcessingInputMuted;
@property (nonatomic) struct AVAudioVoiceProcessingOtherAudioDuckingConfiguration { BOOL x0; long long x1; } voiceProcessingOtherAudioDuckingConfiguration;
@property (nonatomic) float volume;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
