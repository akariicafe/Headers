@class PXRequestedEDRHeadroomFactorFilter, NSString, PXImageModulationSettings, NSHashTable, CAContext, UIViewController;

@interface PXImageModulationManager : PXObservable <PXChangeObserver, PXSettingsKeyObserver, PXPreferencesObserver> {
    struct { BOOL enabled; BOOL lowPowerModeEnabled; BOOL active; BOOL HDRFocus; BOOL imageModulationIntensity; BOOL requestedEDRHeadroomFactor; BOOL finalRequestedEDRHeadroomFactor; BOOL desiredDynamicRange; BOOL imageLayerModulators; BOOL currentScreenSupportsHDR; } _needsUpdateFlags;
    double _lastRequestedEDRHeadroomChangeTime;
}

@property (readonly, nonatomic) PXImageModulationSettings *settings;
@property (readonly, nonatomic) NSHashTable *imageLayerModulators;
@property (readonly, nonatomic) PXRequestedEDRHeadroomFactorFilter *requestedEDRHeadroomFactorFilter;
@property (nonatomic) long long requestedEDRHeadroomSignpost;
@property (retain, nonatomic) CAContext *coreAnimationContext;
@property (nonatomic, getter=isLowPowerModeEnabled) BOOL lowPowerModeEnabled;
@property (nonatomic, getter=isApplicationActive) BOOL applicationActive;
@property (readonly, weak, nonatomic) UIViewController *rootViewController;
@property (readonly, nonatomic, getter=isMainScreen) BOOL mainScreen;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic) BOOL currentScreenSupportsHDR;
@property (readonly, nonatomic) double HDRFocus;
@property (readonly, nonatomic) double imageModulationIntensity;
@property (readonly, nonatomic) double requestedEDRHeadroomFactor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)HDRValueForAsset:(id)a0;
+ (long long)_contentFormatForAsset:(id)a0;
+ (double)_hdrGainForAsset:(id)a0;
+ (struct { long long x0; float x1; })optionsForAsset:(id)a0;

- (void)preferencesDidChange;
- (void)_updateImageLayerModulator:(id)a0;
- (void)setNeedsImageModulationIntensityUpdate;
- (void)_didEndRequestingEDRHeadroomFactor:(double)a0;
- (void)_applicationDidBecomeActive:(id)a0;
- (void)_invalidateDesiredDynamicRange;
- (void)setHDRFocus:(double)a0;
- (id)initWithRootViewController:(id)a0 mainScreen:(BOOL)a1;
- (void)_updateLowPowerModeEnabledIfNeeded;
- (void)_updateIfNeeded;
- (void)_invalidateActive;
- (BOOL)_needsUpdate;
- (void)_invalidateRequestedEDRHeadroomFactor;
- (void)_updateHDRFocusIfNeeded;
- (void)_updateCurrentScreenSupportsHDRIfNeeded;
- (void)_updateDesiredDynamicRangeIfNeeded;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)didPerformChanges;
- (void)setNeedsHDRFocusUpdate;
- (void)_invalidateLowPowerModeEnabled;
- (void)checkInLivePhotoViewModulator:(id)a0;
- (void)setActive:(BOOL)a0;
- (void)_updateActiveIfNeeded;
- (void)_setNeedsUpdate;
- (void)_invalidateCurrentScreenSupportsHDR;
- (void)setImageModulationIntensity:(double)a0;
- (void)dealloc;
- (id)checkoutImageLayerModulatorWithOptions:(struct { long long x0; float x1; })a0;
- (void)setCurrentScreenSupportsHDR:(BOOL)a0;
- (void)_applicationDidResignActive:(id)a0;
- (void)_invalidateImageLayerModulators;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)_processInfoPowerStateDidChange:(id)a0;
- (void)_updateEnabledIfNeeded;
- (void)_invalidateFinalRequestedEDRHeadroomFactor;
- (void)_updateCoreAnimationContext;
- (void)setEnabled:(BOOL)a0;
- (void)_invalidateHDRFocus;
- (void)setRequestedEDRHeadroomFactor:(double)a0;
- (id)mutableChangeObject;
- (void)checkInImageLayerModulator:(id)a0;
- (void)_updateImageLayerModulatorsIfNeeded;
- (void)_didStartRequestingEDRHeadroomFactor:(double)a0;
- (id)init;
- (void)_updateImageModulationIntensityIfNeeded;
- (void)_invalidateImageModulationIntensity;
- (id)checkoutLivePhotoViewModulatorWithOptions:(struct { long long x0; float x1; })a0;
- (void)_updateRequestedEDRHeadroomFactorIfNeeded;
- (id)_checkoutImageLayerModulatorWithOptions:(struct { long long x0; float x1; })a0 contentType:(long long)a1;
- (void)_invalidateEnabled;
- (void).cxx_destruct;
- (void)_updateFinalRequestedEDRHeadroomFactorIfNeeded;

@end
