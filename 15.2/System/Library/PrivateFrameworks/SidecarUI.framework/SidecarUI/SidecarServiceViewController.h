@class NSString, SidecarRequest;
@protocol SidecarServiceHostInterface;

@interface SidecarServiceViewController : UIViewController <SidecarServiceServiceInterface, SidecarServiceProviderDelegate> {
    BOOL _terminationRequested;
    BOOL _calledServiceReady;
    SidecarRequest *_request;
}

@property (readonly) id<SidecarServiceHostInterface> hostProxy;
@property (readonly) SidecarRequest *request;
@property (readonly) BOOL waitForServiceReady;
@property (nonatomic) BOOL wantsVolumeButtonEvents;
@property (nonatomic) BOOL allowsDisplaySleep;
@property (nonatomic) BOOL backgrounded;
@property (nonatomic) BOOL waitForReconnect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;
+ (BOOL)_isSecureForRemoteViewService;

- (void)viewDidLoad;
- (long long)requestCompleted;
- (void)setRequest:(id)a0;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)requestDidFinish:(id)a0;
- (void)sidecarServiceProviderHandleRequest:(id)a0;
- (void)sidecarServiceProviderTerminate;
- (void)sidecarRequest:(id)a0 receivedItems:(id)a1;
- (void)sidecarServiceActive;
- (void)sidecarServiceCancel;
- (void)sidecarServiceVolumeUpButtonPressed:(BOOL)a0;
- (void)sidecarServiceVolumeDownButtonPressed:(BOOL)a0;
- (void)sidecarServiceSetBackgrounded:(BOOL)a0;
- (void)serviceReady;
- (void)requestDidStart:(id)a0;
- (void)_notifyServiceAndTerminate:(long long)a0;
- (void)receivedItems:(id)a0;
- (void)completeRequest:(long long)a0;
- (void)sidecarServiceUpdateSupportedOrientations;

@end
