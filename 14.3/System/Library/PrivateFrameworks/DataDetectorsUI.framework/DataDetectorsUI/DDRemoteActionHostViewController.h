@protocol DDRemoteActionHostViewControllerDelegate;

@interface DDRemoteActionHostViewController : _UIRemoteViewController

@property (weak) id<DDRemoteActionHostViewControllerDelegate> delegate;

- (void).cxx_destruct;
- (void)viewServiceDidTerminateWithError:(id)a0;

@end
