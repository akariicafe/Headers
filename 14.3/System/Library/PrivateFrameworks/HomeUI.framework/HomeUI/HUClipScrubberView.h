@class UIButton, UICollectionView, AVBackgroundView, UIView, HUBlendedSeparatorView, HUClipScrubberPlayheadView;

@interface HUClipScrubberView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) AVBackgroundView *contentBackgroundView;
@property (retain, nonatomic) HUClipScrubberPlayheadView *playheadView;
@property (retain, nonatomic) HUClipScrubberPlayheadView *backgroundPlayheadView;
@property (retain, nonatomic) UIButton *playPauseButton;
@property (retain, nonatomic) UIButton *rightActionButton;
@property (retain, nonatomic) UICollectionView *clipCollectionView;
@property (retain, nonatomic) UIView *collectionViewContainer;
@property (nonatomic) unsigned long long displayMode;
@property (retain, nonatomic) HUBlendedSeparatorView *leftBlendedSeparator;
@property (retain, nonatomic) HUBlendedSeparatorView *rightBlendedSeparator;
@property (nonatomic) BOOL isPlayingMedia;
@property (readonly, nonatomic) HUClipScrubberPlayheadView *playHeadView;

- (void).cxx_destruct;
- (void)_addConstraints;
- (id)_deleteImage;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_playImage;
- (id)_pauseImage;
- (id)displayModeDescription;
- (void)deactivateLiveButtonDisplay;
- (void)activateLiveButtonDisplay;
- (void)updateAccessoryButtonsForPlaybackEngine:(id)a0;
- (id)playOrPauseImageForEngineMode:(unsigned long long)a0;
- (void)hideEditInterface;
- (void)displayEditInterface;
- (void)didUpdatePlaybackEngine:(id)a0;
- (void)navigateToLivePosition;
- (void)navigateToOffset:(double)a0;
- (void)updateDisplayMode:(unsigned long long)a0;

@end
