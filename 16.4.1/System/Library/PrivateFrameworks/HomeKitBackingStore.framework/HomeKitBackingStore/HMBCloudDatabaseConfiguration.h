@class NSString, CKContainerID, CKOperationConfiguration;

@interface HMBCloudDatabaseConfiguration : HMFObject <NSCopying, NSMutableCopying>

@property (getter=isManateeContainer) BOOL manateeContainer;
@property (copy) CKOperationConfiguration *defaultOperationConfiguration;
@property (copy) NSString *sourceApplicationBundleIdentifier;
@property (nonatomic) BOOL registerForDBNotifications;
@property long long subscriptionPushRegistrationAction;
@property (readonly, copy) CKContainerID *containerID;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithContainerID:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)attributeDescriptions;
- (void).cxx_destruct;

@end
