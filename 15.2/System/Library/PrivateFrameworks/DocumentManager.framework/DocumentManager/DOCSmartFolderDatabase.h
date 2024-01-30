@class NSURL, PQLConnection, NSObject, RBSAssertion;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface DOCSmartFolderDatabase : NSObject

@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) PQLConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *watcher;
@property (retain, nonatomic) RBSAssertion *processAssertion;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workingQueue;

- (void)close;
- (id)initWithURL:(id)a0;
- (void)open;
- (void).cxx_destruct;
- (id)init;
- (void)registerEvent:(id)a0;
- (void)_closeDatabaseOnItsQueue:(id)a0;
- (void)_cleanUpAfterClose;
- (void)_resetDatabaseOnItsQueue:(id)a0;
- (void)logError:(id)a0 onDB:(id)a1 statement:(id)a2;
- (id)_createDatabaseIfNeededAtURL:(id)a0 error:(id *)a1;
- (id)_setupDatabaseTablesIfNeeded:(id)a0 error:(id *)a1;
- (id)_existingFileNameHitsSimilarToHit:(id)a0;
- (void)_registerHit:(id)a0;
- (id)_existingFiletypeHitSimilarToHit:(id)a0;
- (void)_registerSavingFile:(id)a0 inFolder:(id)a1 atDate:(id)a2 withFrecencyScore:(double)a3 rowId:(id)a4;
- (void)_registerSavingFileType:(id)a0 inFolder:(id)a1 atDate:(id)a2 withFrecencyScore:(double)a3 rowId:(id)a4;
- (id)_existingEventSimilarToEvent:(id)a0;
- (id)_openConnectionToDatabaseAtURL:(id)a0;
- (void)_setUpDatabaseWatcher:(id)a0;
- (void)registerFilenameHit:(id)a0 fileTypeHit:(id)a1 smartScoreBlock:(id /* block */)a2;
- (id)previousHits;
- (id)previousEventsForAppBundleIdentifier:(id)a0 excluding:(id)a1;
- (void)deleteFolderWithIdentifier:(id)a0 appBundleIdentifier:(id)a1;

@end
