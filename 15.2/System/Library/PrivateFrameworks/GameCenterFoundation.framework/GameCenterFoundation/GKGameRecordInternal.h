@class GKScoreInternal, NSDate;

@interface GKGameRecordInternal : GKGameInternal

@property (retain, nonatomic) GKScoreInternal *score;
@property (retain, nonatomic) NSDate *lastPlayedDate;
@property (retain, nonatomic) NSDate *purchaseDate;
@property (nonatomic) unsigned short achievements;
@property (nonatomic) short achievementPoints;
@property (nonatomic) unsigned short friendRank;
@property (nonatomic) unsigned short maxFriendRank;
@property (nonatomic) unsigned int rank;
@property (nonatomic) unsigned int maxRank;

+ (id)gameRecordForGame:(id)a0;
+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (void)updateWithGame:(id)a0;

@end
