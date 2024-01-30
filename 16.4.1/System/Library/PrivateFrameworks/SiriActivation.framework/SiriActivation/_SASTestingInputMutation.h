@class NSString, SASTestingInput, NSURL;

@interface _SASTestingInputMutation : NSObject <SASTestingInputMutating> {
    SASTestingInput *_baseModel;
    long long _type;
    NSString *_text;
    NSURL *_recordedSpeechURL;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasType : 1; unsigned char hasText : 1; unsigned char hasRecordedSpeechURL : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setText:(id)a0;
- (void)setType:(long long)a0;
- (id)generate;
- (id)init;
- (void).cxx_destruct;
- (id)initWithBaseModel:(id)a0;
- (void)setRecordedSpeechURL:(id)a0;

@end
