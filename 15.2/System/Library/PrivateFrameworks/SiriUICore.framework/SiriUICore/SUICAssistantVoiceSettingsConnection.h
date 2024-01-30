@class NSMutableDictionary;

@interface SUICAssistantVoiceSettingsConnection : AFSettingsConnection

@property (retain, nonatomic) NSMutableDictionary *cachedAvailableVoices;

+ (id)titlesForLanguageIdentifiers:(id)a0;
+ (id)shortTitlesForLanguageIdentifiers:(id)a0 deviceLanguageLocale:(id)a1;
+ (id)capitalizeFirstPartOfCountry:(id)a0;
+ (id)outputLanguageIdentifiers;
+ (id)assistantLanguageTitlesDictionary;

- (BOOL)languageHasBothGender:(id)a0;
- (id)_regionForLanguageIdentifier:(id)a0;
- (BOOL)languageHasVoiceVariations:(id)a0;
- (BOOL)languageHasCustomVoice:(id)a0;
- (void)setOutputVoiceLanguage:(id)a0 gender:(long long)a1;
- (id)dialectForLanguageIdentifier:(id)a0;
- (id)getAvailableVoicesForLanguage:(id)a0;
- (BOOL)languageHasVoiceSelection:(id)a0;
- (void).cxx_destruct;
- (id)getAvailableDialectsForLanguage:(id)a0;

@end
