@protocol AutomationOverlayWindowDelegate;

@interface AutomationOverlayWindow : UIWindow

@property (weak, nonatomic) id<AutomationOverlayWindowDelegate> automationWindowDelegate;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
