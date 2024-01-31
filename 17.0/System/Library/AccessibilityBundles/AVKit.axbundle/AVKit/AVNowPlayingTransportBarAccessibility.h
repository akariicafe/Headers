@interface AVNowPlayingTransportBarAccessibility : __AVNowPlayingTransportBarAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (id)accessibilityValue;
- (BOOL)_accessibilityIsNotFirstElement;
- (void)_accessibilityLoadAccessibilityInformation;
- (long long)_accessibilityReinterpretVoiceOverCommand:(long long)a0;
- (void)setHint:(long long)a0;
- (id)_axStringForElapsedAndRemainingTime;
- (void)_updateRemainingTimeText;

@end
