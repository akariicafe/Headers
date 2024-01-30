@class STStorageAppsMonitor;

@interface STStorageDataInterface : NSObject

@property (retain) STStorageAppsMonitor *appsMonitor;

+ (id)storageInfoDict_Remote;

- (id)apps;
- (id)init;
- (void).cxx_destruct;
- (id)storageInfoDict;
- (id)appSizesDict;
- (id)appsOrderedByName;
- (id)appsOrderedBySize;
- (id)categorySizesDict;

@end
