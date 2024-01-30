@class NSString, PHLivePhotoView, PXLivePhotoViewModulator, PUBrowsingViewModel;
@protocol PUIrisImageTileViewControllerDelegate;

@interface PUIrisImageTileViewController : PUImageTileViewController <PHLivePhotoViewDelegate, PHLivePhotoViewDelegatePrivate, PUBrowsingViewModelChangeObserver> {
    struct { BOOL respondsToDidBeginPlaying; BOOL respondsToWillEndPlaying; BOOL respondsToDidEndPlaying; BOOL respondsToDidEndVitality; BOOL respondsToDidBeginHinting; BOOL respondsToViewHostingGestureRecognizers; BOOL respondsToDelegateForGestureRecognizer; } _delegateFlags;
    id /* block */ _ppt_didEndPlayingHandler;
}

@property (readonly, nonatomic) PHLivePhotoView *_livePhotoView;
@property (retain, nonatomic) PXLivePhotoViewModulator *livePhotoViewModulator;
@property (weak, nonatomic) id<PUIrisImageTileViewControllerDelegate> delegate;
@property (retain, nonatomic) PUBrowsingViewModel *browsingViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateModulatorInputs;
- (void)assetDidChange;
- (void)applyLayoutInfo:(id)a0;
- (void).cxx_destruct;
- (id)generateAssetTransitionInfo;
- (void)assetViewModelDidChange;
- (void)livePhotoViewDidEndPlayingVitality:(id)a0;
- (void)viewModel:(id)a0 didChange:(id)a1;
- (void)_assetFocusValueDidChange;
- (id)loadView;
- (void)ppt_playLivePhotoWithCompletionHandler:(id /* block */)a0;
- (void)addToTilingView:(id)a0;
- (void)setAssetViewModel:(id)a0;
- (void)livePhotoViewDidBeginHinting:(id)a0;
- (void)updateModulator;
- (void)_updatePlaybackGestureRecognizer;
- (void)livePhotoView:(id)a0 willBeginPlaybackWithStyle:(long long)a1;
- (void)removeAllAnimations;
- (void)livePhotoView:(id)a0 didEndPlaybackWithStyle:(long long)a1;
- (void)_handleBrowsingIrisPlayer:(id)a0 didChange:(id)a1;
- (void)_updatePlayerViewInteractivePlaybackAllowed;
- (void)_updateVitalityTransform;
- (void)_updateLivePhotoViewVitalityEnabled;

@end
