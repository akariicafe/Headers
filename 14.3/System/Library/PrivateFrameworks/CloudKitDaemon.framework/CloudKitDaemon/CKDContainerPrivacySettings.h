@class CKContainerID, NSSet;

@interface CKDContainerPrivacySettings : NSObject

@property (copy, nonatomic) CKContainerID *containerID;
@property (copy, nonatomic) NSSet *applicationBundleIDs;
@property (nonatomic) long long discoverable;

- (id)CKPropertiesDescription;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
