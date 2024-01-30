@protocol SLRemoteComposeViewControllerDelegateProtocol;

@interface SLRemoteComposeViewController : _UIRemoteViewController

@property (weak, nonatomic) id<SLRemoteComposeViewControllerDelegateProtocol> delegate;

- (void)viewServiceDidTerminateWithError:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;

@end
