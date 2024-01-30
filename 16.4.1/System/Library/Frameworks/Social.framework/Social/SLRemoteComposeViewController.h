@protocol SLRemoteComposeViewControllerDelegateProtocol;

@interface SLRemoteComposeViewController : _UIRemoteViewController

@property (weak, nonatomic) id<SLRemoteComposeViewControllerDelegateProtocol> delegate;

- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)viewServiceDidTerminateWithError:(id)a0;

@end
