@class CKDatabase, NSCloudKitMirroringDelegateOptions, NSURL, NSObject, PFCloudKitStoreMonitor;
@protocol OS_dispatch_queue;

@interface PFCloudKitImporterOptions : NSObject <NSCopying> {
    CKDatabase *_database;
    PFCloudKitStoreMonitor *_monitor;
    NSCloudKitMirroringDelegateOptions *_options;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSURL *_assetStorageURL;
}

- (id)initWithOptions:(id)a0 monitor:(id)a1 assetStorageURL:(id)a2 workQueue:(id)a3 andDatabase:(id)a4;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copy;
- (void)dealloc;

@end
