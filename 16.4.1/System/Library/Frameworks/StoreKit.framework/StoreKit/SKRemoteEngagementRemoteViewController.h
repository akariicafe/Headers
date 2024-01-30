@protocol SKEngagementPresenterProtocol;

@interface SKRemoteEngagementRemoteViewController : _UIRemoteViewController

@property (weak, nonatomic) id<SKEngagementPresenterProtocol> delegate;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (void)engagementTaskDidFinishWithResult:(id)a0 resultData:(id)a1 error:(id)a2 completion:(id /* block */)a3;
- (void)preferredContentSizeDidChange:(struct CGSize { double x0; double x1; })a0;

@end
