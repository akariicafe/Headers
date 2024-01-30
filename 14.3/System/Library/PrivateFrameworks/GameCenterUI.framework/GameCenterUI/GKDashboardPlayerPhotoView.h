@class UIImageView, GKPlayer, CNAvatarViewController, NSObject;
@protocol GKPlayerAvatarViewDelegate;

@interface GKDashboardPlayerPhotoView : UIView <CNAvatarViewControllerDelegate>

@property (retain, nonatomic) CNAvatarViewController *avatarViewController;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) GKPlayer *player;
@property (nonatomic) BOOL useDarkerPlaceholder;
@property (nonatomic, getter=isUsingPlaceholder) BOOL usingPlaceholder;
@property (readonly, nonatomic) BOOL hasImage;
@property (nonatomic) BOOL selected;
@property (weak, nonatomic) NSObject<GKPlayerAvatarViewDelegate> *delegate;
@property (nonatomic) long long avatarSize;

- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)commonInit;
- (void)setPlayer:(id)a0 completionHandler:(id /* block */)a1;
- (void)refreshImageWithCompletionHandler:(id /* block */)a0;
- (void)setContactOnAvatarViewController:(id)a0;
- (void)invalidatePhoto;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)didUpdateContentForAvatarViewController:(id)a0;

@end
