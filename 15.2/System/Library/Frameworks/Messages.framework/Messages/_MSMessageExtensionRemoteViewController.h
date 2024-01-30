@class NSUUID, NSExtension;

@interface _MSMessageExtensionRemoteViewController : _UIRemoteViewController

@property (retain, nonatomic) NSUUID *requestUUID;
@property (weak, nonatomic) NSExtension *weakExtension;
@property (nonatomic, getter=isReadyToDisplay) BOOL readyToDisplay;

- (void)viewDidLayoutSubviews;
- (void).cxx_destruct;
- (BOOL)__shouldRemoteViewControllerFenceOperations;
- (void)dealloc;

@end
