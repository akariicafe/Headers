@class NSURL;

@interface RMLocations : NSObject

@property (class, readonly, nonatomic) long long currentDomain;
@property (class, readonly, nonatomic) NSURL *managedObjectModelURL;

+ (id)homeDirectoryURL;
+ (id)statusDirectoryURLCreateIfNeeded:(BOOL)a0;
+ (id)defaultsOverrideFileURLCreateIfNeeded:(BOOL)a0;
+ (id)httpLoggingDirectoryURLCreateIfNeeded:(BOOL)a0;
+ (id)applicationSupportDirectoryURLInDomain:(long long)a0 createIfNeeded:(BOOL)a1;
+ (id)applicationSupportBaseDirectoryURLInDomain:(long long)a0 error:(id *)a1;
+ (id)dataVaultDirectoryURLInDomain:(long long)a0 createIfNeeded:(BOOL)a1;
+ (id)identityDirectoryURLInDomain:(long long)a0 createIfNeeded:(BOOL)a1;
+ (id)_dataVaultChildDirectoryURLInDomain:(long long)a0 createIfNeeded:(BOOL)a1 childName:(id)a2 descriptor:(id)a3;
+ (id)persistentStoreDirectoryURLInDomain:(long long)a0 createIfNeeded:(BOOL)a1;
+ (id)persistentStoreDirectoryURLCreateIfNeeded:(BOOL)a0;
+ (id)defaultsOverrideFileURLInDomain:(long long)a0 createIfNeeded:(BOOL)a1;
+ (id)httpLoggingDirectoryURLInDomain:(long long)a0 createIfNeeded:(BOOL)a1;
+ (id)statusDirectoryURLInDomain:(long long)a0 createIfNeeded:(BOOL)a1;
+ (id)URLWithResolvedSymlinksFromURL:(id)a0 error:(id *)a1;
+ (id)applicationSupportDirectoryURLCreateIfNeeded:(BOOL)a0;
+ (id)dataVaultDirectoryURLCreateIfNeeded:(BOOL)a0;
+ (id)identityDirectoryURLCreateIfNeeded:(BOOL)a0;
+ (id)persistentStoreURLCreateIfNeeded:(BOOL)a0;
+ (id)darwinUserDirectoryURL;
+ (id)darwinCacheDirectoryURL;
+ (id)darwinTemporaryDirectoryURL;
+ (id)_applicationSupportChildDirectoryURLInDomain:(long long)a0 createIfNeeded:(BOOL)a1 childName:(id)a2 descriptor:(id)a3;

@end
