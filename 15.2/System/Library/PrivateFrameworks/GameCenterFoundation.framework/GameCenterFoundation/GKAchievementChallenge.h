@class GKAchievement;

@interface GKAchievementChallenge : GKChallenge

@property (retain, nonatomic) GKAchievement *achievement;

+ (BOOL)instancesRespondToSelector:(SEL)a0;

- (void)setInternal:(id)a0;
- (id)description;
- (id)titleText;
- (void).cxx_destruct;
- (id)initWithInternalRepresentation:(id)a0;
- (BOOL)detailsLoaded;
- (void)loadDetailsWithCompletionHandler:(id /* block */)a0;
- (id)detailGoalTextForPlayer:(id)a0 withAchievement:(id)a1;

@end
