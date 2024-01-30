@interface SBAppSwitcherPageServiceRemoteViewController : _UIRemoteViewController <_SBUISwitcherPageHostInterface>

+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;

- (BOOL)__shouldRemoteViewControllerFenceOperations;

@end
