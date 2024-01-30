@class NSArray;

@interface AFSpeechInterpretation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *tokens;

- (void).cxx_destruct;
- (long long)confidenceScore;
- (id)text;
- (long long)confidenceScoreAvg;
- (long long)confidenceScoreMax;
- (long long)confidenceScoreMin;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (long long)averageConfidenceScore;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;

@end
