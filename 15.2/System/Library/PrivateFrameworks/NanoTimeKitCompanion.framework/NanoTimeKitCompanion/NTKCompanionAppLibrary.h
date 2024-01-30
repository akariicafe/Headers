@class NSHashTable, NSString, NSRecursiveLock, NSArray, NSSet, CLKDevice, NSObject, NSMutableArray, NSIndexSet;
@protocol OS_dispatch_queue;

@interface NTKCompanionAppLibrary : NSObject <NTKCompanionAppDelegate, LSApplicationWorkspaceObserverProtocol, ACXDeviceConnectionDelegate, NTKSystemAppStateCache>

@property (retain, nonatomic) NSArray *allApps;
@property (retain, nonatomic) NSArray *firstPartyApps;
@property (retain, nonatomic) NSArray *watchSystemApps;
@property (retain, nonatomic) NSSet *installedSystemApplicationIdentifiers;
@property (retain, nonatomic) NSArray *thirdPartyApps;
@property (nonatomic) BOOL appConduitLoaded;
@property (copy, nonatomic) NSIndexSet *disabledComplicationTypesCache;
@property (retain, nonatomic) NSHashTable *changeObservers;
@property (retain, nonatomic) NSRecursiveLock *internalLock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *updateProcessingQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *observerCallbackQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *appProcessingQueue;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int x0; } *prewarmLock;
@property (retain, nonatomic) NSMutableArray *prewarmCallbacks;
@property (retain, nonatomic) CLKDevice *device;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedAppLibrary;

- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)applicationsUninstalled:(id)a0 onDeviceWithPairingID:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)applicationsInstalled:(id)a0 onDeviceWithPairingID:(id)a1;
- (void)_load;
- (void)applicationStateDidChange:(id)a0;
- (void)applicationDatabaseResyncedForDeviceWithPairingID:(id)a0;
- (void)applicationsUpdated:(id)a0 onDeviceWithPairingID:(id)a1;
- (void)_activeDeviceChanged;
- (void)prewarmCompanionDaemonWithCompletion:(id /* block */)a0;
- (BOOL)isRestrictedSystemApp:(id)a0;
- (BOOL)isRemovedSystemApp:(id)a0;
- (void)companionAppUpdatedIcon:(id)a0;
- (void)_loadApps;
- (void)_notifyAppUpdated:(id)a0;
- (void)_notifyAppIconUpdated:(id)a0;
- (void)_queue_loadApps;
- (void)_loadWatchApps;
- (void)_notifyAppRemoved:(id)a0;
- (void)_notifyAppAdded:(id)a0;
- (void)companionAppWasUpdated:(id)a0;
- (id)disabledComplicationTypes;

@end
