@interface SIRINLURepetitionResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned int asrHypothesisIndex;
@property unsigned int repetitionType;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithAsrHypothesisIndex:(unsigned int)a0 repetitionType:(unsigned int)a1;

@end
