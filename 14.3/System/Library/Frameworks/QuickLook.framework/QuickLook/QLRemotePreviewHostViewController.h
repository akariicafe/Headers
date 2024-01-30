@class QLRemoteItemViewController, NSExtension;

@interface QLRemotePreviewHostViewController : _UIRemoteViewController

@property (weak) QLRemoteItemViewController *remoteItemViewController;
@property (retain, nonatomic) NSExtension *extension;
@property (retain, nonatomic) id request;

- (void).cxx_destruct;
- (void)viewServiceDidTerminateWithError:(id)a0;

@end
