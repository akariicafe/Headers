@class _HKArchiveCreator, NSString, NSProgress, NSURL, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface HDStaticSyncExportTask : HDStaticSyncTask <HDSyncSessionDelegate> {
    NSObject<OS_dispatch_queue> *_exportQueue;
    BOOL _exportToDisk;
    unsigned long long _batchSize;
    NSProgress *_exportProgress;
    NSProgress *_syncSessionProgress;
    NSMutableSet *_syncEntityIdentifiersWithProcessedChanges;
    _HKArchiveCreator *_archiveCreator;
    unsigned long long _changesetCount;
    unsigned long long _archiveCount;
}

@property (readonly, copy, nonatomic) NSURL *exportDirectoryURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_updateAnchorRangeMap:(id)a0 withChange:(id)a1 outError:(id *)a2;
+ (id)_createEmptyExportDirectoryForStoreIdentifier:(id)a0 location:(id)a1 error:(id *)a2;
+ (id)_archiveCreatorInDirectory:(id)a0 session:(id)a1 count:(unsigned long long)a2;
+ (id)_dataForChanges:(id)a0;
+ (id)_chagesetFilePathForCount:(unsigned long long)a0;
+ (long long)nextSyncAnchorForEntity:(Class)a0 session:(id)a1 startSyncAnchor:(long long)a2 profile:(id)a3 error:(id *)a4;
+ (id)_estimateSyncEntityClassesWithChangesForSession:(id)a0 profile:(id)a1;

- (void).cxx_destruct;
- (void)syncSession:(id)a0 sendChanges:(id)a1 completion:(id /* block */)a2;
- (void)syncSessionWillBegin:(id)a0;
- (void)syncSession:(id)a0 didFinishSuccessfully:(BOOL)a1 error:(id)a2;
- (id)runWithCompletion:(id /* block */)a0;
- (BOOL)syncSession:(id)a0 didEndTransactionWithError:(id *)a1;
- (id)initWithProfile:(id)a0 options:(unsigned long long)a1 storeIdentifier:(id)a2 URL:(id)a3 batchSize:(unsigned long long)a4;
- (long long)_exportQueue_archiveChanges:(id)a0 session:(id)a1 error:(id *)a2;

@end
