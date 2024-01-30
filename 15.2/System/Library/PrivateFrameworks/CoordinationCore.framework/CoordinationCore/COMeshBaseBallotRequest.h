@class COBallot;

@interface COMeshBaseBallotRequest : COMeshRequest

@property (copy, nonatomic) COBallot *ballot;
@property (readonly, nonatomic) long long variant;
@property (readonly, nonatomic) unsigned long long generation;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithBallot:(id)a0 generation:(unsigned long long)a1;
- (id)initWithBallot:(id)a0 generation:(unsigned long long)a1 variant:(long long)a2;

@end
