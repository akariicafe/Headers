@protocol _SBUIPopoverExtensionHostDelegate;

@interface SBUIPopoverExtensionHostViewController : _UIRemoteViewController <_SBUIPopoverExtensionHostInterface>

@property (weak, nonatomic) id<_SBUIPopoverExtensionHostDelegate> delegate;

+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;

- (void)viewServiceDidTerminateWithError:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (BOOL)__shouldRemoteViewControllerFenceOperations;
- (void)_extensionRequestsDismiss;

@end
