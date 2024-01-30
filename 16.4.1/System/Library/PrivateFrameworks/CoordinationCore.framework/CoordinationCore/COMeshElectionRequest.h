@interface COMeshElectionRequest : COMeshBaseBallotRequest

@property (readonly, nonatomic) unsigned short listeningPort;

+ (BOOL)supportsSecureCoding;
+ (id)acceptableResponses;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBallot:(id)a0 generation:(unsigned long long)a1 listeningPort:(unsigned short)a2;

@end
