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
+ (void)setPatternsDictForTesting:(id)a0;
+ (id)patternsForIdentifier:(id)a0;
+ (id)calculateCurrentLanguagesFromPreferredLocaleCodes:(id)a0;
+ (void)resetToDefaultPatternsForTesting;
+ (void)useAllLanguagesAtOnce:(BOOL)a0;
+ (id)calculateLangResolutionOrder;
+ (id)patternsForClass:(Class)a0;
+ (void)changeLanguageOrPatternData;
+ (id)countryCodeFromLanguageCode:(id)a0;
+ (void)_reinstateDeath;
+ (void)clearAllRegexCaches;
+ (id)languagePartOfLanguageCode:(id)a0;
+ (void)pauseCacheEvictionTemporarily;
+ (void)forceLanguagesTo:(id)a0;
+ (id)fallbackLanguageCodeForCountryCode:(id)a0;

- (void)resetIfNeeded;
- (void)_becomeImmuneToDeath;
- (id)rawValueForKey:(id)a0;
- (id)rawValuesForKey:(id)a0;
- (id)rawValueOrDataForKey:(id)a0;
- (id)regex2ForKey:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_clearRegexCache;
- (id)stringSetMatcherForKey:(id)a0;

@end
