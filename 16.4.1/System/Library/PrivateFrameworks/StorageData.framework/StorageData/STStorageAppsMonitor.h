@class NSLock, STUsageBundleRegistry, NSArray, NSString, STSizeDict, SUDownload, NSOperationQueue, NSDictionary, STMSizer, NSOperation;

@interface STStorageAppsMonitor : NSObject <STMSizeCacheDelegate, LSApplicationWorkspaceObserverProtocol> {
    NSOperationQueue *_serialQueue;
    NSLock *_appsLock;
    NSDictionary *_appsByID;
    NSDictionary *_childAppsByParentID;
    NSOperation *_updateAppsOperation;
    NSOperation *_initialLoadOperation;
    NSArray *_pkContainers;
    NSDictionary *_sharedContainers;
    Class _sharedContainerClass;
    BOOL _sortNeeded;
}

@property (retain) STMSizer *appSizer;
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
@property (retain) STUsageBundleRegistry *usageBundles;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedMonitor;

- (void)sync;
- (void)applicationsDidInstall:(id)a0;
- (void)applicationInstallsDidChange:(id)a0;
- (void)applicationStateDidChange:(id)a0;
- (void)dealloc;
- (id)init;
- (void)applicationsDidUninstall:(id)a0;
- (void).cxx_destruct;
- (id)appWithIdentifier:(id)a0;
- (void)startMonitor;
- (id)storageInfoDict;
- (void)_logAppSizes:(id)a0;
- (void)addDeviceInfoToDict:(id)a0;
- (void)addNumber:(long long)a0 toDict:(id)a1 forKey:(id)a2;
- (void)addTimestampToDict:(id)a0;
- (id)appSizesDict;
- (id)appsSortedBySize;
- (void)appsStateChanged:(id)a0;
- (id)categorySizesDict;
- (id)childAppsForApp:(id)a0;
- (id)filteredApps:(id /* block */)a0 sortedUsingBlock:(id /* block */)a1;
- (void)loadApps;
- (void)logAppSizes;
- (void)mediaSizesChanged:(id)a0;
- (void)notifyAppsChanged;
- (void)refreshApps:(id)a0;
- (void)setSortNeeded;
- (void)sizeCacheItemsUpdated:(id)a0;
- (void)stopMonitor;
- (id)updateApps;
- (id)usageBundleForIdentifier:(id)a0;

@end
