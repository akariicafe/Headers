@class STStorageAppsMonitor;

@interface STStorageDataInterface : NSObject

@property (retain) STStorageAppsMonitor *appsMonitor;

+ (id)storageInfoDict_Remote;

- (void).cxx_destruct;
- (id)init;
- (id)apps;
- (id)storageInfoDict;
- (id)appSizesDict;
- (id)categorySizesDict;
- (id)appsOrderedBySize;
- (id)appsOrderedByName;

@end
