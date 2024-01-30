@protocol _SBUIPopoverExtensionHostDelegate;

@interface SBUIPopoverExtensionHostViewController : _UIRemoteViewController <_SBUIPopoverExtensionHostInterface>

@property (weak, nonatomic) id<_SBUIPopoverExtensionHostDelegate> delegate;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (void)_extensionRequestsDismiss;
- (BOOL)__shouldRemoteViewControllerFenceOperations;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (BOOL)_canShowWhileLocked;

@end
