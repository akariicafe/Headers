@class UITapGestureRecognizer, CAShapeLayer, UIImageView, UIView, UILabel, CNAvatarViewController;
@protocol CNMeCardSharingAvatarViewControllerDelegate, CNAvatarImageProvider, CNMeCardSharingAvatarProvider;

@interface CNMeCardSharingAvatarViewController : UIViewController

@property (nonatomic) BOOL hasImage;
@property (retain, nonatomic) UIView *avatarContainerView;
@property (retain, nonatomic) CAShapeLayer *circularLayer;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *addPhotoLabel;
@property (retain, nonatomic) id<CNMeCardSharingAvatarProvider> avatarProvider;
@property (retain, nonatomic) id<CNAvatarImageProvider> fallbackImageProvider;
@property (retain, nonatomic) CNAvatarViewController *avatarViewController;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (weak, nonatomic) id<CNMeCardSharingAvatarViewControllerDelegate> delegate;

- (void)reload;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)loadView;
- (void)didTapAvatarView:(id)a0;
- (id)initWithAvatarProvider:(id)a0;
- (void)updateForChangedImageAnimated:(BOOL)a0;
- (void)updateWithAvatarProvider:(id)a0;

@end
