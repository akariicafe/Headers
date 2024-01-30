@class NSString, NSArray, NSLocale;

@interface _LTTranslationResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSArray *translations;
@property (copy, nonatomic) NSLocale *locale;
@property (copy, nonatomic) NSString *sourceString;
@property (copy, nonatomic) NSString *sanitizedSourceString;
@property (nonatomic) BOOL isFinal;
@property (nonatomic) long long route;
@property (copy, nonatomic) NSArray *alignments;

+ (id)resultWithLocale:(id)a0 translations:(id)a1;
+ (id)passthroughResultWithString:(id)a0 sanitizedString:(id)a1 locale:(id)a2;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithOspreyBatchResponse:(id)a0;
- (void)updateAlignmentWithSourceSpan:(id)a0 targetSpan:(id)a1;
- (id)initWithOspreySpeechTranslationMTResponse:(id)a0;
- (id)initWithOspreyResponse:(id)a0;

@end
