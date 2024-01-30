@class NSString, NSExtension;
@protocol NSCopying;

@interface _UNNotificationContentExtensionHostViewController : _UIRemoteViewController

@property (weak, nonatomic) NSExtension *extension;
@property (copy, nonatomic) id<NSCopying> extensionRequestIdentifier;
@property (copy, nonatomic) NSString *notificationRequestIdentifier;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void)setPreferredContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)description;
- (void).cxx_destruct;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)__shouldRemoteViewControllerFenceOperations;

@end
