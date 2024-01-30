@class NSArray, WFDrawerController, _UIGrabber;

@interface WFDrawerGrabberView : UIView {
    NSArray *_accessibilityCustomActions;
    _UIGrabber *_grabber;
}

@property (weak, nonatomic) WFDrawerController *drawerController;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (BOOL)accessibilityActivate;
- (void).cxx_destruct;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (id)init;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (id)accessibilityCustomActions;
- (BOOL)accessibilityCollapseDrawer;
- (BOOL)accessibilityExpandDrawer;

@end
