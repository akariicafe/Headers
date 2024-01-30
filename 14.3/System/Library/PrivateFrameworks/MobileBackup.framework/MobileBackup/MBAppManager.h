@class MBSettingsContext, NSMutableDictionary;

@interface MBAppManager : NSObject {
    MBSettingsContext *_settingsContext;
    NSMutableDictionary *_containersByID;
    NSMutableDictionary *_systemDataContainersByID;
    NSMutableDictionary *_systemSharedContainersByID;
}

+ (id)_allPersistedDisabledDomainNames;
+ (void)_persistDisabledDomainNames:(id)a0;
+ (id)appManager;
+ (id)appManagerWithSettingsContext:(id)a0;

- (void)dealloc;
- (id)allApps;
- (id)containerWithIdentifier:(id)a0;
- (id)_allDisabledDomainNames;
- (id)initWithSettingsContext:(id)a0;
- (id)_subdomainNamesForAppDomainNames:(id)a0;
- (BOOL)_isContainerizedAppDomain:(id)a0;
- (void)_reconcileBooksAndHealthInDisabledDomainsList:(id)a0;
- (id)allDisabledDomainNames;
- (id)_copyUserAppsWithError:(id *)a0;
- (id)_copySystemContainersWithError:(id *)a0;
- (id)_copySafeHarborsWithError:(id *)a0;
- (id)_copySystemPluginsWithError:(id *)a0;
- (id)_copyAppsWithPlists:(id)a0 safeHarbor:(BOOL)a1 error:(id *)a2;
- (id)_copySystemPluginsWithPlists:(id)a0 error:(id *)a1;
- (id)_copySystemContainersWithPlists:(id)a0 error:(id *)a1;
- (void)_syncDisabledDomainsWithAllInstalledAppDomains:(id)a0;
- (id)createSafeHarborForContainer:(id)a0 usingIntermediateRestoreDir:(BOOL)a1 error:(id *)a2;
- (BOOL)moveAppDataToSafeHarborForContainer:(id)a0 usingIntermediateRestoreDir:(BOOL)a1 withError:(id *)a2;
- (BOOL)isDomainNameEnabled:(id)a0;
- (id)allPlugins;
- (void)removeAllDisabledDomainNames;
- (void)setEnabled:(BOOL)a0 forDomainName:(id)a1;
- (id)allRestrictedDomainNames;
- (BOOL)loadAppsWithSafeHarbors:(BOOL)a0 error:(id *)a1;
- (id)allSystemContainers;
- (id)systemDataContainerWithIdentifier:(id)a0;
- (id)appWithIdentifier:(id)a0;
- (id)systemSharedContainerWithIdentifier:(id)a0;
- (void)removeOldSafeHarbors;
- (void)removeStaleStateForUninstalledApps;
- (id)createSafeHarborForContainer:(id)a0 error:(id *)a1;
- (BOOL)moveAppDataToSafeHarborForContainer:(id)a0 withError:(id *)a1;
- (id)allContainers;

@end
