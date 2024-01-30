@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AFLocalization : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_tables;
}

+ (id)sharedInstance;

- (struct { id x0; id x1; id x2; id x3; })_voiceMaps;
- (id /* block */)outputVoiceComparator;
- (id)localizedNameOfVoiceGender:(long long)a0 inDisplayLanguage:(id)a1;
- (id)localizedStringForKey:(id)a0 table:(id)a1 bundle:(id)a2 languageCode:(id)a3;
- (id)dialectsMap;
- (id)voiceNamesForOutputLanguageCode:(id)a0 gender:(long long)a1;
- (id)localizedNameOfOutputVoice:(id)a0 inDisplayLanguage:(id)a1;
- (id)loadInfoForVoicesWithLanguageCode:(id)a0;
- (id)longDisplayNameInLanguage:(id)a0 forSiriLanguage:(id)a1;
- (id)_voicesFromVoiceMapWithLanguage:(id)a0;
- (id)localizedGenderOfOutputVoice:(id)a0 inDisplayLanguage:(id)a1;
- (id)defaultOutputVoiceForSiriSessionLanguage:(id)a0;
- (id)localizedNameOfOutputVoiceWithIdentifier:(id)a0 inDisplayLanguage:(id)a1;
- (void).cxx_destruct;
- (id)voiceSimilarToVoice:(id)a0 inSiriSessionLanguage:(id)a1;
- (id)init;
- (id)_getVoiceOrdering;
- (id)allOutputVoiceIdentifiersForSiriLanguage:(id)a0;
- (id)localizedNameForSiriLanguage:(id)a0 inDisplayLanguage:(id)a1;
- (id)outputVoiceColorDescriptorForOutputLanguageCode:(id)a0 voiceName:(id)a1;
- (id)compactDisplayNameInLanguage:(id)a0 forSiriLanguage:(id)a1;
- (id)localizedCompactNameForSiriLanguage:(id)a0 inDisplayLanguage:(id)a1;

@end
