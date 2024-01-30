@class NSString, HMFScheduler, CKOperationConfiguration;

@interface HMBMutableCloudDatabaseConfiguration : HMBCloudDatabaseConfiguration

@property (copy) NSString *sourceApplicationBundleIdentifier;
@property (getter=isManateeContainer) BOOL manateeContainer;
@property (copy) CKOperationConfiguration *defaultOperationConfiguration;
@property (retain, nonatomic) HMFScheduler *apsRegistrationScheduler;
@property (nonatomic) BOOL registerForDBNotifications;

@end
