@class NSArray, NSString, NSLocale, NSCharacterSet, AXSSDialectMap;

@interface AXSSLanguageManager : NSObject

@property (retain, nonatomic) NSArray *languageMaps;
@property (copy, nonatomic) NSLocale *userLocale;
@property (retain, nonatomic) NSCharacterSet *commonCharacters;
@property (retain, nonatomic) AXSSDialectMap *dialectForSystemLanguage;
@property (retain, nonatomic) AXSSDialectMap *dialectForCurrentLocale;
@property (retain, nonatomic) AXSSDialectMap *dialectForCurrentRegion;
@property (readonly, nonatomic) NSString *systemLanguageID;
@property (readonly, nonatomic) AXSSDialectMap *dialectForUserLocale;

+ (id)stringByReplacingFatWidthCharactersWithBasicCharacters:(id)a0;
+ (id)commonPunctuationCharacters;
+ (id)shared;

- (id)init;
- (void).cxx_destruct;
- (id)_preferredLanguage;
- (BOOL)isCharacterCommon:(unsigned short)a0;
- (void)updateCachedDialects;
- (void)_handleUserLocaleDidChange:(id)a0;
- (id)dialectsThatCanSpeakCharacter:(unsigned short)a0;
- (id)dialectsThatCanSpeakString:(id)a0;
- (id)dialectThatCanSpeakCharacter:(unsigned short)a0;
- (BOOL)isStringComposedByCommonCharacters:(id)a0;
- (id)description;
- (id)dialectForLanguageID:(id)a0;
- (id)dialectForSpeechSynthesisVoiceID:(id)a0;

@end
