@interface VCPVoteStats : NSObject

@property (nonatomic) long long votes;
@property (nonatomic) long long count;

- (float)rate;
- (id)initWithVotes:(long long)a0 andCount:(long long)a1;

@end
