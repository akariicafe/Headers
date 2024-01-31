@class AXDispatchTimer;

@interface UIAccessibilityFunCamElement : UIAccessibilityElement

@property (retain, nonatomic) AXDispatchTimer *timer;
@property BOOL tracked;

- (void).cxx_destruct;
- (void)accessibilityElementDidBecomeFocused;
- (void)accessibilityElementDidLoseFocus;
- (void)updateElementFrame;

@end
