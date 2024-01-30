@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AFLocalization : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_tables;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)localizedStringForKey:(id)a0 table:(id)a1 bundle:(id)a2 languageCode:(id)a3;
- (id)compactDisplayNameInLanguage:(id)a0 forSiriLanguage:(id)a1;
- (id)longDisplayNameInLanguage:(id)a0 forSiriLanguage:(id)a1;
- (id)localizedNameOfVoiceGender:(long long)a0 inDisplayLanguage:(id)a1;
- (id)localizedNameOfOutputVoiceWithIdentifier:(id)a0 inDisplayLanguage:(id)a1;
- (id)localizedCompactNameForSiriLanguage:(id)a0 inDisplayLanguage:(id)a1;
- (id)localizedNameForSiriLanguage:(id)a0 inDisplayLanguage:(id)a1;
- (id)localizedNameOfOutputVoice:(id)a0 inDisplayLanguage:(id)a1;
- (id)localizedGenderOfOutputVoice:(id)a0 inDisplayLanguage:(id)a1;
- (id)allOutputVoiceIdentifiersForSiriLanguage:(id)a0;
- (id)defaultOutputVoiceForSiriSessionLanguage:(id)a0;
- (id)loadInfoForVoicesWithLanguageCode:(id)a0;

@end
