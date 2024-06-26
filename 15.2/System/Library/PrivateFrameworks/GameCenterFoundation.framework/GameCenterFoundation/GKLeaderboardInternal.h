@class NSString, NSDictionary, NSArray, NSDate, GKScoreInternal, GKPlayerInternal;

@interface GKLeaderboardInternal : GKInternalRepresentation

@property (retain, nonatomic) NSString *localizedTitle;
@property (retain, nonatomic) NSString *category;
@property (readonly, nonatomic) unsigned long long maxRange;
@property (retain, nonatomic) NSString *recordID;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *baseLeaderboardID;
@property (retain, nonatomic) NSString *groupIdentifier;
@property (retain, nonatomic) NSString *leaderboardSetIdentifier;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSDate *lastSubmittedDate;
@property (retain, nonatomic) NSDictionary *icons;
@property (nonatomic) unsigned int overallRank;
@property (nonatomic) unsigned int overallRankCount;
@property (nonatomic) unsigned short friendRank;
@property (nonatomic) unsigned short friendRankCount;
@property (nonatomic) unsigned int maxRank;
@property (retain, nonatomic) NSArray *scores;
@property (retain, nonatomic) GKScoreInternal *playerScore;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *nextStartDate;
@property (nonatomic) double duration;
@property (retain, nonatomic) GKPlayerInternal *creator;
@property (retain, nonatomic) NSString *context;

+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
