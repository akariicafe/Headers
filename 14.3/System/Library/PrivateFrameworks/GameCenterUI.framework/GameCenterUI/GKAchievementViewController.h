@protocol GKAchievementViewControllerDelegate;

@interface GKAchievementViewController : GKGameCenterViewController

@property (weak, nonatomic) id<GKAchievementViewControllerDelegate> achievementDelegate;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)notifyDelegateOnWillFinish;

@end
