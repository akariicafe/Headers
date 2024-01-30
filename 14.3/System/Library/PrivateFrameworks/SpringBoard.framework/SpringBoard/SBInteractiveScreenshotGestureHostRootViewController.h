@class NSString, _UILayerHostView, UIScreen;

@interface SBInteractiveScreenshotGestureHostRootViewController : SBFTouchPassThroughViewController <BSInvalidatable> {
    unsigned int _hostingContextID;
    int _hostingPid;
    _UILayerHostView *_layerHostView;
    UIScreen *_screen;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)_canShowWhileLocked;
- (void)invalidate;
- (id)initWithScreen:(id)a0;
- (void)viewDidLoad;
- (void)_reloadLayerHostView;
- (void)setHostingContextID:(unsigned int)a0 pid:(int)a1;

@end
