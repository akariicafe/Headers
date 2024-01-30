@class UIImageView, GKPlayer, GKOperationQueue, NSObject;
@protocol GKPlayerAvatarViewDelegate;

@interface GKDashboardPlayerPhotoView : UIView

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) GKOperationQueue *avatarOperationQueue;
@property (retain, nonatomic) GKPlayer *player;
@property (nonatomic) BOOL useDarkerPlaceholder;
@property (nonatomic) BOOL dimmed;
@property (nonatomic, getter=isUsingPlaceholder) BOOL usingPlaceholder;
@property (readonly, nonatomic) BOOL hasImage;
@property (nonatomic) BOOL selected;
@property (weak, nonatomic) NSObject<GKPlayerAvatarViewDelegate> *delegate;
@property (nonatomic) long long avatarSize;

- (void)layoutSubviews;
- (void)commonInit;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setAccessibilityLabel:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)setPlayer:(id)a0 completionHandler:(id /* block */)a1;
- (void)refreshImageWithCompletionHandler:(id /* block */)a0;
- (void)invalidatePhoto;

@end
