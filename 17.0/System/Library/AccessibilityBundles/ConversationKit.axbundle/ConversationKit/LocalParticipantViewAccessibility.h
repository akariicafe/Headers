@interface LocalParticipantViewAccessibility : __LocalParticipantViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (BOOL)accessibilityActivate;
- (BOOL)accessibilityPerformEscape;
- (id)accessibilityValue;
- (id)_accessibilitySupplementaryFooterViews;
- (void)updateCountdownWith:(long long)a0;
- (BOOL)_accessibilityIsExpanded;
- (BOOL)_accessibilityIsFullScreen;
- (id)_axConstraintsController;
- (id)_axGetParticipantView;
- (BOOL)_axIsShowingVideo;
- (id)_axParticipantView;
- (void)_axSetParticipantView:(id)a0;

@end
