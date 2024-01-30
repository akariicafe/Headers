@class SBDeviceApplicationSceneOverlayBasicWrapperView, UIViewController, UIView;
@protocol SBDeviceApplicationSceneOverlayView;

@interface SBDeviceApplicationSceneOverlayBasicWrapperViewController : UIViewController <SBDeviceApplicationSceneOverlayViewController> {
    UIViewController *_contentViewController;
    SBDeviceApplicationSceneOverlayBasicWrapperView *_contentWrapperView;
}

@property (readonly, nonatomic) UIView<SBDeviceApplicationSceneOverlayView> *overlayView;

- (void)viewWillDisappear:(BOOL)a0;
- (id)initWithContentViewController:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;

@end
