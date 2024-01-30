@class NSString, NSDictionary, NSMutableDictionary;

@interface VTUIStringsHelper : NSObject {
    NSDictionary *_localizedStringTable;
    NSMutableDictionary *_languageLocalizedStringTables;
    NSString *_siriLanguageCode;
}

@property (readonly, nonatomic) NSString *heySiriTriggerPhrase;

+ (void)initialize;
+ (id)sharedStringsHelper;

- (id)init;
- (void).cxx_destruct;
- (void)localeDidChange:(id)a0;
- (void)setSiriLanguage:(id)a0;
- (void)setupForCurrentLocaleAndSiriLanguage;
- (id)uiLocalizedStringForKey:(id)a0;
- (id)_bundleStringTableForLanguages:(id)a0 inLocalizedStringsFileName:(id)a1;
- (id)_bundleStringTableForAllValidLanguages:(id)a0 inLocalizedStringsFileName:(id)a1;
- (id)_siriLanguageSubstitutedString:(id)a0;
- (id)uiLocalizedStringForKey:(id)a0 languageCode:(id)a1;
- (id)siriLanguageStringForKey:(id)a0;
- (id)localizedAudioStringForKey:(id)a0;

@end
