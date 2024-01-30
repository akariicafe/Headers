@class NSString;

@interface XBSnapshotContainerIdentity : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *snapshotContainerPath;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *bundlePath;
@property (readonly, copy, nonatomic) NSString *dataContainerPath;
@property (readonly, copy, nonatomic) NSString *bundleContainerPath;

+ (id)identityForCompatibilityInfo:(id)a0;
+ (id)identityForBundleProxy:(id)a0;
+ (id)identityForApplicationRecord:(id)a0;
+ (id)identityForApplicationInfo:(id)a0;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)_initWithBundleIdentifier:(id)a0 bundlePath:(id)a1 dataContainerPath:(id)a2 bundleContainerPath:(id)a3;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)snapshotContainerPathForSnapshot:(id)a0;
- (unsigned long long)hash;
- (id)snapshotContainerPathForGroupID:(id)a0;
- (id)succinctDescription;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
