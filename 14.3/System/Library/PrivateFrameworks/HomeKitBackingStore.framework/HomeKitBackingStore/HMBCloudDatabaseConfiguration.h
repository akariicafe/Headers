@class NSString, HMFScheduler, CKContainerID, CKOperationConfiguration;

@interface HMBCloudDatabaseConfiguration : HMFObject <NSCopying, NSMutableCopying>

@property (getter=isManateeContainer) BOOL manateeContainer;
@property (copy) CKOperationConfiguration *defaultOperationConfiguration;
@property (copy) NSString *sourceApplicationBundleIdentifier;
@property (retain, nonatomic) HMFScheduler *apsRegistrationScheduler;
@property (readonly, copy) CKContainerID *containerID;

- (id)initWithContainerID:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)attributeDescriptions;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;

@end
