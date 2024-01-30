@class NSString, NSHashTable, SBHUDSettings;

@interface SBVolumeButtonEventMapper : NSObject <PTSettingsKeyObserver, SBUIActiveOrientationObserver> {
    SBHUDSettings *_settings;
    NSHashTable *_activeHUDModels;
}

@property (class, readonly, nonatomic, getter=isVolumeButtonRemappingSupported) BOOL volumeButtonRemappingSupported;
@property (class, readonly, nonatomic, getter=isVolumeButtonRemappingEnabledByDefault) BOOL volumeButtonRemappingEnabledByDefault;

@property (nonatomic) unsigned long long buttonsEdge;
@property (nonatomic) long long effectiveInterfaceOrientation;
@property (nonatomic) long long layoutDirection;
@property (nonatomic, getter=isVolumeButtonRemappingEnabled) BOOL volumeButtonRemappingEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_shouldInvertVolumeButtonsForRTLTopEdgePadInInterfaceOrientation:(long long)a0;
+ (BOOL)_shouldInvertVolumeButtonsForLTRTopEdgePadInInterfaceOrientation:(long long)a0;
+ (BOOL)_shouldInvertVolumeButtonsForRTLRightEdgePadInInterfaceOrientation:(long long)a0;
+ (BOOL)_shouldInvertVolumeButtonsForLTRRightEdgePadInInterfaceOrientation:(long long)a0;
+ (BOOL)shouldInvertVolumeButtonsOnEdge:(unsigned long long)a0 forInterfaceOrientation:(long long)a1 userInterfaceLayoutDirection:(long long)a2;

- (void)activeInterfaceOrientationDidChangeToOrientation:(long long)a0 willAnimateWithDuration:(double)a1 fromOrientation:(long long)a2;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)activeInterfaceOrientationWillChangeToOrientation:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (BOOL)isVolumeButtonEventInvertible:(id)a0 withPressType:(long long)a1;
- (BOOL)shouldInvertVolumeButtonsForEvent:(id)a0 withPressType:(long long)a1;
- (void)_prototypeSettingsChanged;
- (void)_willPresentHUD:(id)a0;
- (void)_didDismissHUD:(id)a0;
- (void)_resetEffectiveInterfaceOrientation;
- (BOOL)isPreventingEffectiveInterfaceOrientationChanges;

@end
