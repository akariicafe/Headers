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

+ (id)shared;
+ (id)stringByReplacingFatWidthCharactersWithBasicCharacters:(id)a0;
+ (id)commonPunctuationCharacters;

- (id)_preferredLanguage;
- (id)dialectForLanguageID:(id)a0;
- (void)_handleUserLocaleDidChange:(id)a0;
- (void)updateCachedDialects;
- (id)description;
- (BOOL)isCharacterCommon:(unsigned short)a0;
- (void).cxx_destruct;
- (id)init;
- (id)dialectsThatCanSpeakCharacter:(unsigned short)a0;
- (id)dialectsThatCanSpeakString:(id)a0;
- (id)dialectThatCanSpeakCharacter:(unsigned short)a0;
- (BOOL)isStringComposedByCommonCharacters:(id)a0;
- (id)dialectForSpeechSynthesisVoiceID:(id)a0;

@end
