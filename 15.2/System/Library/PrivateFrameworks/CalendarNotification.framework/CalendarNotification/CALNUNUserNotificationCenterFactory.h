@class NSString;

@interface CALNUNUserNotificationCenterFactory : NSObject <CALNUserNotificationCenterFactory>

@property (class, readonly, nonatomic) CALNUNUserNotificationCenterFactory *sharedInstance;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)userNotificationCenterWithBundleIdentifier:(id)a0;

@end
