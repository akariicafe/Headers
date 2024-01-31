@class AccessibilityInfoPanelWindow, NSString, UIView, UILabel, UIViewController;

@interface AccessibilityInfoPanel : NSObject {
    UIViewController *_accessibilityInfoPanelController;
    AccessibilityInfoPanelWindow *_accessibilityInfoPanelWindow;
    UIView *_accessibilityInfoPanelView;
    UIView *_rootView;
    UILabel *_labelView;
    UIView *_backgroundView;
    BOOL _displayOnBottomEdge;
}

@property (retain, nonatomic) NSString *title;
@property (nonatomic) BOOL displayOnBottomEdge;

- (void)_layoutSubviews;
- (id)init;
- (void)dealloc;
- (void)_setup;
- (id)initWithTitle:(id)a0;
- (void)show;
- (void).cxx_destruct;
- (void)hide;
- (void)fadeOut;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_displayFrame;
- (id)_rootView;
- (id)_accessibilityInfoPanelController;
- (id)_accessibilityInfoPanelWindow;
- (id)_accessibilityInfoPanelView;
- (BOOL)displayOnBottomEdge;
- (void)setDisplayOnBottomEdge:(BOOL)a0;

@end
