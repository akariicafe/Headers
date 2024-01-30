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
+ (double)_hdrGainForAsset:(id)a0;
+ (struct { long long x0; float x1; })optionsForAsset:(id)a0;
+ (long long)_contentFormatForAsset:(id)a0;

- (void)preferencesDidChange;
- (void)_updateRequestedEDRHeadroomFactorIfNeeded;
- (void)_applicationDidBecomeActive:(id)a0;
- (void)setImageModulationIntensity:(double)a0;
- (id)init;
- (void)setActive:(BOOL)a0;
- (void).cxx_destruct;
- (void)_invalidateHDRFocus;
- (void)_setNeedsUpdate;
- (void)setNeedsImageModulationIntensityUpdate;
- (void)_updateHDRFocusIfNeeded;
- (void)dealloc;
- (void)didPerformChanges;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_invalidateImageModulationIntensity;
- (void)_updateCurrentScreenSupportsHDRIfNeeded;
- (void)setRequestedEDRHeadroomFactor:(double)a0;
- (void)_invalidateEnabled;
- (void)_processInfoPowerStateDidChange:(id)a0;
- (id)_checkoutImageLayerModulatorWithOptions:(struct { long long x0; float x1; })a0 contentType:(long long)a1;
- (void)_updateImageLayerModulator:(id)a0;
- (void)_updateImageModulationIntensityIfNeeded;
- (BOOL)_needsUpdate;
- (id)initWithRootViewController:(id)a0 mainScreen:(BOOL)a1;
- (void)_didEndRequestingEDRHeadroomFactor:(double)a0;
- (void)_updateIfNeeded;
- (id)mutableChangeObject;
- (void)_invalidateActive;
- (void)_updateActiveIfNeeded;
- (void)checkInLivePhotoViewModulator:(id)a0;
- (id)checkoutLivePhotoViewModulatorWithOptions:(struct { long long x0; float x1; })a0;
- (void)_invalidateRequestedEDRHeadroomFactor;
- (void)_updateImageLayerModulatorsIfNeeded;
- (void)checkInImageLayerModulator:(id)a0;
- (void)_invalidateCurrentScreenSupportsHDR;
- (void)_updateDesiredDynamicRangeIfNeeded;
- (void)setHDRFocus:(double)a0;
- (void)setNeedsHDRFocusUpdate;
- (void)_updateCoreAnimationContext;
- (void)_invalidateImageLayerModulators;
- (void)_updateEnabledIfNeeded;
- (void)setCurrentScreenSupportsHDR:(BOOL)a0;
- (void)_didStartRequestingEDRHeadroomFactor:(double)a0;
- (void)_invalidateFinalRequestedEDRHeadroomFactor;
- (void)_updateLowPowerModeEnabledIfNeeded;
- (void)_invalidateLowPowerModeEnabled;
- (void)setEnabled:(BOOL)a0;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)_invalidateDesiredDynamicRange;
- (void)_applicationDidResignActive:(id)a0;
- (void)_updateFinalRequestedEDRHeadroomFactorIfNeeded;
- (id)checkoutImageLayerModulatorWithOptions:(struct { long long x0; float x1; })a0;

@end
