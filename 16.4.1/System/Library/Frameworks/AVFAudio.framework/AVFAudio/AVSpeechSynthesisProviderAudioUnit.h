@class NSArray;

@interface AVSpeechSynthesisProviderAudioUnit : AUAudioUnit

@property (retain, nonatomic) NSArray *speechVoices;
@property (copy, nonatomic) id /* block */ speechSynthesisOutputMetadataBlock;

+ (void)initialize;

- (void)synthesizeSpeechRequest:(id)a0;
- (void)cancelSpeechRequest;
- (void).cxx_destruct;

@end
