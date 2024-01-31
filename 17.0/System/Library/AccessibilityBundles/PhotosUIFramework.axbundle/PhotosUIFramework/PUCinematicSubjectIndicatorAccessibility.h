@class AXDispatchTimer;

@interface PUCinematicSubjectIndicatorAccessibility : __PUCinematicSubjectIndicatorAccessibility_super

@property (retain, nonatomic) AXDispatchTimer *timer;

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void).cxx_destruct;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (void)accessibilityElementDidBecomeFocused;
- (void)accessibilityElementDidLoseFocus;
- (id)accessibilityValue;
- (id)_axCountdownTimer;
- (void)_axUpdateElementFrame;
- (id)_axVideoEditOverlayViewController;
- (void)_setAXCountdownTimer:(id)a0;

@end
