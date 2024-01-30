@class MCMLibraryRepair, NSArray, NSURL, MCMPOSIXUser, MCMContainerClassPathCache, MCMManagedPathRegistry;

@interface MCMGlobalConfiguration : NSObject {
    NSURL *_homeDirectory;
    NSURL *_cachesDirectory;
}

@property (nonatomic) BOOL isInternalImage;
@property (readonly, nonatomic) NSURL *sharedContainersDirectory;
@property (readonly, nonatomic) NSArray *appUserDataItemNames;
@property (readonly, nonatomic) NSArray *excludedFromAppUserData;
@property (readonly, nonatomic) MCMPOSIXUser *defaultUser;
@property (readonly, nonatomic) MCMPOSIXUser *currentUser;
@property (readonly, nonatomic) unsigned int runmode;
@property (readonly, nonatomic) unsigned int userContainerMode;
@property (readonly, nonatomic) unsigned int bundleContainerMode;
@property (readonly, nonatomic) unsigned int systemContainerMode;
@property (readonly, nonatomic) MCMPOSIXUser *bundleContainerOwner;
@property (readonly, nonatomic) MCMPOSIXUser *systemContainerOwner;
@property (readonly, nonatomic) MCMContainerClassPathCache *classPathCache;
@property (readonly, nonatomic) MCMManagedPathRegistry *managedPathRegistry;
@property (readonly, nonatomic) MCMLibraryRepair *libraryRepair;
@property (readonly, nonatomic) BOOL kernelUpcallEnabled;

- (BOOL)isGlobalContainerClass:(unsigned long long)a0;
- (BOOL)isUnsupportedSystemContainerWithContainerClass:(unsigned long long)a0;
- (BOOL)isUserSystemContainerWithContainerClass:(unsigned long long)a0;
- (unsigned int)dispositionForContainerClass:(unsigned long long)a0;
- (BOOL)isGlobalSystemContainerWithContainerClass:(unsigned long long)a0;
- (BOOL)isUnsupportedBundleContainerWithContainerClass:(unsigned long long)a0;
- (BOOL)isPerUserBundleContainerWithContainerClass:(unsigned long long)a0;
- (unsigned int)dispositionForContainerClass:(unsigned long long)a0 forUser:(id)a1;
- (BOOL)isGlobalBundleContainerWithContainerClass:(unsigned long long)a0;
- (BOOL)isUserBundleContainerWithContainerClass:(unsigned long long)a0;
- (void)signpostFirstContainerClass:(unsigned long long)a0;
- (id)initWithRunMode:(unsigned int)a0 userContainerMode:(unsigned int)a1 bundleContainerMode:(unsigned int)a2 bundleContainerOwner:(id)a3 systemContainerMode:(unsigned int)a4 systemContainerOwner:(id)a5 defaultUser:(id)a6 kernelUpcallEnabled:(BOOL)a7;
- (void).cxx_destruct;

@end
