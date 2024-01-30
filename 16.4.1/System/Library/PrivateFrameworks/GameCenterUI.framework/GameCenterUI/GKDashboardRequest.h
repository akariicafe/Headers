@class NSString, GKGameRecord, GKAchievement, GKLeaderboard, UIVisualEffectView;

@interface GKDashboardRequest : NSObject

@property (nonatomic) long long state;
@property (retain, nonatomic) NSString *leaderboardID;
@property (retain, nonatomic) NSString *leaderboardTitle;
@property (retain, nonatomic) GKLeaderboard *leaderboard;
@property (nonatomic) long long leaderboardTimeScope;
@property (nonatomic) long long leaderboardPlayerScope;
@property (retain, nonatomic) NSString *gameBundleID;
@property (retain, nonatomic) NSString *achievementID;
@property (retain, nonatomic) NSString *activityIdentifier;
@property (retain, nonatomic) NSString *playerID;
@property (retain, nonatomic) NSString *playerAlias;
@property (retain, nonatomic) GKAchievement *achievement;
@property (retain, nonatomic) GKGameRecord *gameRecord;
@property (nonatomic) BOOL isArcade;
@property (nonatomic) BOOL launchedFromAccessPoint;
@property (nonatomic) BOOL shouldShowPlayForChallenge;
@property (nonatomic) BOOL shouldShowPlayForTurnBasedMatch;
@property (nonatomic) BOOL shouldShowQuitForTurnBasedMatch;
@property (retain, nonatomic) UIVisualEffectView *visualEffectView;

- (void).cxx_destruct;

@end
