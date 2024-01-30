@interface MTUpNextScorePrototype : NSObject

@property (nonatomic) double modifiedDateScore;
@property (nonatomic) double modifiedWeight;
@property (nonatomic) double lastPlayedScore;
@property (nonatomic) double lastPlayedWeight;
@property (nonatomic) double followedScore;
@property (nonatomic) double followedWeight;
@property (nonatomic) double mostRecentPubDateScore;
@property (nonatomic) double mostRecentPubDateWeight;
@property (nonatomic) double mostRecentUnplayedPubDateScore;
@property (nonatomic) double mostRecentUnplayedPubDateWeight;
@property (nonatomic) double episodesFromShowPlayedCount;
@property (nonatomic) double episodesFromShowPlayedPercent;
@property (nonatomic) double episodesFromShowTotalCount;
@property (nonatomic) double episodesFromShowWeight;
@property (nonatomic) double allPlayedEpisodesCount;
@property (nonatomic) double allPlayedEpisodesFromThisShowCount;
@property (nonatomic) double allPlayedEpsPercent;
@property (nonatomic) double allPlayedEpsWeight;
@property (nonatomic) BOOL isHardCodedRecentlyFollowedShow;
@property (nonatomic) double hardCodedValue;
@property (nonatomic) double combinedScore;

@end
