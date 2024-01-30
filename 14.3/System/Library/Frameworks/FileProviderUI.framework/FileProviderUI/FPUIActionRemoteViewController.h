@protocol FPUIActionRemoteViewControllerDelegate;

@interface FPUIActionRemoteViewController : _UIRemoteViewController

@property (weak, nonatomic) id<FPUIActionRemoteViewControllerDelegate> delegate;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (void)viewServiceDidTerminateWithError:(id)a0;

@end
