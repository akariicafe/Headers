@class NSString;
@protocol GKLeaderboardViewControllerDelegate;

@interface GKLeaderboardViewController : GKGameCenterViewController

@property (nonatomic) long long timeScope;
@property (copy, nonatomic) NSString *category;
@property (weak, nonatomic) id<GKLeaderboardViewControllerDelegate> leaderboardDelegate;

- (id)init;
- (void).cxx_destruct;
- (void)notifyDelegateOnWillFinish;

@end
