@class NSString, NAIdentity;

@interface HFSiriLanguageOption : NSObject <NAIdentifiable>

@property (class, readonly, nonatomic) NAIdentity *na_identity;

@property (readonly, copy, nonatomic) NSString *recognitionLanguage;
@property (readonly, copy, nonatomic) NSString *outputLanguage;
@property (readonly, nonatomic) long long outputGender;
@property (readonly, nonatomic, getter=isDefaultVoiceForRecognitionLanguage) BOOL defaultVoiceForRecognitionLanguage;
@property (readonly, copy, nonatomic) NSString *localizedRecognitionLanguage;
@property (readonly, copy, nonatomic) NSString *localizedOutputVoice;
@property (readonly, copy, nonatomic) NSString *localizedOutputVoiceAccent;
@property (readonly, copy, nonatomic) NSString *localizedOutputVoiceGender;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)outputVoice;
- (id)serializedRepresentation;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithSerializedRepresentation:(id)a0;
- (id)initWithRecognitionLanguage:(id)a0 outputLanguage:(id)a1 outputGender:(long long)a2 defaultVoiceForRecognitionLanguage:(BOOL)a3;
- (id)initWithRecognitionLanguage:(id)a0 outputVoice:(id)a1 defaultVoiceForRecognitionLanguage:(BOOL)a2;

@end
