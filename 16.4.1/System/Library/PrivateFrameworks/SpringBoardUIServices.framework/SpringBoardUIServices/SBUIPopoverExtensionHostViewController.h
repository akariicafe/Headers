@protocol _SBUIPopoverExtensionHostDelegate;

@interface SBUIPopoverExtensionHostViewController : _UIRemoteViewController <_SBUIPopoverExtensionHostInterface>

@property (weak, nonatomic) id<_SBUIPopoverExtensionHostDelegate> delegate;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (BOOL)__shouldRemoteViewControllerFenceOperations;
- (void)_extensionRequestsDismiss;

@end
