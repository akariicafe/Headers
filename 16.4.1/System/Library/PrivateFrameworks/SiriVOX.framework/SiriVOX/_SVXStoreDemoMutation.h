@class NSString, SVXStoreDemo;

@interface _SVXStoreDemoMutation : NSObject <SVXStoreDemoMutating> {
    SVXStoreDemo *_baseModel;
    long long _transcriptID;
    NSString *_languageCode;
    long long _gender;
    float _outputVolume;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasTranscriptID : 1; unsigned char hasLanguageCode : 1; unsigned char hasGender : 1; unsigned char hasOutputVolume : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setGender:(long long)a0;
- (void)setLanguageCode:(id)a0;
- (id)generate;
- (id)init;
- (void)setOutputVolume:(float)a0;
- (void).cxx_destruct;
- (id)initWithBaseModel:(id)a0;
- (void)setTranscriptID:(long long)a0;

@end
