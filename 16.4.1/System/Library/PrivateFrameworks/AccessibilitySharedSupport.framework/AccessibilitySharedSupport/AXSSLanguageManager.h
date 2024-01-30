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
+ (id)commonPunctuationCharacters;
+ (id)stringByReplacingFatWidthCharactersWithBasicCharacters:(id)a0;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)_handleUserLocaleDidChange:(id)a0;
- (id)dialectForLanguageID:(id)a0;
- (id)dialectThatCanSpeakCharacter:(unsigned short)a0;
- (id)dialectsThatCanSpeakCharacter:(unsigned short)a0;
- (id)dialectsThatCanSpeakString:(id)a0;
- (BOOL)isCharacterCommon:(unsigned short)a0;
- (BOOL)isStringComposedByCommonCharacters:(id)a0;
- (void)updateCachedDialects;
- (id)_preferredLanguage;
- (id)dialectForSpeechSynthesisVoiceID:(id)a0;

@end
