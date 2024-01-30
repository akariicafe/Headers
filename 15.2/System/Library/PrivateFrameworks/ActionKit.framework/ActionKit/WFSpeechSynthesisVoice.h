@class AVSpeechSynthesisVoice, NSString;

@interface WFSpeechSynthesisVoice : NSObject

@property (retain, nonatomic) AVSpeechSynthesisVoice *avVoice;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *languageCode;
@property (readonly, nonatomic) unsigned long long preferredSynthesisPlatform;

+ (id)voiceForIdentifier:(id)a0;
+ (id)availableLanguageCodes;
+ (id)currentLanguageCode;
+ (id)voicesForLanguageCode:(id)a0;
+ (id)defaultVoiceForLanguageCode:(id)a0;
+ (id)voiceFromAVVoice:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isSiriVoice;
- (id)nsVoiceName;
- (id)vsVoiceName;

@end
