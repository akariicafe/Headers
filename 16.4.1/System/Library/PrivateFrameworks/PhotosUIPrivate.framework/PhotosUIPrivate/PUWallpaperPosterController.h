@class NSDate, NSString, PFPosterConfiguration, UIViewPropertyAnimator, UIImageView, PFPosterMedia, PHPhotoLibrary, PFPosterDescriptor, PUParallaxLayerStackViewModel, PLPhotoAnalysisServiceClient, UIActivityIndicatorView, UILabel;
@protocol PUWallpaperRenderer, PUWallpaperRenderingEnvironment;

@interface PUWallpaperPosterController : NSObject <PXChangeObserver, PUWallpaperRenderingDelegate> {
    unsigned long long _signpost;
    unsigned long long _significantEventsCounter;
    PLPhotoAnalysisServiceClient *_padClient;
}

@property (readonly, nonatomic) id<PUWallpaperRenderer> renderer;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (retain, nonatomic) id<PUWallpaperRenderingEnvironment> environment;
@property (retain, nonatomic) PFPosterDescriptor *posterDescriptor;
@property (retain, nonatomic) PFPosterConfiguration *posterConfiguration;
@property (retain, nonatomic) PFPosterMedia *currentPosterMedia;
@property (nonatomic) unsigned long long significantEventsCounter;
@property (nonatomic) BOOL needsFirstLockSignificantEvent;
@property (retain, nonatomic) UIActivityIndicatorView *progressIndicator;
@property (retain, nonatomic) UIImageView *posterMediaImageView;
@property (nonatomic) long long backlightLuminance;
@property (retain, nonatomic) UIViewPropertyAnimator *transformAnimator;
@property (retain, nonatomic) UIViewPropertyAnimator *alphaAnimator;
@property (nonatomic) BOOL needsUpgrade;
@property (retain, nonatomic) NSDate *lastUpgradeCheckTime;
@property (nonatomic) double nextUpgradeCheckDelay;
@property (retain, nonatomic) UILabel *debugHUDLabel;
@property (readonly, nonatomic) PUParallaxLayerStackViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setViewModel:(id)a0;
- (void)_updateWithFrameSpecifier:(id)a0;
- (id)_timelinesForDateInterval:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_updateDebugHUD;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)_updateViewHierarchy;
- (void)renderer:(id)a0 didInitializeWithEnvironment:(id)a1;
- (void)renderer:(id)a0 didUpdateEnvironment:(id)a1 withTransition:(id)a2;
- (void)rendererDidInvalidate:(id)a0;
- (void)DEBUG_invalidateDebugHUD;
- (id)_createViewModelWithLayerStack:(id)a0;
- (BOOL)triggerPosterUpgradeIfNecessary;
- (BOOL)_animateShuffleTransitionToSleep;
- (void)_handleSegmentationResponse:(id)a0;
- (void)_hidePosterMediaImage;
- (void)_hideProgressIndicator;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_inactiveTransform;
- (void)_invalidateCurrentPosterMedia;
- (void)_invalidateDebugHUD;
- (BOOL)_loadAssetFromWallpaperURL:(id)a0 error:(id *)a1;
- (void)_loadContentsFromEnvironment;
- (id)_nameForBacklightLuminance:(long long)a0;
- (id)_nextPosterMedia;
- (void)_removeExistingViews;
- (void)_renderPreviewLayerStackFromWallpaperURL:(id)a0;
- (BOOL)_shouldAnimateShuffleTransitionToSleep;
- (void)_showPosterMediaImage:(id)a0;
- (void)_showProgressIndicator;
- (void)_transitionToBacklightLuminance:(long long)a0 previousBacklightLuminance:(long long)a1 animated:(BOOL)a2;
- (void)_updateBacklightLuminance;
- (void)_updateContainerFrame;
- (void)_updateCurrentPosterMedia;
- (void)_updateSignificantEvents;
- (id)initWithRenderer:(id)a0 photoLibrary:(id)a1;
- (id)posterUpgradeService;
- (void)triggerPosterUpgrade;

@end
