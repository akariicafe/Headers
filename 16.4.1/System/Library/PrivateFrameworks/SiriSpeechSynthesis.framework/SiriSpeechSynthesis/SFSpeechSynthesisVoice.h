@class SFSpeechSynthesisServerVoiceConfig, NSString, NSLocale, SFSSVoiceAsset, SFSSResourceAsset;

@interface SFSpeechSynthesisVoice : NSObject

@property (readonly, nonatomic) BOOL isDefault;
@property (nonatomic) long long voiceType;
@property (nonatomic) long long voiceReleaseType;
@property (retain, nonatomic) SFSSVoiceAsset *voiceAsset;
@property (retain, nonatomic) SFSSResourceAsset *resourceAsset;
@property (retain, nonatomic) SFSpeechSynthesisServerVoiceConfig *serverVoiceConfig;
@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) NSString *gender;
@property (readonly, nonatomic) NSString *name;

+ (void)initialize;
+ (id)supportedLocales;
+ (id)getVoiceByName:(id)a0;
+ (id)getDefaultVoiceByLocale:(id)a0;
+ (id)supportedVoicesByLocale:(id)a0;

- (void).cxx_destruct;
- (id)init:(id)a0 gender:(id)a1 name:(id)a2 isDefault:(BOOL)a3;
- (id)initWithVoiceAsset:(id)a0 resourceAsset:(id)a1;

@end
