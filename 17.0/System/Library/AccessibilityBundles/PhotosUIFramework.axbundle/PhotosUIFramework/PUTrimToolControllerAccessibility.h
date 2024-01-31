@interface PUTrimToolControllerAccessibility : __PUTrimToolControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)viewDidLoad;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)focusTimeline:(id)a0 presentAction:(id)a1 locationInTimeline:(struct CGPoint { double x0; double x1; })a2;
- (void)_handlePlayPauseButton:(id)a0;
- (void)_handleScrubberTimelineOverlayButton:(id)a0;

@end
