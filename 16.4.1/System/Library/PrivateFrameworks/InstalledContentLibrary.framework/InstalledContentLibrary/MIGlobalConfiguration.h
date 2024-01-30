@class NSSet, NSDictionary, NSURL, NSString;

@interface MIGlobalConfiguration : NSObject

@property (readonly, nonatomic) NSURL *mobilePath;
@property (readonly, nonatomic) NSURL *rootPath;
@property (readonly, nonatomic) NSURL *installdPath;
@property (readonly, nonatomic) NSURL *installdLibraryPath;
@property (readonly, nonatomic) BOOL allowDeletableSystemApps;
@property (readonly, nonatomic) NSURL *stagingRoot;
@property (readonly, nonatomic) NSURL *logDirectory;
@property (readonly, nonatomic) NSURL *helperLogDirectory;
@property (readonly, nonatomic) NSURL *internalRootDirectory;
@property (readonly, nonatomic) NSURL *developerRootDirectory;
@property (readonly, nonatomic) NSURL *systemDeveloperRootDirectory;
@property (readonly, nonatomic) NSURL *coreServicesDirectory;
@property (readonly, nonatomic) NSURL *systemAppsDirectory;
@property (readonly, nonatomic) NSURL *systemAppPlaceholdersDirectory;
@property (readonly, nonatomic) NSURL *systemAppDetachedSignaturesDirectory;
@property (readonly, nonatomic) NSURL *internalAppsDirectory;
@property (readonly, nonatomic) NSSet *developerDirectories;
@property (readonly, nonatomic) NSURL *stagedSystemAppsDirectory;
@property (readonly, nonatomic) NSURL *cryptexAppsDirectory;
@property (readonly, nonatomic) NSURL *cryptexOSDirectory;
@property (readonly, nonatomic) NSURL *systemFrameworksRootDirectory;
@property (readonly, nonatomic) NSURL *internalFrameworksRootDirectory;
@property (readonly, copy, nonatomic) NSSet *allFrameworksDirectories;
@property (readonly, copy, nonatomic) NSSet *cryptexFrameworksDirectories;
@property (readonly, nonatomic) NSURL *dataDirectory;
@property (readonly, nonatomic) NSURL *cachesDirectory;
@property (readonly, nonatomic) NSURL *backedUpStateDirectory;
@property (readonly, copy, nonatomic) NSSet *appBundleMetadataItemNames;
@property (readonly, copy, nonatomic) NSSet *dataContainerRootItemNames;
@property (readonly, copy, nonatomic) NSSet *installationBlacklist;
@property (readonly, copy, nonatomic) NSSet *builtInApplicationBundleIDs;
@property (readonly, copy, nonatomic) NSSet *builtInFrameworkBundleIDs;
@property (readonly, copy, nonatomic) NSSet *systemAppPlaceholderBundleIDs;
@property (readonly, copy, nonatomic) NSSet *systemAppPlaceholderAppExtensionBundleIDs;
@property (readonly, copy, nonatomic) NSSet *systemAppPlaceholderXPCServiceBundleIDs;
@property (readonly, copy, nonatomic) NSDictionary *systemAppBundleIDToInfoMap;
@property (readonly, copy, nonatomic) NSDictionary *stagedSystemAppBundleIDToInfoMap;
@property (readonly, copy, nonatomic) NSDictionary *systemAppPlaceholderBundleIDToInfoMap;
@property (readonly, copy, nonatomic) NSDictionary *coreServicesAppBundleIDToInfoMap;
@property (readonly, copy, nonatomic) NSDictionary *internalAppBundleIDToInfoMap;
@property (readonly, copy, nonatomic) NSSet *standardInfoMapInfoPlistKeys;
@property (readonly, nonatomic) unsigned int uid;
@property (readonly, nonatomic) unsigned int gid;
@property (readonly, nonatomic) unsigned long long installdJetsamLimit;
@property (readonly, nonatomic) unsigned long long helperServiceJetsamLimit;
@property (readonly, nonatomic) NSURL *oldDataDirectoryPath;
@property (readonly, nonatomic) NSURL *oldLoggingPath;
@property (readonly, nonatomic) NSURL *oldArchiveDirectory;
@property (readonly, nonatomic) NSURL *roleUserMigrationMarkerFilePath;
@property (readonly, nonatomic) NSURL *systemAppInstallStateFilePath;
@property (readonly, nonatomic) NSURL *backupSystemAppInstallStateFilePath;
@property (readonly, copy, nonatomic) NSString *alternateThinningModelIdentifier;
@property (readonly, nonatomic) NSURL *migrationPlistURL;
@property (readonly, nonatomic) NSURL *lastBuildInfoFileURL;
@property (readonly, nonatomic) BOOL allowsInternalSecurityPolicy;
@property (readonly, nonatomic) BOOL hasInternalContent;

+ (id)sharedInstance;

- (id)_bundleIDMapForAppsInDirectory:(id)a0;
- (void)reScanInternalApps;
- (void)setSystemAppPlaceholderBundleIDToInfoMap:(id)a0;
- (id)init;
- (void)reScanCoreServicesApps;
- (id)_bundleIDMapForBundlesInDirectory:(id)a0 withExtension:(id)a1;
- (void)reScanSystemApps;
- (id)_bundleIDMapForBundlesInDirectory:(id)a0 withExtension:(id)a1 loadingAdditionalKeys:(id)a2;
- (id)_bundleIDMapForAppsInDirectory:(id)a0 loadingAdditionalKeys:(id)a1;
- (id)disableSystemAppDeletionCanaryFile;
- (void).cxx_destruct;

@end
