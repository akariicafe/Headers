@class MBSettingsContext, NSMutableDictionary;

@interface MBAppManager : NSObject {
    MBSettingsContext *_settingsContext;
    NSMutableDictionary *_containersByID;
    NSMutableDictionary *_systemDataContainersByID;
    NSMutableDictionary *_systemSharedContainersByID;
}

+ (id)_allPersistedDisabledDomainNamesForAccount:(id)a0;
+ (void)_persistDisabledDomainNames:(id)a0 forAccount:(id)a1;
+ (id)appManager;
+ (id)appManagerWithSettingsContext:(id)a0;

- (id)allApps;
- (id)initWithSettingsContext:(id)a0;
- (id)_subdomainNamesForAppDomainNames:(id)a0;
- (id)allDisabledDomainNamesForAccount:(id)a0;
- (id)_allDisabledDomainNamesForAccount:(id)a0;
- (BOOL)_isContainerizedAppDomain:(id)a0;
- (void)_reconcileBooksAndHealthInDisabledDomainsList:(id)a0;
- (id)allRestrictedDomainNamesForAccount:(id)a0;
- (BOOL)loadAppsWithAccount:(id)a0 safeHarbors:(BOOL)a1 dataSeparatedBundleIDs:(id)a2 error:(id *)a3;
- (id)_copySafeHarborsWithError:(id *)a0;
- (id)_copyUserAppsForAccount:(id)a0 dataSeparatedBundleIDs:(id)a1 error:(id *)a2;
- (id)_copySystemContainersWithError:(id *)a0;
- (id)_copySystemPluginsWithError:(id *)a0;
- (id)_copyAppsWithPlists:(id)a0 safeHarbor:(BOOL)a1 error:(id *)a2;
- (id)_copySystemPluginsWithPlists:(id)a0 error:(id *)a1;
- (id)_copySystemContainersWithPlists:(id)a0 error:(id *)a1;
- (void)_syncDisabledDomainsWithAllInstalledAppDomains:(id)a0 account:(id)a1;
- (id)createSafeHarborForContainer:(id)a0 usingIntermediateRestoreDir:(BOOL)a1 error:(id *)a2;
- (BOOL)moveAppDataToSafeHarborForContainer:(id)a0 usingIntermediateRestoreDir:(BOOL)a1 withError:(id *)a2;
- (void)removeAllDisabledDomainNamesForAccount:(id)a0;
- (id)allDisabledDomainNames;
- (BOOL)isDomainNameEnabled:(id)a0 forAccount:(id)a1;
- (void)setEnabled:(BOOL)a0 forDomainName:(id)a1 account:(id)a2;
- (id)allRestrictedDomainNames;
- (BOOL)loadAppsWithSafeHarbors:(BOOL)a0 error:(id *)a1;
- (BOOL)loadAppsWithAccount:(id)a0 safeHarbors:(BOOL)a1 error:(id *)a2;
- (id)allSystemContainers;
- (id)systemDataContainerWithIdentifier:(id)a0;
- (id)systemSharedContainerWithIdentifier:(id)a0;
- (id)appWithIdentifier:(id)a0;
- (void)removeOldSafeHarbors;
- (void)removeStaleStateForUninstalledAppsForAccount:(id)a0;
- (id)createSafeHarborForContainer:(id)a0 error:(id *)a1;
- (BOOL)moveAppDataToSafeHarborForContainer:(id)a0 withError:(id *)a1;
- (void).cxx_destruct;
- (id)containerWithIdentifier:(id)a0;
- (id)allPlugins;
- (id)allContainers;

@end
