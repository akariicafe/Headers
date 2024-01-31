@interface MRUAmbientNowPlayingVolumeControlsViewAccessibility : __MRUAmbientNowPlayingVolumeControlsViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (void)accessibilityIncrement;
- (id)volumeController;
- (void)accessibilityDecrement;
- (BOOL)isAccessibilityElement;
- (id)accessibilityValue;
- (void)_accessibilityIncreaseVolume:(BOOL)a0;

@end
