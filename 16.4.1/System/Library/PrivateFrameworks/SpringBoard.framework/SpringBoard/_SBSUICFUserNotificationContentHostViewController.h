@class NSString, SBUserNotificationAlert;

@interface _SBSUICFUserNotificationContentHostViewController : _UIRemoteViewController <_SBSUICFUserNotificationContentExtensionHostInterface>

@property (weak, nonatomic) SBUserNotificationAlert *userNotification;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

@end
