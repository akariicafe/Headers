@class NSString, PHLivePhotoView, PXLivePhotoViewModulator;
@protocol PUIrisImageTileViewControllerDelegate;

@interface PUIrisImageTileViewController : PUImageTileViewController <PHLivePhotoViewDelegate, PHLivePhotoViewDelegatePrivate, PUBrowsingViewModelChangeObserver> {
    struct { BOOL respondsToDidBeginPlaying; BOOL respondsToWillEndPlaying; BOOL respondsToDidEndPlaying; BOOL respondsToDidEndVitality; BOOL respondsToDidBeginHinting; BOOL respondsToViewHostingGestureRecognizers; BOOL respondsToDelegateForGestureRecognizer; } _delegateFlags;
    id /* block */ _ppt_didEndPlayingHandler;
}

@property (readonly, nonatomic) PHLivePhotoView *_livePhotoView;
@property (retain, nonatomic) PXLivePhotoViewModulator *livePhotoViewModulator;
@property (nonatomic) BOOL isVitalityDisabledBytransformInset;
@property (weak, nonatomic) id<PUIrisImageTileViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewModel:(id)a0 didChange:(id)a1;
- (void)_handleBrowsingIrisPlayer:(id)a0 didChange:(id)a1;
- (void)updateModulatorInputs;
- (void)assetViewModelDidChange;
- (id)generateAssetTransitionInfo;
- (void)removeAllAnimations;
- (void)assetDidChange;
- (void)setAssetViewModel:(id)a0;
- (void)_updateSRLCompensation;
- (void)livePhotoView:(id)a0 didEndPlaybackWithStyle:(long long)a1;
- (void)_updateVitalityTransform;
- (void)applyLayoutInfo:(id)a0;
- (void)updateModulator;
- (void)livePhotoView:(id)a0 willBeginPlaybackWithStyle:(long long)a1;
- (void)_updatePlayerViewInteractivePlaybackAllowed;
- (id)loadView;
- (void)livePhotoViewDidEndPlayingVitality:(id)a0;
- (void).cxx_destruct;
- (void)_updatePlaybackGestureRecognizer;
- (void)ppt_playLivePhotoWithCompletionHandler:(id /* block */)a0;
- (void)addToTilingView:(id)a0;
- (void)livePhotoViewDidBeginHinting:(id)a0;
- (void)_assetFocusValueDidChange;
- (void)_updateLivePhotoViewVitalityEnabled;

@end
