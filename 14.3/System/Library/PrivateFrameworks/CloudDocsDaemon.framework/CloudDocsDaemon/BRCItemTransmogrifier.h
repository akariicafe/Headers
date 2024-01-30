@class BRCAccountSession, NSMutableDictionary, NSOperationQueue, NSMutableArray, NSObject;
@protocol OS_dispatch_source;

@interface BRCItemTransmogrifier : NSObject {
    BRCAccountSession *_session;
    NSObject<OS_dispatch_source> *_pendingRenamesTimer;
    NSMutableArray *_pendingRenames;
    NSOperationQueue *_queue;
    NSMutableDictionary *_pendingTransmogirifcations;
}

- (id)initWithSession:(id)a0;
- (void).cxx_destruct;
- (id)queue;
- (BOOL)addOperation:(id)a0 forItem:(id)a1;
- (void)removeOperationsForItem:(id)a0;
- (void)_finishDirectoryToPackageTransmogrification:(id)a0 relpath:(id)a1;
- (double)_renameDelayForZone:(id)a0;
- (double)_renameItem:(id)a0;
- (void)_scheduleRenameAfter:(double)a0 onQueue:(id)a1;
- (void)_renameItems;
- (void)scheduleDirectoryToPackageTransmogrification:(id)a0 absolutePath:(id)a1;
- (void)scheduleBouncedDirectoryRename:(id)a0;

@end
