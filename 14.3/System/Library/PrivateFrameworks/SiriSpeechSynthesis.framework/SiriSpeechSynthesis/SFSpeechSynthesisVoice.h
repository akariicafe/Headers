@class NSString, NSLocale, SFSSVoiceAsset, SFSSResourceAsset;

@interface SFSpeechSynthesisVoice : NSObject

@property (readonly, nonatomic) BOOL isDefault;
@property (retain, nonatomic) SFSSVoiceAsset *voiceAsset;
@property (retain, nonatomic) SFSSResourceAsset *resourceAsset;
@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) NSString *gender;
@property (readonly, nonatomic) NSString *name;

+ (void)initialize;
+ (id)supportedLocales;
+ (id)supportedVoicesByLocale:(id)a0;
+ (id)getVoiceByName:(id)a0;
+ (id)getDefaultVoiceByLocale:(id)a0;

- (void).cxx_destruct;
- (id)init:(id)a0 gender:(id)a1 name:(id)a2 isDefault:(BOOL)a3;

@end
