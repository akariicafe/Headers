@class NSString, NSArray, NSMutableSet, NSCache;

@interface SGPatterns : NSObject {
    NSString *_classKey;
    NSArray *_langResolutionOrder;
    NSCache *_compiledRegexes2;
    NSString *_language;
    NSMutableSet *_regexpKeysSeen;
    int _localLanguageVersion;
}

+ (void)initialize;
+ (id)countryCodeFromLanguageCode:(id)a0;
+ (id)calculateLangResolutionOrder;
+ (void)setPatternsDictForTesting:(id)a0;
+ (id)fallbackLanguageCodeForCountryCode:(id)a0;
+ (id)languagePartOfLanguageCode:(id)a0;
+ (void)forceLanguagesTo:(id)a0;
+ (void)changeLanguageOrPatternData;
+ (id)calculateCurrentLanguagesFromPreferredLocaleCodes:(id)a0;
+ (void)useAllLanguagesAtOnce:(BOOL)a0;
+ (id)patternsForClass:(Class)a0;
+ (id)patternsForIdentifier:(id)a0;
+ (void)_reinstateDeath;
+ (void)pauseCacheEvictionTemporarily;
+ (void)clearAllRegexCaches;
+ (void)resetToDefaultPatternsForTesting;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)rawValuesForKey:(id)a0;
- (void)_clearRegexCache;
- (id)rawValueForKey:(id)a0;
- (void)resetIfNeeded;
- (id)regex2ForKey:(id)a0;
- (void)_becomeImmuneToDeath;
- (id)rawValueOrDataForKey:(id)a0;
- (id)stringSetMatcherForKey:(id)a0;

@end
