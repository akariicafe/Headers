@class NSUUID, NSExtension;

@interface _MSMessageExtensionRemoteViewController : _UIRemoteViewController

@property (retain, nonatomic) NSUUID *requestUUID;
@property (weak, nonatomic) NSExtension *weakExtension;
@property (nonatomic, getter=isReadyToDisplay) BOOL readyToDisplay;

- (void)dealloc;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (BOOL)__shouldRemoteViewControllerFenceOperations;

@end
