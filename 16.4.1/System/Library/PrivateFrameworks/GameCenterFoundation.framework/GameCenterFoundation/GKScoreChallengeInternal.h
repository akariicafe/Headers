@class GKScoreInternal, GKLeaderboardInternal;

@interface GKScoreChallengeInternal : GKChallengeInternal

@property (copy, nonatomic) GKScoreInternal *score;
@property (retain, nonatomic) GKLeaderboardInternal *leaderboard;

+ (id)secureCodedPropertyKeys;
+ (id)internalRepresentation;

- (unsigned long long)type;
- (id)titleText;
- (void).cxx_destruct;
- (id)serverRepresentationForReceivingPlayer:(id)a0;

@end
