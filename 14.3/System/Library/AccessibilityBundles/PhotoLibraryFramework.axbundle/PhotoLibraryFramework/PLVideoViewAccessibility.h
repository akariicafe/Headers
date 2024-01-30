@interface PLVideoViewAccessibility : __PLVideoViewAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)accessibilityElements;
- (BOOL)isAccessibilityElement;
- (id)accessibilityURL;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)accessibilityLabel;
- (id)_accessibilityElementStoredUserLabel;
- (void)_createScrubberIfNeeded;
- (void)_showVideoOverlay;
- (void)_videoOverlayFadeOutDidFinish;
- (void)_updateScrubberVisibilityWithDuration:(double)a0;
- (void)viewDidDisappear;
- (void)_accessibilityClearChildren;

@end
