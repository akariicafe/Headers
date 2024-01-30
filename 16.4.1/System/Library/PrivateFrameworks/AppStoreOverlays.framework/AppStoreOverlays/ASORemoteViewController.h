@protocol ASORemoteViewControllerDelegate;

@interface ASORemoteViewController : _UIRemoteViewController

@property (weak, nonatomic) id<ASORemoteViewControllerDelegate> delegate;

- (void).cxx_destruct;
- (void)viewServiceDidTerminateWithError:(id)a0;

@end
