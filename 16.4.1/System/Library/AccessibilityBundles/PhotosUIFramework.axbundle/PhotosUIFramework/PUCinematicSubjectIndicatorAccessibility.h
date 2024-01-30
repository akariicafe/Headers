@class AXDispatchTimer;

@interface PUCinematicSubjectIndicatorAccessibility : __PUCinematicSubjectIndicatorAccessibility_super

@property (retain, nonatomic) AXDispatchTimer *timer;

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (void)accessibilityElementDidBecomeFocused;
- (void)accessibilityElementDidLoseFocus;
- (id)accessibilityValue;
- (id)_axCountdownTimer;
- (void)_axUpdateElementFrame;
- (id)_axVideoEditOverlayViewController;
- (void)_setAXCountdownTimer:(id)a0;

@end
