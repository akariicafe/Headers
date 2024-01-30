@class DADiagnosticResponder;
@protocol DADiagnosticsRemoteDelegate;

@interface DADiagnosticsRemoteHostViewController : _UIRemoteViewController <DADiagnosticsRemoteViewControllerInterface>

@property (retain, nonatomic) DADiagnosticResponder *responder;
@property (nonatomic) float originalScreenBrightness;
@property (weak, nonatomic) id<DADiagnosticsRemoteDelegate> delegate;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (void)requestDiagnosticsRemoteViewControllerWithConnectionHandler:(id /* block */)a0;

- (id)disconnect;
- (void).cxx_destruct;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidLoad;
- (id)_viewServiceInterface;
- (void)viewServiceDidSuspend;
- (void)viewServiceDidFinishWithReason:(unsigned long long)a0;
- (void)viewServiceDidEnableVolumeHUD:(BOOL)a0;
- (void)viewServiceDidSetScreenToBrightness:(float)a0 animate:(BOOL)a1;

@end
