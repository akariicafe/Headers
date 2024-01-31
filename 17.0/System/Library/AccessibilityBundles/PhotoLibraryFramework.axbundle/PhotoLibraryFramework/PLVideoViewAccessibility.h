@interface PLVideoViewAccessibility : __PLVideoViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (id)accessibilityElements;
- (BOOL)isAccessibilityElement;
- (id)accessibilityURL;
- (void)viewDidDisappear;
- (void)_accessibilityClearChildren;
- (id)_accessibilityElementStoredUserLabel;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_createScrubberIfNeeded;
- (void)_showVideoOverlay;
- (void)_updateScrubberVisibilityWithDuration:(double)a0;
- (void)_videoOverlayFadeOutDidFinish;

@end
