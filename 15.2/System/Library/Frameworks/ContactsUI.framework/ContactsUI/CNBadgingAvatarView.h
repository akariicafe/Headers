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
- (void)layoutSubviews;
- (id)initWithAvatarViewController:(id)a0;
- (void)updateBadgeImageViewFrame;
- (void)setImage:(id)a0 forAccessoryViewType:(unsigned long long)a1;
- (void)renderMediaContextBadgeImage;
- (void)renderLikenessBadge:(id)a0;
- (void).cxx_destruct;
- (void)updateBadgeTintColor;
- (void)updateBadgeCropStyle;
- (void)updateBadgeImageViewBackgroundColor;
- (void)updateBadgeImageViewContentMode;
- (void)updateBadgeImageViewPosition;
- (void)dealloc;

@end
