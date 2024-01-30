@class CNAvatarAccessoryView, UIImageView, UIImage, CNAvatarViewController, CNBadgingAvatarBadgeStyleSettings;
@protocol CNCancelable;

@interface CNBadgingAvatarView : UIView

@property (retain, nonatomic) CNAvatarViewController *avatarViewController;
@property (retain, nonatomic) UIImage *badgeImage;
@property (retain, nonatomic) CNBadgingAvatarBadgeStyleSettings *badgeStyleSettings;
@property (retain, nonatomic) UIImageView *badgeImageView;
@property (retain, nonatomic) id<CNCancelable> likenessBadgeRendererToken;
@property (retain, nonatomic) CNAvatarAccessoryView *mediaContextBadge;
@property (retain, nonatomic) UIImageView *mediaContextBadgeView;
@property (nonatomic) BOOL isMarkedForSyndication;
@property (nonatomic) BOOL isDoNotDisturb;

- (id)schedulerProvider;
- (id)currentLikenessScope;
- (id)imageRenderer;
- (void)dealloc;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)updateBadgeImageViewContentMode;
- (id)initWithAvatarViewController:(id)a0;
- (void)renderLikenessBadge:(id)a0;
- (void)renderMediaContextBadgeImage;
- (void)setImage:(id)a0 forAccessoryViewType:(unsigned long long)a1;
- (void)updateBadgeCropStyle;
- (void)updateBadgeImageViewBackgroundColor;
- (void)updateBadgeImageViewFrame;
- (void)updateBadgeImageViewPosition;
- (void)updateBadgeTintColor;

@end
