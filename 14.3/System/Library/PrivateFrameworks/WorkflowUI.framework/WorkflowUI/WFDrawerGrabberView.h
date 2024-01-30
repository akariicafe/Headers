@class NSArray, WFDrawerController, _UIGrabber;

@interface WFDrawerGrabberView : UIView {
    NSArray *_accessibilityCustomActions;
    _UIGrabber *_grabber;
}

@property (weak, nonatomic) WFDrawerController *drawerController;

- (BOOL)isAccessibilityElement;
- (id)init;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityLabel;
- (id)accessibilityCustomActions;
- (BOOL)accessibilityActivate;
- (id)accessibilityHint;
- (id)accessibilityValue;
- (BOOL)accessibilityCollapseDrawer;
- (BOOL)accessibilityExpandDrawer;

@end
