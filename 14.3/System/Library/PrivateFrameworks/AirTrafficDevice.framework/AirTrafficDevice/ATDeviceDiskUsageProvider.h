@class ATClientController, NSMutableDictionary, ATUserDefaults, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface ATDeviceDiskUsageProvider : NSObject {
    NSMutableDictionary *_diskUsageInfo;
    ATUserDefaults *_defaults;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_usageInfoAccessQueue;
    NSObject<OS_dispatch_group> *_usageUpdateGroup;
    ATClientController *_clientController;
}

+ (id)sharedInstance;

- (id)init;
- (void)_loadCurrentDiskUsage;
- (void).cxx_destruct;
- (void)_updatePurgeableStorageUsage;
- (void)getCurrentUsageWithUpdatedDataClasses:(id)a0 withCompletion:(id /* block */)a1;
- (id)_diskUsageForDataClass:(id)a0;
- (void)getUpdatedUsageWithCompletion:(id /* block */)a0;
- (id)getCurrentUsage;

@end
