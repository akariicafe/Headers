@interface NavAudioControlViewAccessibility : __NavAudioControlViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityCustomActions;
- (BOOL)isAccessibilityElement;
- (id)accessibilityValue;
- (BOOL)_accessibilitySetNavTypeToAll;
- (BOOL)_accessibilitySetNavTypeToAlerts;
- (BOOL)_accessibilitySetNavTypeToNone;

@end
