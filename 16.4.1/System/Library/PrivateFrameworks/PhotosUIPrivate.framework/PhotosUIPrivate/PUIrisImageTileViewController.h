@class NSString, PHLivePhotoView, PXLivePhotoViewModulator, NSObject;
@protocol OS_dispatch_queue, PUIrisImageTileViewControllerDelegate;

@interface PUIrisImageTileViewController : PUImageTileViewController <PHLivePhotoViewDelegate, PHLivePhotoViewDelegatePrivate, PUBrowsingViewModelChangeObserver> {
    struct { BOOL respondsToDidBeginPlaying; BOOL respondsToWillEndPlaying; BOOL respondsToDidEndPlaying; BOOL respondsToDidEndVitality; BOOL respondsToDidBeginHinting; BOOL respondsToViewHostingGestureRecognizers; BOOL respondsToDelegateForGestureRecognizer; } _delegateFlags;
    id /* block */ _ppt_didEndPlayingHandler;
}

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *srlCompensationLoadingQueue;

@property (readonly, nonatomic) PHLivePhotoView *_livePhotoView;
@property (retain, nonatomic) PXLivePhotoViewModulator *livePhotoViewModulator;
@property (nonatomic) BOOL isVitalityDisabledBytransformInset;
@property (weak, nonatomic) id<PUIrisImageTileViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewModel:(id)a0 didChange:(id)a1;
- (void)_handleLoadedSRLCompensationAmount:(id)a0 forAsset:(id)a1;
- (void)_handleBrowsingIrisPlayer:(id)a0 didChange:(id)a1;
- (void)setAssetViewModel:(id)a0;
- (void)_updateVitalityTransform;
- (void)ppt_playLivePhotoWithCompletionHandler:(id /* block */)a0;
- (void)updateModulatorInputs;
- (void)livePhotoView:(id)a0 willBeginPlaybackWithStyle:(long long)a1;
- (void)livePhotoViewDidBeginHinting:(id)a0;
- (void)removeAllAnimations;
- (void)assetViewModelDidChange;
- (void)updateModulator;
- (void)assetDidChange;
- (void)livePhotoView:(id)a0 didEndPlaybackWithStyle:(long long)a1;
- (void)addToTilingView:(id)a0;
- (void)applyLayoutInfo:(id)a0;
- (void)livePhotoViewDidEndPlayingVitality:(id)a0;
- (void)_updatePlayerViewInteractivePlaybackAllowed;
- (void)_updateSRLCompensation;
- (void)_updateLivePhotoViewVitalityEnabled;
- (void).cxx_destruct;
- (void)_updatePlaybackGestureRecognizer;
- (id)loadView;
- (void)_assetFocusValueDidChange;
- (id)generateAssetTransitionInfo;

@end
