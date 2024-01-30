@class NSUUID, NSExtension;

@interface _MSMessageExtensionRemoteViewController : _UIRemoteViewController

@property (retain, nonatomic) NSUUID *requestUUID;
@property (weak, nonatomic) NSExtension *weakExtension;
@property (nonatomic, getter=isReadyToDisplay) BOOL readyToDisplay;

- (void).cxx_destruct;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (BOOL)__shouldRemoteViewControllerFenceOperations;

@end
