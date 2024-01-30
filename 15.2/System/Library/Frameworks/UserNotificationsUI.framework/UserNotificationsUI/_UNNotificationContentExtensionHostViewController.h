@class NSString, NSExtension;
@protocol NSCopying;

@interface _UNNotificationContentExtensionHostViewController : _UIRemoteViewController

@property (weak, nonatomic) NSExtension *extension;
@property (copy, nonatomic) id<NSCopying> extensionRequestIdentifier;
@property (copy, nonatomic) NSString *notificationRequestIdentifier;

- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (id)description;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)setPreferredContentSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)__shouldRemoteViewControllerFenceOperations;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
