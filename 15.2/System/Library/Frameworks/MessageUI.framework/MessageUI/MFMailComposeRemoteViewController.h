@protocol MFMailComposeRemoteViewControllerDelegate;

@interface MFMailComposeRemoteViewController : _UIRemoteViewController <MFMailComposeRemoteHost>

@property (weak, nonatomic) id<MFMailComposeRemoteViewControllerDelegate> delegate;

+ (id)serviceViewControllerInterface;
+ (id)requestViewControllerWithConnectionHandler:(id /* block */)a0;
+ (id)exportedInterface;

- (void)viewServiceDidTerminateWithError:(id)a0;
- (void).cxx_destruct;
- (void)serviceCompositionRequestsSendWithBody:(id)a0 recipients:(id)a1 completion:(id /* block */)a2;
- (void)serviceCompositionFinishedWithResult:(long long)a0 error:(id)a1;
- (void)bodyFinishedDrawing;

@end
