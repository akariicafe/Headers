@class GKGameRecord;

@interface GKInCommonGameCell : GKPlayerGameCell

@property (retain, nonatomic) GKGameRecord *localPlayerGameRecord;

- (void)dealloc;
- (void)prepareForReuse;
- (id)leaderboardStringWithGameRecord:(id)a0;
- (void)didUpdateModel;

@end
