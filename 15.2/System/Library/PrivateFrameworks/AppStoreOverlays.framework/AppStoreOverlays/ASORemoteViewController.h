@protocol ASORemoteViewControllerDelegate;

@interface ASORemoteViewController : _UIRemoteViewController

@property (weak, nonatomic) id<ASORemoteViewControllerDelegate> delegate;

- (void)viewServiceDidTerminateWithError:(id)a0;
- (void).cxx_destruct;

@end
