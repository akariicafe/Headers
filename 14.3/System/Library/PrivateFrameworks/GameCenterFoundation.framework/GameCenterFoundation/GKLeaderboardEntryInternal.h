@class NSString, NSDate, GKPlayerInternal;

@interface GKLeaderboardEntryInternal : GKInternalRepresentation

@property (retain, nonatomic) GKPlayerInternal *player;
@property (nonatomic) long long rank;
@property (nonatomic) long long score;
@property (copy, nonatomic) NSString *formattedScore;
@property (nonatomic) unsigned long long context;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic) long long state;
@property (copy, nonatomic) NSString *baseLeaderboardID;

+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;

@end
