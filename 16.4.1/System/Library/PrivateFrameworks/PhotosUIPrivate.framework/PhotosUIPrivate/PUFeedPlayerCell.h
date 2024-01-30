@class AVAsset, ISLivePhotoPlayer, ISLivePhotoUIView, UIImage, UICollectionView, UIButton;

@interface PUFeedPlayerCell : PUFeedCell

@property (nonatomic, setter=_setPerformingIrisPlayerChanges:) BOOL _isPerformingIrisPlayerChanges;
@property (nonatomic, setter=_setNeedsUpdatePlayerItem:) BOOL _needsUpdatePlayerItem;
@property (nonatomic, setter=_setNeedsUpdateVitality:) BOOL _needsUpdateVitality;
@property (readonly, nonatomic) ISLivePhotoPlayer *_player;
@property (readonly, nonatomic) ISLivePhotoUIView *_playerView;
@property (retain, nonatomic, setter=_setCommentButton:) UIButton *_commentButton;
@property (nonatomic, setter=_setShouldHideCommentButton:) BOOL _shouldHideCommentButton;
@property (nonatomic) long long commentCount;
@property (nonatomic) int currentImageRequestID;
@property (nonatomic, getter=isPlayerHidden) BOOL playerHidden;
@property (retain, nonatomic) AVAsset *videoAsset;
@property (retain, nonatomic) UIImage *photoImage;
@property (nonatomic, setter=setPhotoImageDegraded:) BOOL isPhotoImageDegraded;
@property (nonatomic) double photoTime;
@property (weak, nonatomic) UICollectionView *containingCollectionView;

+ (Class)_contentViewClass;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_assertInsideIrisPlayerChanges;
- (void)_handleCommentButton:(id)a0;
- (void)_invalidatePlayerItem;
- (void)_invalidateVitality;
- (void)_layoutPlayerView;
- (BOOL)_needsUpdateIris;
- (id)_playerCellDelegate;
- (void)_setNeedsUpdateIris;
- (void)_updateCommentButton;
- (void)_updateIrisIfNeeded;
- (void)_updatePlayerItemIfNeeded;
- (void)_updateVitalityIfNeeded;
- (void)performIrisPlayerChanges:(id /* block */)a0;
- (void)setParallaxOffset:(struct CGPoint { double x0; double x1; })a0;

@end
