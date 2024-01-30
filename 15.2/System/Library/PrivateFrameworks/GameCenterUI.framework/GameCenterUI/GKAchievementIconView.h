@class GKAchievement;

@interface GKAchievementIconView : UIImageView

@property (retain, nonatomic) GKAchievement *achievement;
@property (retain, nonatomic) GKAchievement *localAchievement;
@property (nonatomic) BOOL isDetail;

+ (id)progressSourceDetail;
+ (id)progressSource;

- (void)invalidateIntrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setupForAchievement:(id)a0 localAchievement:(id)a1;
- (void)configureImage;
- (double)progressForAchievement:(id)a0;
- (id)processProgressImage:(id)a0 forAchievement:(id)a1;
- (id)progressIdentifierForAchievement:(id)a0;
- (void)loadAndProcessAchievementProgressImageForAchievement:(id)a0 withHandler:(id /* block */)a1;

@end
