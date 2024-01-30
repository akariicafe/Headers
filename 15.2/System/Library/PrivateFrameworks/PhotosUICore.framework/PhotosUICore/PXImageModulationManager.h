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

+ (long long)_contentFormatForAsset:(id)a0;
+ (double)HDRValueForAsset:(id)a0;
+ (struct { long long x0; float x1; })optionsForAsset:(id)a0;
+ (double)_hdrGainForAsset:(id)a0;

- (void)preferencesDidChange;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)_applicationDidBecomeActive:(id)a0;
- (void)_processInfoPowerStateDidChange:(id)a0;
- (void)_updateHDRFocusIfNeeded;
- (id)mutableChangeObject;
- (id)checkoutLivePhotoViewModulatorWithOptions:(struct { long long x0; float x1; })a0;
- (void)didPerformChanges;
- (void)setEnabled:(BOOL)a0;
- (void)_updateFinalRequestedEDRHeadroomFactorIfNeeded;
- (void)_invalidateFinalRequestedEDRHeadroomFactor;
- (id)checkoutImageLayerModulatorWithOptions:(struct { long long x0; float x1; })a0;
- (void)_updateActiveIfNeeded;
- (void)_updateLowPowerModeEnabledIfNeeded;
- (void)_applicationDidResignActive:(id)a0;
- (void)_updateImageModulationIntensityIfNeeded;
- (void)checkInLivePhotoViewModulator:(id)a0;
- (void)setNeedsHDRFocusUpdate;
- (void)_updateIfNeeded;
- (void)checkInImageLayerModulator:(id)a0;
- (void)setCurrentScreenSupportsHDR:(BOOL)a0;
- (void)_updateEnabledIfNeeded;
- (void)_invalidateActive;
- (void)_updateCoreAnimationContext;
- (void)_invalidateEnabled;
- (void)_updateRequestedEDRHeadroomFactorIfNeeded;
- (void)_updateImageLayerModulator:(id)a0;
- (BOOL)_needsUpdate;
- (void)_invalidateDesiredDynamicRange;
- (void)_setNeedsUpdate;
- (void)_didEndRequestingEDRHeadroomFactor:(double)a0;
- (void)_updateDesiredDynamicRangeIfNeeded;
- (void)_invalidateImageModulationIntensity;
- (void)_invalidateRequestedEDRHeadroomFactor;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)init;
- (void)setRequestedEDRHeadroomFactor:(double)a0;
- (id)initWithRootViewController:(id)a0 mainScreen:(BOOL)a1;
- (void)_invalidateCurrentScreenSupportsHDR;
- (void)_didStartRequestingEDRHeadroomFactor:(double)a0;
- (id)_checkoutImageLayerModulatorWithOptions:(struct { long long x0; float x1; })a0 contentType:(long long)a1;
- (void)_invalidateHDRFocus;
- (void)setImageModulationIntensity:(double)a0;
- (void)dealloc;
- (void)_invalidateImageLayerModulators;
- (void)_updateCurrentScreenSupportsHDRIfNeeded;
- (void)_updateImageLayerModulatorsIfNeeded;
- (void)setNeedsImageModulationIntensityUpdate;
- (void)setHDRFocus:(double)a0;
- (void)setActive:(BOOL)a0;
- (void)_invalidateLowPowerModeEnabled;

@end
