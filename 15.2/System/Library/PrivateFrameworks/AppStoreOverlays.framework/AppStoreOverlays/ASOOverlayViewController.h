@class ASORemoteViewController, ASOHostContext, ASOOverlayManager, NSOperationQueue, NSString, NSObject, ASORemoteOverlay;
@protocol OS_dispatch_queue;

@interface ASOOverlayViewController : UIApplicationRotationFollowingController <ASORemoteViewControllerDelegate, ASORemoteContextProvider>

@property (retain, nonatomic) ASORemoteViewController *remoteViewController;
@property (weak, nonatomic) ASOHostContext *context;
@property (retain, nonatomic) ASORemoteOverlay *currentOverlay;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *viewServiceQueue;
@property (nonatomic) BOOL isViewServiceLoading;
@property (retain, nonatomic) NSOperationQueue *presentationQueue;
@property (weak, nonatomic) ASOOverlayManager *overlayManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didReceiveMemoryWarning;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)didEnterBackground;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)presentOverlay:(id)a0;
- (void)dismissOverlay;
- (void)loadViewServiceIfNeeded;
- (void)_loadViewServiceIfNeeded:(id /* block */)a0;
- (void)failAllQueuedOverlaysWithError:(id)a0;
- (void)_loadRemoteViewController:(id /* block */)a0;
- (void)shutdownViewServiceIfOverlayOffScreen;
- (id)hostContextForOverlayViewService;
- (id)remoteViewControllerForOverlayViewService;
- (void)willStartPresentingOverlay:(id)a0;
- (void)didFinishDismissingOverlay:(id)a0;

@end
