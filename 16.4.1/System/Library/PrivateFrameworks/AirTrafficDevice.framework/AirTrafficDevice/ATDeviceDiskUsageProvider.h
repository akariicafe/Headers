@class ATClientController, NSMutableDictionary, ATUserDefaults, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface ATDeviceDiskUsageProvider : NSObject {
    NSMutableDictionary *_diskUsageInfo;
    ATUserDefaults *_defaults;
    NSObject<OS_dispatch_queue> *_queue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    ATClientController *_clientController;
    NSMutableSet *_usageUpdateCompletionHandlers;
}

+ (id)sharedInstance;

- (id)getCurrentUsage;
- (void)getUpdatedUsageWithCompletion:(id /* block */)a0;
- (id)_cacheDeletePurgeableStorageData;
- (id)init;
- (id)_diskUsageForDataClass:(id)a0;
- (void)getCurrentUsageWithUpdatedDataClasses:(id)a0 withCompletion:(id /* block */)a1;
- (void).cxx_destruct;

@end
