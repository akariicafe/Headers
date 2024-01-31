@interface EpisodeViewAccessibility : __EpisodeViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityCustomActions;
- (id)_accessibilityUserTestingChildren;
- (BOOL)isAccessibilityElement;
- (id)_accessibilitySupplementaryFooterViews;
- (id)accessibilityCustomContent;
- (BOOL)_accessibilityActivateShouldPerformPlayPause;
- (id)_accessibilityLabelForPlaybackState:(BOOL)a0;
- (BOOL)_accessibilityPerformSummaryButton:(id)a0;
- (void)_axAddExtraButtonsToArray:(id)a0;
- (id)_axSummaryButton;

@end
