@class NSPredicate;

@interface HMMutableCameraUserNotificationSettings : HMCameraUserNotificationSettings

@property long long version;
@property (getter=isAccessModeChangeNotificationEnabled) BOOL accessModeChangeNotificationEnabled;
@property (getter=isReachabilityEventNotificationEnabled) BOOL reachabilityEventNotificationEnabled;
@property (getter=isSmartBulletinBoardNotificationEnabled) BOOL smartBulletinBoardNotificationEnabled;
@property (copy) NSPredicate *smartBulletinBoardNotificationCondition;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
