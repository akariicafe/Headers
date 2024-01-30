@protocol GKAchievementViewControllerDelegate;

@interface GKAchievementViewController : GKGameCenterViewController

@property (weak, nonatomic) id<GKAchievementViewControllerDelegate> achievementDelegate;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)notifyDelegateOnWillFinish;

@end
