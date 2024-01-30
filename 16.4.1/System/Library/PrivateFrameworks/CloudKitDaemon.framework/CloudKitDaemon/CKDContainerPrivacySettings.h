@class CKContainerID, NSSet;

@interface CKDContainerPrivacySettings : NSObject

@property (copy, nonatomic) CKContainerID *containerID;
@property (copy, nonatomic) NSSet *applicationBundleIDs;
@property (nonatomic) long long discoverable;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)CKPropertiesDescription;
- (id)description;
- (void).cxx_destruct;

@end
