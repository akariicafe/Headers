@class NSString, NSDictionary, NSArray;

@interface MBAppPlugin : MBContainer

@property (readonly, nonatomic) NSString *bundleDir;
@property (readonly, nonatomic) NSString *ownerBundleID;
@property (readonly, nonatomic) NSDictionary *entitlements;
@property (readonly, nonatomic) NSString *entitlementsRelativePath;
@property (readonly, nonatomic) NSArray *groups;
@property (readonly, nonatomic) NSArray *allAppGroupContainers;

+ (id)appPluginWithPropertyList:(id)a0;

- (id)domain;

@end
