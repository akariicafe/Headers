@class GKScore, GKLeaderboard;

@interface GKScoreChallenge : GKChallenge

@property (readonly, nonatomic) GKLeaderboard *leaderboard;
@property (retain, nonatomic) GKScore *score;

+ (BOOL)instancesRespondToSelector:(SEL)a0;

- (void)setInternal:(id)a0;
- (id)description;
- (id)titleText;
- (void).cxx_destruct;
- (id)initWithInternalRepresentation:(id)a0;
- (id)leaderboard;
- (BOOL)detailsLoaded;
- (void)loadDetailsWithCompletionHandler:(id /* block */)a0;
- (id)detailGoalTextForPlayer:(id)a0 withLeaderboard:(id)a1;

@end
