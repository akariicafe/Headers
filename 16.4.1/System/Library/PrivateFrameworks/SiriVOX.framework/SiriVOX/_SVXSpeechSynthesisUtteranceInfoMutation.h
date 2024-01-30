@class NSString, SVXSpeechSynthesisUtteranceInfo, NSArray;

@interface _SVXSpeechSynthesisUtteranceInfoMutation : NSObject <SVXSpeechSynthesisUtteranceInfoMutating> {
    SVXSpeechSynthesisUtteranceInfo *_baseModel;
    NSString *_utterance;
    NSArray *_wordTimings;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasUtterance : 1; unsigned char hasWordTimings : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)generate;
- (id)init;
- (void).cxx_destruct;
- (void)setUtterance:(id)a0;
- (id)initWithBaseModel:(id)a0;
- (void)setWordTimings:(id)a0;

@end
