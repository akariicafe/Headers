@class USOSerializedGraph;

@interface SIRINLUEntityCandidate : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) USOSerializedGraph *entity;
@property double score;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithEntity:(id)a0 score:(double)a1;

@end
