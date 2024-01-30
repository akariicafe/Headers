@class GKDashboardPlayerPhotoView, UILabel, GKPlayer;

@interface GKFriendDetailViewController : GKDetailViewController

@property (nonatomic) GKDashboardPlayerPhotoView *playerView;
@property (nonatomic) UILabel *nicknameLabel;
@property (nonatomic) UILabel *nameLabel;
@property (nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) GKPlayer *player;

- (id)initWithPlayer:(id)a0;
- (void).cxx_destruct;
- (void)report:(id)a0;
- (void)configureView;
- (void)viewDidLoad;

@end
