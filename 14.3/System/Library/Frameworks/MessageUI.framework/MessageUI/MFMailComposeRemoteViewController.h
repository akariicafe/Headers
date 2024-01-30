@protocol MFMailComposeRemoteViewControllerDelegate;

@interface MFMailComposeRemoteViewController : _UIRemoteViewController <MFMailComposeRemoteHost>

@property (weak, nonatomic) id<MFMailComposeRemoteViewControllerDelegate> delegate;

+ (id)requestViewControllerWithConnectionHandler:(id /* block */)a0;
+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)bodyFinishedDrawing;
- (void)serviceCompositionRequestsSendWithBody:(id)a0 recipients:(id)a1 completion:(id /* block */)a2;
- (void)serviceCompositionFinishedWithResult:(long long)a0 error:(id)a1;

@end
