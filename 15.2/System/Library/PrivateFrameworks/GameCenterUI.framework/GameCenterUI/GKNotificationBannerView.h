@class NSString, UIImageView, UILabel, GKDashboardPlayerPhotoView, UIView;

@interface GKNotificationBannerView : UIView <GKPlayerAvatarViewDelegate>

@property (retain, nonatomic) GKDashboardPlayerPhotoView *playerAvatarView;
@property (nonatomic) BOOL canTransitionToPlayerAvatar;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *messageLabel;
@property (retain, nonatomic) UILabel *messageLabel2;
@property (retain, nonatomic) UILabel *actionLabel;
@property (retain, nonatomic) UIView *centeringView;
@property (readonly, nonatomic) double preferredBannerWidth;
@property (nonatomic) BOOL useShortBanner;
@property (nonatomic) double duration;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) id /* block */ touchHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_preventsAppearanceProxyCustomization;

- (void)layoutSubviews;
- (void)awakeFromNib;
- (void).cxx_destruct;
- (void)dealloc;
- (void)showWithCompletionHandler:(id /* block */)a0;
- (void)avatarContentIsReady;
- (void)createBackdropViewWithBlurStyle:(long long)a0;
- (void)createTitleLabel:(id)a0 withTextStyle:(id)a1;
- (void)createMessageLabel:(id)a0 withTextStyle:(id)a1;
- (id)initWithTitle:(id)a0 player:(id)a1 imageView:(id)a2 message:(id)a3 useShortBanner:(BOOL)a4;
- (void)transitionToPlayerAvatar;
- (void)startLoadingPlayerAvatar;
- (id)initWithTitle:(id)a0 image:(id)a1 message:(id)a2 useShortBanner:(BOOL)a3;
- (void)showPlayerAvatarAnimationWithCompletionHandler:(id /* block */)a0;
- (void)showWithTouchHandler:(id /* block */)a0;
- (void)hideBanner;
- (void)_wasTouched:(id)a0;
- (void)callCompletionHandler;
- (void)fadeInWithCompletionHandler:(id /* block */)a0;
- (void)fadeOutQuickly:(BOOL)a0 withCompletionHandler:(id /* block */)a1;

@end
