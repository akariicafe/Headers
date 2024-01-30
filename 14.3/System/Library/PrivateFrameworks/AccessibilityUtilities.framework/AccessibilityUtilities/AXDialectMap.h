@class AXLangMap, NSString, AXLanguageManager, NSLocale, NSCharacterSet;

@interface AXDialectMap : NSObject

@property (weak, nonatomic) AXLangMap *langMap;
@property (retain, nonatomic) NSLocale *locale;
@property (copy, nonatomic) NSString *voiceName;
@property (retain, nonatomic) NSCharacterSet *speakableCharacters;
@property (copy, nonatomic) NSString *specificLanguageID;
@property (readonly, nonatomic) AXLanguageManager *langManager;
@property (retain, nonatomic) NSCharacterSet *secondaryLanguageRange;
@property (readonly, nonatomic) NSString *languageNameInCurrentLocale;
@property (readonly, nonatomic) NSString *languageNameInNativeLocale;
@property (readonly, nonatomic) NSString *languageNameAndLocaleInCurrentLocale;
@property (readonly, nonatomic) NSString *localeNameInCurrentLocale;
@property (readonly, nonatomic) NSString *languageNameAndLocaleInNativeLocale;
@property (readonly, nonatomic) NSString *regionID;

+ (id)_hanjaCharacterSet;
+ (id)_hanjaToHangulMap;

- (void).cxx_destruct;
- (id)basicDescription;
- (BOOL)canSpeakCharacter:(unsigned short)a0 allowTransliteration:(BOOL)a1;
- (BOOL)speakingRequiresTransliteration;
- (id)_transliteratedSpeechCharacters;
- (BOOL)canSpeakString:(id)a0 allowsTransliteration:(BOOL)a1;
- (BOOL)_languageIsKorean;
- (id)_stringByTransliterationHanjaToHangul:(id)a0;
- (id)initWithLocale:(id)a0 voiceName:(id)a1 specificLanguageID:(id)a2 speakableCharacters:(id)a3 secondaryLanguageRange:(id)a4;
- (BOOL)isDialectSecondaryForCharacter:(unsigned short)a0;
- (BOOL)canSpeakCharacter:(unsigned short)a0;
- (BOOL)canSpeakLongCharacter:(unsigned int)a0;
- (BOOL)canSpeakString:(id)a0;
- (id)transliteratedStringForString:(id)a0;
- (id)description;
- (id)debugDescription;

@end
