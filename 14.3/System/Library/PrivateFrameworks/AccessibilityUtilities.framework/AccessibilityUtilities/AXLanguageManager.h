@class NSMutableDictionary, NSArray, AXDialectMap, NSString, NSLocale, NSCharacterSet, NSSet;

@interface AXLanguageManager : NSObject {
    AXDialectMap *_dialectForSystemLanguage;
    AXDialectMap *_dialectForCurrentLocale;
    AXDialectMap *_dialectForCurrentRegion;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _languageFallbackLock;
    NSMutableDictionary *_languageFallbacks;
}

@property (retain, nonatomic) NSArray *langMaps;
@property (copy, nonatomic) NSLocale *userLocale;
@property (retain, nonatomic) NSCharacterSet *commonCharacters;
@property (weak, nonatomic) AXDialectMap *dialectForSystemLanguage;
@property (weak, nonatomic) AXDialectMap *dialectForCurrentLocale;
@property (weak, nonatomic) AXDialectMap *dialectForCurrentRegion;
@property (nonatomic) BOOL _unitTest_didUpdateForLocaleChange;
@property (readonly, nonatomic) NSString *systemLanguageID;
@property (readonly, weak, nonatomic) AXDialectMap *dialectForUserLocale;
@property (readonly, nonatomic) NSSet *preferredLanguageIDsFromUserSelectedKeyboards;

+ (id)sharedInstance;
+ (id)stringByReplacingFatWidthCharactersWithBasicCharacters:(id)a0;
+ (id)nonlocalizedNameForLanguage:(id)a0;
+ (BOOL)voiceOverSupportedInCurrentLanguage;
+ (id)commonPunctuationCharacters;
+ (id)doNotTranslateWords;
+ (id)nameForAlternativeVoiceIdentifier:(id)a0;
+ (id)stringByReplacingEmojiCharactersWithEmojiDescriptions:(id)a0;
+ (id)dialectForAlternativeVoiceIdentifier:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)basicDescription;
- (void)dealloc;
- (BOOL)isCharacterCommon:(unsigned short)a0;
- (id)_loadLangMaps;
- (void)updateCachedDialects;
- (id)outputLanguageIdentifierForLanguage:(id)a0;
- (void)_handleUserLocaleDidChange:(id)a0;
- (id)dialectsThatCanSpeakCharacter:(unsigned short)a0 overridePreferredLanguages:(id)a1 allowTransliteration:(BOOL)a2;
- (id)dialectsThatCanSpeak:(id /* block */)a0 dialectIsSecondary:(id /* block */)a1 overridePreferredLanguages:(id)a2;
- (id)dialectsThatCanSpeakString:(id)a0 overridePreferredLanguages:(id)a1;
- (id)descriptionOfWord:(id)a0 forLanguage:(id)a1;
- (id)characterSetForRanges:(id)a0;
- (id)dialectsThatCanSpeakCharacter:(unsigned short)a0;
- (id)dialectsThatCanSpeakCharacter:(unsigned short)a0 overridePreferredLanguages:(id)a1;
- (id)dialectsThatCanSpeakString:(id)a0;
- (id)dialectThatCanSpeakCharacter:(unsigned short)a0;
- (id)ambiguousDialectsFromUserKeyboardPreferences;
- (BOOL)isStringComposedByCommonCharacters:(id)a0;
- (BOOL)didUpdateForLocaleChange;
- (id)description;
- (id)dialectForLanguageID:(id)a0;
- (id)debugDescription;

@end
