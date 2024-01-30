@class GKGameRecord;

@interface GKInCommonGameCell : GKPlayerGameCell

@property (retain, nonatomic) GKGameRecord *localPlayerGameRecord;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)didUpdateModel;
- (id)leaderboardStringWithGameRecord:(id)a0;

@end
