@class ASORemoteViewController, ASOHostContext, NSString, NSOperationQueue, NSObject, ASORemoteOverlay;
@protocol OS_dispatch_queue;

@interface ASOOverlayViewController : UIViewController <ASORemoteViewControllerDelegate, ASORemoteContextProvider>

@property (retain, nonatomic) ASORemoteViewController *remoteViewController;
@property (weak, nonatomic) ASOHostContext *context;
@property (retain, nonatomic) ASORemoteOverlay *currentOverlay;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *viewServiceQueue;
@property (nonatomic) BOOL isViewServiceLoading;
@property (retain, nonatomic) NSOperationQueue *presentationQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didEnterBackground;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)didReceiveMemoryWarning;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
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
