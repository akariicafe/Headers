@class NSObject, NSMutableSet, ML3DatabaseConnection;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ML3ProtoSyncImportOperation : ML3ImportOperation {
    unsigned int _totalSyncPackageCount;
    unsigned int _syncPackageNum;
    BOOL _syncSessionStarted;
    int _syncType;
    ML3DatabaseConnection *_connection;
    BOOL _isServerImport;
    long long _readSourceState;
    BOOL _isReadSourceCancelled;
    BOOL _importFinished;
    NSMutableSet *_syncIdsToUnlink;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_source> *_readSource;
}

- (void)main;
- (void)cancel;
- (void).cxx_destruct;
- (unsigned long long)importSource;
- (BOOL)_performImportWithTransaction:(id)a0;
- (BOOL)_processMediaItemOperation:(id)a0 withImportSession:(void *)a1;
- (BOOL)_processPlaylistOperation:(id)a0 withImportSession:(void *)a1;
- (BOOL)_processSyncError:(id)a0;
- (BOOL)_processSyncHeader:(id)a0;
- (BOOL)_processSyncOperation:(id)a0 withImportSession:(void *)a1;
- (BOOL)_processSyncPackage:(id)a0 withImportSession:(void *)a1;
- (void)_unlinkUnavailableMediaItems;
- (id)initWithDatabaseImport:(id)a0;

@end
