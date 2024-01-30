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
@property (copy, nonatomic) _LTTranslationStatistics *statistics;
@property (readonly, nonatomic) NSArray *preToPostITN;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFormattedString:(id)a0 sanitizedFormattedString:(id)a1 confidence:(double)a2 lowConfidence:(BOOL)a3 tokens:(id)a4 preToPostITN:(id)a5;
- (void)updateWithEngineMeta:(id)a0 locale:(id)a1;
- (id)initWithOspreyPhrase:(id)a0;
- (id)initWithOspreyMtResponsePhrase:(id)a0 locale:(id)a1;

@end
