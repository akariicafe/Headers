@class UIView, PMClipProvider, UIImage, AVPlayerItem, PXUIAssetBadgeView, UIImageView, MiroEditorClipDebugView, NSLayoutConstraint, AVPlayerLayer, UILabel, AVPlayer;
@protocol MiroEditorClipCellDelegate;

@interface MiroEditorClipCell : UICollectionViewCell

@property (retain, nonatomic) AVPlayer *player;
@property (retain, nonatomic) AVPlayerItem *playerItem;
@property (retain, nonatomic) AVPlayerLayer *playerLayer;
@property (retain, nonatomic) UIView *circularPlayButton;
@property (weak, nonatomic) UIView *audioButtonContainerView;
@property (weak, nonatomic) UILabel *audioButtonLabel;
@property (weak, nonatomic) UIView *treatmentButtonContainerView;
@property (retain, nonatomic) PXUIAssetBadgeView *photoIrisBadgeView;
@property (retain, nonatomic) NSLayoutConstraint *thumbnailAspectConstraint;
@property (weak, nonatomic) MiroEditorClipDebugView *debugInfoView;
@property (retain, nonatomic) NSLayoutConstraint *treatmentButtonTopConstraint;
@property (weak, nonatomic) id<MiroEditorClipCellDelegate> delegate;
@property (retain, nonatomic) UIImage *thumbnail;
@property (retain, nonatomic) PMClipProvider *clipProvider;
@property (readonly, nonatomic) BOOL isPlaying;
@property (weak, nonatomic) UIImageView *thumbnailView;
@property (retain, nonatomic) NSLayoutConstraint *bottomBarBottomSpaceConstraint;
@property (weak, nonatomic) UILabel *debugLabel;

- (void)layoutSubviews;
- (void)_applicationWillResignActive:(id)a0;
- (void)awakeFromNib;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)assetBadgeView:(id)a0 userDidSelectBadges:(unsigned long long)a1;
- (void)play:(id)a0;
- (void)dealloc;
- (void)pause:(id)a0;
- (id)_faceRectsInViewSpace;
- (void)_highlightFacesForRects:(id)a0;
- (void)_highlightPOI;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_poiRectInViewSpace;
- (BOOL)_removePOIsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_addPOIInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_addHighlightRectsToThumbnail;
- (void)handleTapAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)playPause:(id)a0;
- (BOOL)circularPlayButtonIsHidden;
- (void)updateControlVisibility;
- (void)stopPlayback:(id)a0;
- (void)showPlayerWithCompletionHandler:(id /* block */)a0;
- (void)_updateAudioButton;
- (void)_setupCircularPlayButton;
- (void)audioButtonTouchUpInside:(id)a0;
- (void)_updateThumbnailAspectIfNecessary;
- (void)_updatePlayButton;
- (void)_updateTreatmentButton;
- (void)_updateDebugInfoView;
- (void)_didPlayToEnd:(id)a0;
- (void)treatmentButtonTouchUpInside:(id)a0;
- (void)playButtonTouchUpInside:(id)a0;
- (void)_updateAudioVolume;
- (void)_hidePlayer;
- (void)_disableAudioTracks;

@end
