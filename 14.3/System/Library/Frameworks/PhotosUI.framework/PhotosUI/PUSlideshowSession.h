@class NSUUID, NSString, OKPresentationViewController, PUSlideshowSettingsViewModel, PUSlideshowViewModel, PUSlideshowContextRegistry, PHAssetCollection, OKProducerPreset, OKMediaFeederPhotoKit, PHFetchResult;

@interface PUSlideshowSession : NSObject <PUSlideshowViewModelChangeObserver, PUSlideshowSettingsViewModelChangeObserver, PXSettingsKeyObserver> {
    OKMediaFeederPhotoKit *_mediaFeeder;
    PUSlideshowContextRegistry *_contextRegistry;
    OKProducerPreset *_currentPreset;
}

@property (nonatomic, setter=_setDisablingIdleTimer:) BOOL _disablingIdleTimer;
@property (retain, nonatomic, setter=_setDisablingIdleTimerToken:) id _disablingIdleTimerToken;
@property (readonly, nonatomic) NSUUID *uuid;
@property (nonatomic) long long currentState;
@property (nonatomic) BOOL didStartOnce;
@property (readonly, nonatomic) PHFetchResult *fetchResult;
@property (readonly, nonatomic) PHAssetCollection *assetCollection;
@property (readonly, nonatomic) PUSlideshowViewModel *viewModel;
@property (readonly, nonatomic) PUSlideshowSettingsViewModel *settingsViewModel;
@property (readonly, nonatomic) OKPresentationViewController *presentationViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithFetchResult:(id)a0 assetCollection:(id)a1 startIndex:(unsigned long long)a2;
- (void)dealloc;
- (void)viewModel:(id)a0 didChange:(id)a1;
- (id)initWithFetchResult:(id)a0 assetCollection:(id)a1;
- (void)_beginDisablingIdleTimer;
- (void)_endDisablingIdleTimerIfNecessary;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (id)_resolutionSizes;
- (void)updatePresentationViewController;
- (void)_distributeSlideshowDisplayContextWithPresentationController:(id)a0;
- (void)registerSlideshowDisplayContext:(id)a0;
- (void)unregisterSlideshowDisplayContext:(id)a0;
- (void)_configurePresentationViewController:(id)a0;
- (void)_addCurrentSettingsToPayload:(id)a0;
- (void)_invalidateCurrentState;
- (void)_updateCurrentState;
- (void)_slideshowViewModel:(id)a0 didChange:(id)a1;
- (void)_slideshowSettingsViewModel:(id)a0 didChange:(id)a1;

@end
