@protocol DDRemoteActionHostViewControllerDelegate;

@interface DDRemoteActionHostViewController : _UIRemoteViewController

@property (weak) id<DDRemoteActionHostViewControllerDelegate> delegate;

- (void)viewServiceDidTerminateWithError:(id)a0;
- (void).cxx_destruct;

@end
