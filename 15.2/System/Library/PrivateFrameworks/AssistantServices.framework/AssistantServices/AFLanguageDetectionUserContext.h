@class NSString, NSDictionary, NSArray, NSMutableDictionary, NSNumber;

@interface AFLanguageDetectionUserContext : NSObject <NSSecureCoding, NSCopying> {
    NSMutableDictionary *_lidUserContext;
    unsigned int _userContextChangeBit;
    BOOL _simulateLanguageDetectorAssetsAvailability;
    NSArray *_simulatingLanguageCodes;
    NSArray *_finalDictationLanguages;
    NSMutableDictionary *_dictationLanguageMappingCache;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *currentKeyboard;
@property (copy, nonatomic) NSString *primaryLanguageCode;
@property (copy, nonatomic) NSDictionary *languageCodeOverrides;
@property (nonatomic, getter=wasLanguageToggled, setter=setWasLanguageToggled:) BOOL languageToggled;
@property (copy, nonatomic) NSString *prevMessageLanguage;
@property (copy, nonatomic) NSString *globalLastUsedKeyboard;
@property (copy, nonatomic) NSArray *multiLingualKeyboardLanguages;
@property (copy, nonatomic) NSArray *keyboardConvoRecentMessages;
@property (copy, nonatomic) NSArray *dictationLanguages;
@property (copy, nonatomic) NSDictionary *keyboardConversationLanguagePriors;
@property (copy, nonatomic) NSDictionary *keyboardGlobalLanguagePriors;
@property (copy, nonatomic) NSNumber *dictationInputOrigin;

+ (id)defaultContextWithPrimaryLanguage:(id)a0;

- (id)context;
- (void)encodeWithCoder:(id)a0;
- (id)userContextLanguageCodeForKeyboardLangauge:(id)a0 overrideLanguageCode:(id)a1;
- (id)description;
- (void)_removeContextValueForKey:(id)a0 context:(id)a1;
- (void)_updateContextValue:(id)a0 forKey:(id)a1 context:(id)a2;
- (id)getSiriDictationLanguagesFromLanguages:(id)a0;
- (void)_setContextValue:(id)a0 forKey:(id)a1 context:(id)a2;
- (id)siriDictationLanguageForLanguage:(id)a0;
- (id)priorsByReplacingKeyboardLanguage:(id)a0;
- (id)languageDetectorUserContext;
- (void)_setFinalFilteredDictationLanguages:(id)a0;
- (void)_setDictationLanguageCodeMappingCache:(id)a0;
- (void)setSimulatingLanguageCodes:(id)a0;
- (void)setShouldSimulateLanguageDetectorAssetsAvailability:(BOOL)a0;
- (void)_setUserContextChangeBit:(unsigned int)a0;
- (void)_setLanguageDetectorContext:(id)a0;
- (BOOL)isUpdateAvailableForLanguageDetectorContext;
- (unsigned int)languageDetectorContextChangeBits;
- (id)getContextForAnalytics;
- (id)getDictationLanguagesForSupportedLocales:(id)a0 error:(id *)a1;
- (id)finalFilteredDictationLanguages;
- (id)simulatingLanguageCodes;
- (BOOL)shouldSimulateLanguageDetectorAssetsAvailability;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
