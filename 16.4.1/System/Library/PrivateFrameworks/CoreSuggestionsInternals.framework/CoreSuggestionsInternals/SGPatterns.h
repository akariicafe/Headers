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
+ (void)forceLanguagesTo:(id)a0;
+ (void)clearAllRegexCaches;
+ (void)setPatternsDictForTesting:(id)a0;
+ (void)useAllLanguagesAtOnce:(BOOL)a0;
+ (id)patternsForIdentifier:(id)a0;
+ (id)countryCodeFromLanguageCode:(id)a0;
+ (void)resetToDefaultPatternsForTesting;
+ (void)pauseCacheEvictionTemporarily;
+ (void)changeLanguageOrPatternData;
+ (id)languagePartOfLanguageCode:(id)a0;
+ (void)_reinstateDeath;
+ (id)calculateCurrentLanguagesFromPreferredLocaleCodes:(id)a0;
+ (id)calculateLangResolutionOrder;
+ (id)fallbackLanguageCodeForCountryCode:(id)a0;
+ (id)patternsForClass:(Class)a0;

- (void)resetIfNeeded;
- (void)_becomeImmuneToDeath;
- (id)regex2ForKey:(id)a0;
- (void)_clearRegexCache;
- (id)stringSetMatcherForKey:(id)a0;
- (id)rawValueForKey:(id)a0;
- (void)dealloc;
- (id)rawValuesForKey:(id)a0;
- (id)rawValueOrDataForKey:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
