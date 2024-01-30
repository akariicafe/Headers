@class RPBroadcastActivityViewController;

@interface RPBroadcastActivityHostViewController : _UIRemoteViewController <RPBroadcastActivityCommunicationHostProtocol>

@property (weak, nonatomic) RPBroadcastActivityViewController *broadcastActivityViewController;

- (long long)modalPresentationStyle;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (unsigned long long)popoverArrowDirection;
- (oneway void)extensionDidFinishWithLaunchURL:(id)a0 broadcastURL:(id)a1 extensionBundleID:(id)a2 cancelled:(BOOL)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })popoverControllerSourceRect;
- (oneway void)presentationInfoWithCompletion:(id /* block */)a0;

@end
