@interface HUClipScrubberViewControllerAccessibility : __HUClipScrubberViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)viewDidLoad;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)selectionButton;
- (BOOL)_axIsEditingClips;
- (BOOL)_axIsStreamingLive;
- (id)_axPlaybackEngine;
- (void)_axToggleClipTimescale:(id)a0;

@end
