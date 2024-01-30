@protocol AMSUIEngagementTaskHostInterface, AMSUIEngagementTaskRemoteInterface;

@interface AMSUIEngagementRemoteViewController : _UIRemoteViewController

@property (weak, nonatomic) id<AMSUIEngagementTaskHostInterface> delegate;
@property (readonly, nonatomic) id<AMSUIEngagementTaskRemoteInterface> remoteProxy;

+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;

- (void).cxx_destruct;
- (void)engagementTaskDidFinishWithResult:(id)a0 error:(id)a1 completion:(id /* block */)a2;
- (void)preferredContentSizeDidChange:(struct CGSize { double x0; double x1; })a0;

@end
