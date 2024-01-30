@class NSArray;

@interface CKApplicationPermissionGroup : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *containerIDs;
@property (copy, nonatomic) NSArray *applicationBundleIDs;
@property (nonatomic) unsigned long long enabledPermissions;

- (id)CKPropertiesDescription;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
