@class NSString, NSMutableDictionary, PLSQLiteRecorder, NSObject, PLPhotoLibraryBundleController;
@protocol OS_dispatch_io, OS_dispatch_queue;

@interface PLSQLStatementFileRecorder : NSObject <PLSearchIndexManagerDatabaseConnectionDelegate> {
    NSMutableDictionary *_observationCountByNormalizedStatementSQL;
    NSMutableDictionary *_observationCountByBacktraceHash;
    NSMutableDictionary *_isMutedByBacktraceHash;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observationsLock;
    NSString *_backtraceFilter;
    NSString *_mocNameFilter;
    NSObject<OS_dispatch_io> *_file;
    NSObject<OS_dispatch_queue> *_writingQueue;
    PLSQLiteRecorder *_splSearchDbRecorder;
    PLPhotoLibraryBundleController *_bundleController;
    _Atomic int _pageCount;
}

+ (unsigned long long)_callStackHash;
+ (id)_chooseFileURLFromFileURL:(id)a0;
+ (id)_daemonSearchIndexManagerFromBundleController:(id)a0;
+ (void)_writeRecordingPostambleUsingQueue:(id)a0 toFile:(id)a1;
+ (void)_writeStatements:(id)a0 toFile:(id)a1 usingQueue:(id)a2 totalPages:(int *)a3;

- (BOOL)stopRecordingWithSummary:(long long *)a0;
- (BOOL)startRecordingToFileURL:(id)a0 withTag:(id)a1;
- (void)_reconsiderRecordingState;
- (void)_installSignalHandler;
- (id)initWithBundleController:(id)a0;
- (void)didCreateConnection:(struct sqlite3 { } *)a0;
- (BOOL)_decorateStatement:(id)a0;
- (void).cxx_destruct;
- (void)willTeardownConnection:(struct sqlite3 { } *)a0;

@end
