@class NSString;

@interface GKLeaderboardSummaryInternal : GKInternalRepresentation

@property (retain, nonatomic) NSString *baseLeaderboardID;
@property (retain, nonatomic) NSString *leaderboardID;
@property (retain, nonatomic) NSString *timeScope;
@property (retain, nonatomic) NSString *groupID;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) NSString *formattedScoreValue;
@property (nonatomic) unsigned long long context;
@property (nonatomic) unsigned long long status;
@property (nonatomic) unsigned long long startDate;
@property (nonatomic) unsigned long long duration;
@property (nonatomic) unsigned long long nextStartDate;
@property (nonatomic) unsigned long long scoreValue;
@property (nonatomic) unsigned long long rank;
@property (nonatomic) unsigned long long totalEntries;
@property (nonatomic) unsigned long long friendRank;
@property (nonatomic) unsigned long long totalFriendEntries;

+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;

@end
