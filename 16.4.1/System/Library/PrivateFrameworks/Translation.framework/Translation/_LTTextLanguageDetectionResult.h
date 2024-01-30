@class NSCountedSet, NSLocale;

@interface _LTTextLanguageDetectionResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSLocale *dominantLocale;
@property (readonly, copy, nonatomic) NSCountedSet *localeDetectionCount;
@property (readonly, copy, nonatomic) NSCountedSet *unsupportedLanguageCounts;

+ (void)sendAnalytics:(id)a0 isSupported:(BOOL)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithScorer:(id)a0;
- (id)initWithDetectedLocales:(id)a0 unknownLanguages:(id)a1;
- (id)initWithDetectionCounts:(id)a0 availableLocales:(id)a1;

@end
