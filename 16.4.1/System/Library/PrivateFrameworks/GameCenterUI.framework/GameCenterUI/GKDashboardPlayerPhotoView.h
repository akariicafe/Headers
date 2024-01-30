@class UIImageView, GKPlayer, NSObject;
@protocol GKPlayerAvatarViewDelegate;

@interface GKDashboardPlayerPhotoView : UIView

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) GKPlayer *player;
@property (nonatomic) BOOL useDarkerPlaceholder;
@property (nonatomic) BOOL dimmed;
@property (nonatomic, getter=isUsingPlaceholder) BOOL usingPlaceholder;
@property (readonly, nonatomic) BOOL hasImage;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL focusable;
@property (weak, nonatomic) NSObject<GKPlayerAvatarViewDelegate> *delegate;
@property (nonatomic) long long avatarSize;

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)commonInit;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)setAccessibilityLabel:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)canBecomeFocused;
- (void)layoutSubviews;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)invalidatePhoto;
- (void)refreshImageWithCompletionHandler:(id /* block */)a0;
- (void)setPlayer:(id)a0 completionHandler:(id /* block */)a1;

@end
