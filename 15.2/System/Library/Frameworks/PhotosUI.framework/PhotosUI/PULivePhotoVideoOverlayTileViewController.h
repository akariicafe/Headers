@class PXImageModulationManager, PHLivePhotoView, PUModelTileTransform, UIView, PUMergedLivePhotosVideo, PUBrowsingViewModel, NSString, ISWrappedAVPlayer, NSArray, PUOneUpMergedVideoProvider, PUAssetReference, PXLivePhotoViewModulator, UIImpactFeedbackGenerator;
@protocol PULivePhotoVideoOverlayTileViewControllerDelegate;

@interface PULivePhotoVideoOverlayTileViewController : PUTileViewController <PUBrowsingViewModelChangeObserver, PXChangeObserver, PHLivePhotoViewDelegate, ISChangeObserver>

@property (readonly, nonatomic) NSArray *playbackGestureRecognizers;
@property (readonly, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator;
@property (readonly, nonatomic) PUMergedLivePhotosVideo *mergedVideo;
@property (readonly, nonatomic) UIView *containerView;
@property (readonly, nonatomic) PHLivePhotoView *livePhotoView;
@property (retain, nonatomic) ISWrappedAVPlayer *videoPlayer;
@property (retain, nonatomic) id videoPlayerTimeObserver;
@property (retain, nonatomic) PUModelTileTransform *modelTileTransform;
@property (retain, nonatomic) PXLivePhotoViewModulator *livePhotoViewModulator;
@property (retain, nonatomic) PUAssetReference *playbackAssetReference;
@property (nonatomic) BOOL willEndCurrentPlayback;
@property (retain, nonatomic) PUBrowsingViewModel *browsingViewModel;
@property (retain, nonatomic) PUOneUpMergedVideoProvider *mergedVideoProvider;
@property (nonatomic) BOOL isPresentedForSecondScreen;
@property (weak, nonatomic) id<PULivePhotoVideoOverlayTileViewControllerDelegate> delegate;
@property (retain, nonatomic) PXImageModulationManager *imageModulationManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)gestureRecognizers;
- (void)viewModel:(id)a0 didChange:(id)a1;
- (void)setMergedVideo:(id)a0;
- (void)_updateSRLCompensation;
- (void)livePhotoView:(id)a0 didEndPlaybackWithStyle:(long long)a1;
- (void)livePhotoView:(id)a0 willBeginPlaybackWithStyle:(long long)a1;
- (void)_updatePlaybackEnabled;
- (void)_updateLivePhotoViewFrame;
- (void)_videoCurrentTimeDidChange:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)loadView;
- (void).cxx_destruct;
- (void)_updateLivePhotoViewModulatorInput;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_updateMergedVideo;
- (BOOL)livePhotoView:(id)a0 canBeginPlaybackWithStyle:(long long)a1;
- (void)dealloc;
- (void)_updateLivePhotoViewModulator;
- (void)_updateLivePhotoViewPhoto;

@end
