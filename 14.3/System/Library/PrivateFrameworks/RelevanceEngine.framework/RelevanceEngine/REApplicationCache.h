@class NSString, NSMutableDictionary, REKeyValueMap, NARApplicationWorkspace, NSObject;
@protocol OS_dispatch_queue;

@interface REApplicationCache : NSObject <LSApplicationWorkspaceObserverProtocol> {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_applicationTypes;
    NSMutableDictionary *_restrictedApps;
    NSMutableDictionary *_removedApps;
    NSMutableDictionary *_watchKitExtensions;
    REKeyValueMap *_remoteApplicationsMap;
    NARApplicationWorkspace *_workspace;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)dealloc;
- (void)applicationStateDidChange:(id)a0;
- (id)_init;
- (void)applicationsDidUninstall:(id)a0;
- (void)applicationsDidInstall:(id)a0;
- (void)_init_loadApplicationTypesMapFromWorkspace:(id)a0;
- (BOOL)_queue_applicationIsRemoved:(id)a0;
- (void)_queue_loadStateForBundleID:(id)a0;
- (BOOL)_queue_applicationIsRestricted:(id)a0;
- (void)_accessRemoteApplicationsMapWithCompletion:(id /* block */)a0;
- (void)_queue_loadNanoRegistryCompletion:(id /* block */)a0;
- (void)_queue_applicationsDidChange:(id)a0;
- (unsigned long long)_typeForProxy:(id)a0;
- (BOOL)applicationIsRemoved:(id)a0;
- (BOOL)applicationIsRestricted:(id)a0;
- (BOOL)applicationIsRemote:(id)a0;
- (id)localApplicationForRemoteApplication:(id)a0;
- (id)remoteApplicationForLocalApplication:(id)a0;
- (id)watchKitExtensionForApplication:(id)a0;
- (unsigned long long)typeForApplication:(id)a0;
- (unsigned long long)_trackedApplicationCount;
- (void)clearNanoRegistryApplications;
- (void)_clearApplicationTypesMap;

@end
