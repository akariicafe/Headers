@class UIWindow, UIDebuggingInformationOverlayViewController, UIDebuggingInformationRootTableViewController, UIEvent, NSMutableArray;

@interface UIDebuggingInformationOverlay : UIWindow <UISplitViewControllerDelegate>

@property (retain, nonatomic) UIEvent *lastTouch;
@property (nonatomic) struct CGPoint { double x; double y; } drawingOrigin;
@property (nonatomic) BOOL isFullscreen;
@property (readonly, nonatomic) UIDebuggingInformationOverlayViewController *overlayViewController;
@property (retain, nonatomic) UIDebuggingInformationRootTableViewController *rootTableViewController;
@property (nonatomic) BOOL checkingTouches;
@property (nonatomic) BOOL touchCaptureEnabled;
@property (retain, nonatomic) NSMutableArray *touchObservers;
@property (retain, nonatomic) UIWindow *inspectedWindow;

+ (id)overlay;
+ (void)prepareDebuggingOverlay;

- (id)init;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setHidden:(BOOL)a0;
- (void)toggleFullscreen;
- (void)toggleVisibility;

@end
