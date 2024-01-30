@class NSString, NSMutableDictionary, PLSQLiteRecorder, NSObject, PLPhotoLibraryBundleController;
@protocol OS_dispatch_io, OS_dispatch_queue;

@interface PLSQLStatementFileRecorder : NSObject <PLSearchIndexManagerDatabaseConnectionDelegate> {
    NSMutableDictionary *_observationCountByNormalizedStatementSQL;
    NSMutableDictionary *_observationCountByBacktraceHash;
    NSMutableDictionary *_isMutedByBacktraceHash;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observationsLock;
    NSString *_backtraceFilter;
    NSObject<OS_dispatch_io> *_file;
    NSObject<OS_dispatch_queue> *_writingQueue;
    PLSQLiteRecorder *_splSearchDbRecorder;
    PLPhotoLibraryBundleController *_bundleController;
}

+ (void)_writeRecordingPostambleUsingQueue:(id)a0 toFile:(id)a1;
+ (void)_writeStatements:(id)a0 toFile:(id)a1 usingQueue:(id)a2;
+ (id)_daemonSearchIndexManagerFromBundleController:(id)a0;
+ (id)_chooseFileURLFromFileURL:(id)a0;
+ (unsigned long long)_callStackHash;

- (BOOL)_decorateStatement:(id)a0;
- (BOOL)stopRecording;
- (id)initWithBundleController:(id)a0;
- (void)_reconsiderRecordingState;
- (void)_installSignalHandler;
- (void)didCreateConnection:(struct sqlite3 { } *)a0;
- (void).cxx_destruct;
- (BOOL)startRecordingToFileURL:(id)a0 withTag:(id)a1;
- (void)willTeardownConnection:(struct sqlite3 { } *)a0;

@end
