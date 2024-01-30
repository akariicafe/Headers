@class NSArray;

@interface AFSpeechInterpretation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *tokens;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (long long)confidenceScoreAvg;
- (long long)confidenceScoreMax;
- (long long)confidenceScoreMin;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (long long)averageConfidenceScore;
- (id)initWithCoder:(id)a0;
- (id)text;
- (unsigned long long)hash;
- (long long)confidenceScore;
- (id)dictionaryRepresentation;

@end
