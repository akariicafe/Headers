@class CKDatabase, CKRecordZone, NSCloudKitMirroringDelegateOptions, NSURL, NSObject, PFCloudKitStoreMonitor;
@protocol OS_dispatch_queue;

@interface PFCloudKitImporterOptions : NSObject

@property (readonly, nonatomic) CKDatabase *database;
@property (readonly, nonatomic) CKRecordZone *recordZone;
@property (readonly, nonatomic) PFCloudKitStoreMonitor *monitor;
@property (readonly, nonatomic) NSCloudKitMirroringDelegateOptions *options;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) NSURL *assetStorageURL;

- (void)dealloc;
- (id)copy;
- (id)initWithOptions:(id)a0 monitor:(id)a1 assetStorageURL:(id)a2 workQueue:(id)a3 zone:(id)a4 andDatabase:(id)a5;

@end
