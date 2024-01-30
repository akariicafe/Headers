@class NSArray, WFDrawerController, _UIGrabber;

@interface WFDrawerGrabberView : UIView {
    NSArray *_accessibilityCustomActions;
    _UIGrabber *_grabber;
}

@property (weak, nonatomic) WFDrawerController *drawerController;

- (id)accessibilityLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityCustomActions;
- (id)accessibilityHint;
- (id)init;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (BOOL)accessibilityActivate;
- (id)accessibilityValue;
- (BOOL)accessibilityCollapseDrawer;
- (BOOL)accessibilityExpandDrawer;

@end
