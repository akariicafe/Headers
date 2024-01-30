@class NSString, NSData, SVXAudioStreamBasicDescription, SVXSpeechSynthesisAudio;

@interface _SVXSpeechSynthesisAudioMutation : NSObject <SVXSpeechSynthesisAudioMutating> {
    SVXSpeechSynthesisAudio *_baseModel;
    NSData *_data;
    SVXAudioStreamBasicDescription *_decoderASBD;
    SVXAudioStreamBasicDescription *_playerASBD;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasData : 1; unsigned char hasDecoderASBD : 1; unsigned char hasPlayerASBD : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setData:(id)a0;
- (id)generate;
- (id)init;
- (void).cxx_destruct;
- (id)initWithBaseModel:(id)a0;
- (void)setDecoderASBD:(id)a0;
- (void)setPlayerASBD:(id)a0;

@end
