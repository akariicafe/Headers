@class UIImageView, UILabel, GKDashboardPlayerPhotoView, UIView;

@interface GKNotificationBannerView : UIView

@property (retain, nonatomic) GKDashboardPlayerPhotoView *playerAvatarView;
@property (nonatomic) BOOL canTransitionToPlayerAvatar;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *messageLabel;
@property (retain, nonatomic) UILabel *messageLabel2;
@property (retain, nonatomic) UILabel *actionLabel;
@property (retain, nonatomic) UIView *centeringView;
@property (readonly, nonatomic) double preferredBannerWidth;
@property (nonatomic) double duration;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) id /* block */ touchHandler;

+ (BOOL)_preventsAppearanceProxyCustomization;

- (void).cxx_destruct;
- (void)dealloc;
- (void)awakeFromNib;
- (void)createBackdropView;
- (void)createTitleLabel:(id)a0 withTextStyle:(id)a1;
- (void)createMessageLabel:(id)a0 withTextStyle:(id)a1;
- (id)initWithTitle:(id)a0 player:(id)a1 imageView:(id)a2 message:(id)a3;
- (void)transitionToPlayerAvatar;
- (void)startLoadingPlayerAvatar;
- (id)initWithTitle:(id)a0 image:(id)a1 message:(id)a2;
- (void)showPlayerAvatarAnimationWithCompletionHandler:(id /* block */)a0;
- (void)showWithTouchHandler:(id /* block */)a0;
- (void)_wasTouched:(id)a0;
- (void)callCompletionHandler;
- (void)fadeInWithCompletionHandler:(id /* block */)a0;
- (void)fadeOutQuickly:(BOOL)a0 withCompletionHandler:(id /* block */)a1;
- (void)layoutSubviews;
- (void)showWithCompletionHandler:(id /* block */)a0;
- (void)hideBanner;

@end
