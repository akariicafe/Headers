@class NSString, NSData, LSApplicationProxy, NSNumber;

@interface DMCApplicationProxy : NSObject

@property (retain, nonatomic) LSApplicationProxy *lsApp;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSString *bundlePath;
@property (readonly, nonatomic) NSString *signerID;
@property (readonly, nonatomic) NSString *appIDEntitlement;
@property (readonly, nonatomic) BOOL isInstalled;
@property (readonly, nonatomic) BOOL isBetaApp;
@property (readonly, nonatomic) BOOL isUserApp;
@property (readonly, nonatomic) BOOL isBlocked;
@property (readonly, nonatomic) NSData *misCDHash;
@property (readonly, nonatomic) NSNumber *misHashType;

+ (id)userApplications;
+ (id)blockedApplications;
+ (id)bookIconForVariant:(unsigned long long)a0;
+ (id)_bundlePathsForApplications:(id)a0;
+ (id)_allApplications;

- (BOOL)_isExcludedFromBackup;
- (id)initWithLSApplicationProxy:(id)a0;
- (BOOL)_isTapToPayScreenLock;
- (BOOL)_hasAppDNSProxy;
- (id)initWithBundleID:(id)a0;
- (id)managedAppConfigurationInfo;
- (BOOL)_hasAppVPN;
- (void)setBlockedInfo:(id)a0;
- (id)_managedAppAttribute:(id)a0;
- (id)misStateString;
- (id)iconForVariant:(unsigned long long)a0;
- (BOOL)_isUninstalledOnMDMRemoval;
- (BOOL)checkIsBlocked;
- (BOOL)_hasAssociatedDomains;
- (BOOL)_isUnableToUseCellData;
- (BOOL)_isUnableToExportToUnmanaged;
- (unsigned long long)misStateIncludingPending:(BOOL)a0;
- (BOOL)_hasManagedRestrictions;
- (BOOL)_isUnableToUseRoamingCellData;
- (id)_lsIconDataForVariant:(unsigned long long)a0 scale:(double)a1;
- (BOOL)_isExcludedFromCloudSync;
- (BOOL)_isUnableToImportFromUnmanaged;
- (BOOL)_hasAppContentFilter;
- (BOOL)_isNotRemovable;
- (void).cxx_destruct;
- (id)initWithLSApplicationRecord:(id)a0;

@end
