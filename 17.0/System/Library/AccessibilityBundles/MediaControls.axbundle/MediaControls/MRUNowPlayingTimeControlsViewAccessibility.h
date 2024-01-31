@interface MRUNowPlayingTimeControlsViewAccessibility : __MRUNowPlayingTimeControlsViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityIdentifier;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (BOOL)isAccessibilityElement;
- (id)accessibilityValue;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_accessibilityAdjustElapsedTime:(BOOL)a0;
- (BOOL)_accessibilityIsTrackInfoEmpty;

@end
