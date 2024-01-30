@class NSString, NSMutableDictionary, REKeyValueMap, CSLPRFDefaultAppDataProvider, NSObject;
@protocol OS_dispatch_queue;

@interface REApplicationCache : NSObject <LSApplicationWorkspaceObserverProtocol, CSLPRFAppDataProviderDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_applicationTypes;
    NSMutableDictionary *_restrictedApps;
    NSMutableDictionary *_removedApps;
    NSMutableDictionary *_watchKitExtensions;
    REKeyValueMap *_remoteApplicationsMap;
    CSLPRFDefaultAppDataProvider *_appProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)applicationsDidUninstall:(id)a0;
- (void)applicationsDidInstall:(id)a0;
- (void).cxx_destruct;
- (id)_init;
- (void)dealloc;
- (void)applicationStateDidChange:(id)a0;
- (void)_init_loadApplicationTypesMapFromWorkspace:(id)a0;
- (BOOL)_queue_applicationIsRemoved:(id)a0;
- (void)_queue_loadStateForBundleID:(id)a0;
- (BOOL)_queue_applicationIsRestricted:(id)a0;
- (void)_accessRemoteApplicationsMapWithCompletion:(id /* block */)a0;
- (void)_queue_loadRemoteAppsCompletion:(id /* block */)a0;
- (void)clearNanoRegistryApplications;
- (void)_queue_applicationsDidChange:(id)a0;
- (unsigned long long)_typeForProxy:(id)a0;
- (void)dataProviderDidChange:(id)a0;
- (BOOL)applicationIsRemoved:(id)a0;
- (BOOL)applicationIsRestricted:(id)a0;
- (BOOL)applicationIsRemote:(id)a0;
- (id)localApplicationForRemoteApplication:(id)a0;
- (id)remoteApplicationForLocalApplication:(id)a0;
- (id)watchKitExtensionForApplication:(id)a0;
- (unsigned long long)typeForApplication:(id)a0;
- (unsigned long long)_trackedApplicationCount;
- (void)_clearApplicationTypesMap;

@end
