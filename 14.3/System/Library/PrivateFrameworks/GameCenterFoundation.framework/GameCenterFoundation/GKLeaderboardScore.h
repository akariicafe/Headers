@class NSString, GKPlayer;

@interface GKLeaderboardScore : NSObject

@property (retain, nonatomic) GKPlayer *player;
@property (nonatomic) long long value;
@property (nonatomic) unsigned long long context;
@property (retain, nonatomic) NSString *leaderboardID;

+ (id)convertToGKScore:(id)a0;

- (void).cxx_destruct;

@end
