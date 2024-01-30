@class NSArray, NSString, _LTTranslationStatistics;

@interface _LTTranslationCandidate : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double confidence;
@property (nonatomic, getter=isLowConfidence) BOOL lowConfidence;
@property (copy, nonatomic) NSArray *tokens;
@property (copy, nonatomic) NSString *formattedString;
@property (copy, nonatomic) NSString *sanitizedFormattedString;
@property (copy, nonatomic) NSArray *proToPostITN;
@property (copy, nonatomic) NSArray *senses;
@property (copy, nonatomic) NSArray *genderAlternatives;
@property (copy, nonatomic) _LTTranslationStatistics *statistics;
@property (copy, nonatomic) NSString *romanization;
@property (readonly, nonatomic) NSArray *preToPostITN;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithFormattedString:(id)a0 sanitizedFormattedString:(id)a1 confidence:(double)a2 lowConfidence:(BOOL)a3 romanization:(id)a4 tokens:(id)a5 preToPostITN:(id)a6;
- (id)initWithOspreyMtResponsePhrase:(id)a0 locale:(id)a1;
- (id)initWithOspreyMtResponsePhrase:(id)a0 locale:(id)a1 injectingGenderTranslation:(id)a2 genderInjectedMetaInfo:(id)a3;
- (id)initWithOspreyPhrase:(id)a0;
- (void)updateWithEngineMeta:(id)a0 locale:(id)a1;

@end
