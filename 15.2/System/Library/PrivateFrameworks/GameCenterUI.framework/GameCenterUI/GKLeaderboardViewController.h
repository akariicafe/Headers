@class NSString;
@protocol GKLeaderboardViewControllerDelegate;

@interface GKLeaderboardViewController : GKGameCenterViewController

@property (nonatomic) long long timeScope;
@property (copy, nonatomic) NSString *category;
@property (weak, nonatomic) id<GKLeaderboardViewControllerDelegate> leaderboardDelegate;

- (void).cxx_destruct;
- (id)init;
- (void)notifyDelegateOnWillFinish;

@end
