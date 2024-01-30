@class PUBrowsingVideoPlayer, PUAssetViewModel, NSString, UIView, PUBrowsingViewModel;
@protocol PUPlayButtonTileViewControllerDelegate, PXVideoOverlayButton;

@interface PUPlayButtonTileViewController : PUTileViewController <PUBrowsingViewModelChangeObserver, PUBrowsingVideoPlayerChangeObserver, PUAssetViewModelChangeObserver> {
    struct { BOOL respondsToShouldShowPauseButton; BOOL respondsToDidTapButton; BOOL respondsToDelayForButtonAnimation; } _delegateFlags;
}

@property (class, readonly, nonatomic) struct CGSize { double x0; double x1; } playButtonTileSize;

@property (retain, nonatomic, setter=_setBrowsingVideoPlayer:) PUBrowsingVideoPlayer *_browsingVideoPlayer;
@property (retain, nonatomic, setter=_setPlayButton:) UIView<PXVideoOverlayButton> *_playButton;
@property (nonatomic, setter=_setShouldShowPlayButton:) BOOL _shouldShowPlayButton;
@property (nonatomic, setter=_setShouldSuppressButtonUpdates:) BOOL _shouldSuppressButtonUpdates;
@property (readonly, nonatomic) BOOL canShowPauseButton;
@property (weak, nonatomic) id<PUPlayButtonTileViewControllerDelegate> delegate;
@property (retain, nonatomic) PUBrowsingViewModel *browsingViewModel;
@property (retain, nonatomic) PUAssetViewModel *assetViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)_playButtonTapped:(id)a0;
- (void)viewModel:(id)a0 didChange:(id)a1;
- (id)loadView;
- (void)becomeReusable;
- (void)_setShouldShowPlayButton:(BOOL)a0 animated:(BOOL)a1;
- (void)_updateButtonAnimated:(BOOL)a0;

@end
