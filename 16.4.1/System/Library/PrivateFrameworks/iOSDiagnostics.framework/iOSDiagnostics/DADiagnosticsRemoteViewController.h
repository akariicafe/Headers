@class DADiagnosticResponder;
@protocol DADiagnosticsRemoteViewControllerDelegate;

@interface DADiagnosticsRemoteViewController : _UIRemoteViewController <DADiagnosticsRemoteViewControllerInterface>

@property (retain, nonatomic) DADiagnosticResponder *responder;
@property (nonatomic) float originalScreenBrightness;
@property (weak, nonatomic) id<DADiagnosticsRemoteViewControllerDelegate> delegate;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (id)requestViewControllerWithConnectionHandler:(id /* block */)a0;

- (id)_stringForReason:(unsigned long long)a0;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)viewServiceDidFinishWithReason:(unsigned long long)a0;
- (id)_viewServiceInterface;
- (void)requiredSerialNumbers:(id)a0;
- (void)selectableSerialNumbers:(id)a0;
- (void)sessionToken:(id)a0;
- (void)viewServiceDidEnableVolumeHUD:(BOOL)a0;
- (void)viewServiceDidSetScreenToBrightness:(float)a0 animate:(BOOL)a1;
- (void)viewServiceDidSuspend;

@end
