@class NSURL;

@interface RMLocations : NSObject

@property (class, readonly, nonatomic) long long currentDomain;
@property (class, readonly, nonatomic) NSURL *managedObjectModelURL;
@property (class, readonly, nonatomic) NSURL *xpcServiceDirectoryURL;

+ (id)homeDirectoryURL;
+ (id)baseDirectoryURLCreateIfNeeded:(BOOL)a0;
+ (id)URLWithResolvedSymlinksFromURL:(id)a0 error:(id *)a1;
+ (id)_applicationSupportChildDirectoryURLInDomain:(long long)a0 createIfNeeded:(BOOL)a1 childName:(id)a2 descriptor:(id)a3;
+ (id)_dataVaultChildDirectoryURLInDomain:(long long)a0 createIfNeeded:(BOOL)a1 childName:(id)a2 descriptor:(id)a3;
+ (void)_oneTimeDataVaultConversionInDomain:(long long)a0 dataVaultDirectoryURL:(id)a1;
+ (id)_rootDirectoryURLInDomain:(long long)a0 error:(id *)a1;
+ (id)baseDirectoryURLInDomain:(long long)a0 createIfNeeded:(BOOL)a1;
+ (id)darwinCacheDirectoryURL;
+ (id)darwinTemporaryDirectoryURL;
+ (id)darwinUserDirectoryURL;
+ (id)dataVaultDirectoryURLCreateIfNeeded:(BOOL)a0;
+ (id)dataVaultDirectoryURLInDomain:(long long)a0 createIfNeeded:(BOOL)a1;
+ (id)defaultsOverrideFileURLCreateIfNeeded:(BOOL)a0;
+ (id)defaultsOverrideFileURLInDomain:(long long)a0 createIfNeeded:(BOOL)a1;
+ (BOOL)fixFilePermissionsForURL:(id)a0;
+ (id)httpLoggingDirectoryURLCreateIfNeeded:(BOOL)a0;
+ (id)httpLoggingDirectoryURLInDomain:(long long)a0 createIfNeeded:(BOOL)a1;
+ (id)identityDirectoryURLCreateIfNeeded:(BOOL)a0;
+ (id)identityDirectoryURLInDomain:(long long)a0 createIfNeeded:(BOOL)a1;
+ (id)migrationStatusFileURLCreateIfNeeded:(BOOL)a0;
+ (id)migrationStatusFileURLInDomain:(long long)a0 createIfNeeded:(BOOL)a1;
+ (id)oldBaseDirectoryURLInSystemDomain;
+ (id)persistentStoreDirectoryURLCreateIfNeeded:(BOOL)a0;
+ (id)persistentStoreDirectoryURLInDomain:(long long)a0 createIfNeeded:(BOOL)a1;
+ (id)persistentStoreURLCreateIfNeeded:(BOOL)a0;
+ (id)persistentStoreURLInDomain:(long long)a0 createIfNeeded:(BOOL)a1;
+ (id)statusDirectoryURLCreateIfNeeded:(BOOL)a0;
+ (id)statusDirectoryURLInDomain:(long long)a0 createIfNeeded:(BOOL)a1;

@end
