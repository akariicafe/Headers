@interface PHCallParticipantsViewAccessibility : __PHCallParticipantsViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (BOOL)isAccessibilityElement;
- (BOOL)accessibilityViewIsModal;
- (BOOL)_accessibilityHitTestShouldFallbackToNearestChild;
- (BOOL)_accessibilityIsDisplayedInBanner;
- (void)updateParticipantsAnimated:(BOOL)a0;

@end
