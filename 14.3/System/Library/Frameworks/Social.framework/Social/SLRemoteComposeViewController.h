@protocol SLRemoteComposeViewControllerDelegateProtocol;

@interface SLRemoteComposeViewController : _UIRemoteViewController

@property (weak, nonatomic) id<SLRemoteComposeViewControllerDelegateProtocol> delegate;

- (void).cxx_destruct;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (BOOL)_canShowWhileLocked;

@end
