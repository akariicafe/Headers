@interface PLVideoViewAccessibility : __PLVideoViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)accessibilityURL;
- (BOOL)isAccessibilityElement;
- (id)accessibilityElements;
- (id)accessibilityLabel;
- (void)viewDidDisappear;
- (id)_accessibilityElementStoredUserLabel;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_accessibilityClearChildren;
- (void)_createScrubberIfNeeded;
- (void)_showVideoOverlay;
- (void)_videoOverlayFadeOutDidFinish;
- (void)_updateScrubberVisibilityWithDuration:(double)a0;

@end
