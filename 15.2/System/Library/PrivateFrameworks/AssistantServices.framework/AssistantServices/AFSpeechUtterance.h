@class NSArray;

@interface AFSpeechUtterance : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *interpretationIndices;
@property (nonatomic) long long confidenceScore;
@property (nonatomic) long long source;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithInterpretationIndices:(id)a0 confidenceScore:(long long)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
