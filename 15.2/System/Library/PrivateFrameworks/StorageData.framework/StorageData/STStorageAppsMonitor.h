@class NSLock, STUsageBundleRegistry, NSArray, NSString, STSizeDict, SUDownload, NSOperationQueue, NSDictionary, NSObject, STMSizer;
@protocol OS_dispatch_semaphore;

@interface STStorageAppsMonitor : NSObject <STMSizeCacheDelegate, LSApplicationWorkspaceObserverProtocol> {
    NSOperationQueue *_serialQueue;
    NSLock *_appsLock;
    NSDictionary *_appsByID;
    NSDictionary *_childAppsByParentID;
    NSArray *_pkContainers;
    NSDictionary *_sharedContainers;
    Class _sharedContainerClass;
    BOOL _sortNeeded;
}

@property (retain) STUsageBundleRegistry *usageBundles;
@property (retain) STMSizer *appSizer;
@property (retain) NSObject<OS_dispatch_semaphore> *loadUsageSemaphore;
@property (retain) NSArray *prevApps;
@property (readonly) NSArray *allApps;
@property (readonly) NSArray *apps;
@property (readonly) NSArray *demotableApps;
@property (readonly) NSArray *demotedApps;
@property (readonly) BOOL appsLoaded;
@property (readonly) BOOL containersSized;
@property (readonly) long long pluginkitDataSize;
@property (readonly) long long localStorageContainerSize;
@property (retain) SUDownload *currentSoftwareUpdate;
@property (readonly) long long currentSoftwareUpdateSize;
@property (retain) STSizeDict *categorySizes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedMonitor;

- (void)applicationsDidUninstall:(id)a0;
- (void)applicationsDidInstall:(id)a0;
- (void)sync;
- (void)applicationInstallsDidChange:(id)a0;
- (id)appWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)applicationStateDidChange:(id)a0;
- (void)startMonitor;
- (void)_updateApps;
- (void)loadApps;
- (void)stopMonitor;
- (void)updateApps;
- (void)refreshApps:(id)a0;
- (void)appsStateChanged:(id)a0;
- (id)usageBundleForIdentifier:(id)a0;
- (void)logAppSizes;
- (void)notifyAppsChanged;
- (id)appsSortedBySize;
- (id)filteredApps:(id /* block */)a0 sortedUsingBlock:(id /* block */)a1;
- (void)addNumber:(long long)a0 toDict:(id)a1 forKey:(id)a2;
- (void)addTimestampToDict:(id)a0;
- (void)addDeviceInfoToDict:(id)a0;
- (void)_logAppSizes:(id)a0;
- (void)sizeCacheSizesUpdated:(id)a0;
- (void)sizeCacheItemsUpdated:(id)a0;
- (void)setSortNeeded;
- (id)childAppsForApp:(id)a0;
- (id)storageInfoDict;
- (id)appSizesDict;
- (id)categorySizesDict;

@end
