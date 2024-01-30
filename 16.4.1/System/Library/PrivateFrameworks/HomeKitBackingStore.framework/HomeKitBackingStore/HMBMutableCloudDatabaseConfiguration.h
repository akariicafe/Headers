@class NSString, CKOperationConfiguration;

@interface HMBMutableCloudDatabaseConfiguration : HMBCloudDatabaseConfiguration

@property (copy) NSString *sourceApplicationBundleIdentifier;
@property (getter=isManateeContainer) BOOL manateeContainer;
@property (copy) CKOperationConfiguration *defaultOperationConfiguration;
@property (nonatomic) BOOL registerForDBNotifications;
@property long long subscriptionPushRegistrationAction;

@end
