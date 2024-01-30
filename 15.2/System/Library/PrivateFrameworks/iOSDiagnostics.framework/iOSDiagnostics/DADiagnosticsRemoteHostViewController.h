@class DADiagnosticResponder;
@protocol DADiagnosticsRemoteDelegate;

@interface DADiagnosticsRemoteHostViewController : _UIRemoteViewController <DADiagnosticsRemoteViewControllerInterface>

@property (retain, nonatomic) DADiagnosticResponder *responder;
@property (nonatomic) float originalScreenBrightness;
@property (weak, nonatomic) id<DADiagnosticsRemoteDelegate> delegate;

+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;
+ (void)requestDiagnosticsRemoteViewControllerWithConnectionHandler:(id /* block */)a0;

- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)viewDidLoad;
- (id)disconnect;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)_viewServiceInterface;
- (void)viewServiceDidSuspend;
- (void)viewServiceDidFinishWithReason:(unsigned long long)a0;
- (void)viewServiceDidEnableVolumeHUD:(BOOL)a0;
- (void)viewServiceDidSetScreenToBrightness:(float)a0 animate:(BOOL)a1;

@end
