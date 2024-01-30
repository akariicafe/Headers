@protocol GKAchievementViewControllerDelegate;

@interface GKAchievementViewController : GKGameCenterViewController

@property (weak, nonatomic) id<GKAchievementViewControllerDelegate> achievementDelegate;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)notifyDelegateOnWillFinish;

@end
