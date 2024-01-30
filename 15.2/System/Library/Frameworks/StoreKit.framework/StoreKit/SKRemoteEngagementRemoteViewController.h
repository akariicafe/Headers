@protocol SKEngagementPresenterProtocol;

@interface SKRemoteEngagementRemoteViewController : _UIRemoteViewController

@property (weak, nonatomic) id<SKEngagementPresenterProtocol> delegate;

+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;

- (void).cxx_destruct;
- (void)preferredContentSizeDidChange:(struct CGSize { double x0; double x1; })a0;
- (void)engagementTaskDidFinishWithResult:(id)a0 resultData:(id)a1 error:(id)a2 completion:(id /* block */)a3;

@end
