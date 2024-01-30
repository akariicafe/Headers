@class NSString, NSDictionary, NSArray;

@interface MBApp : MBContainer

@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSString *bundleVersion;
@property (readonly, nonatomic) NSString *bundleDir;
@property (readonly, nonatomic) NSDictionary *entitlements;
@property (readonly, nonatomic) NSString *entitlementsRelativePath;
@property (readonly, nonatomic) NSArray *groups;
@property (readonly, nonatomic) NSArray *plugins;
@property (readonly, nonatomic) NSArray *containers;
@property (readonly, nonatomic) BOOL isPlaceholder;
@property (readonly, nonatomic) BOOL isSystemApp;
@property (readonly, nonatomic) BOOL isAppUpdating;

+ (id)appWithBundleID:(id)a0;
+ (id)appWithPropertyList:(id)a0;
+ (id)safeHarborWithPath:(id)a0;
+ (BOOL)unzipPlaceholderDomainZipFile:(id)a0 atDirectory:(id)a1 temporaryPath:(id)a2;

- (id)domain;
- (id)_placeholderRelativePathsToBackupAndRestoreWithCache:(id)a0;
- (id)_resourceRelativePathsToBackupAndRestoreForRootDir:(id)a0 relativePath:(id)a1;
- (BOOL)_writeDeviceAppropriateIconToPath:(id)a0 fromBundlePath:(id)a1;
- (id)placeholderDomainWithCache:(id)a0;
- (void)setBundleDir:(id)a0;
- (id)zipPlaceholderDomainWithDirectory:(id)a0;

@end
