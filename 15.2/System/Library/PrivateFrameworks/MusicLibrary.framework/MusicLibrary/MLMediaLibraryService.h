@class NSString, NSXPCConnection, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, MLMediaLibraryServiceProtocol;

@interface MLMediaLibraryService : NSObject <MLMediaLibraryServiceClientProtocol> {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_replyQueue;
    NSXPCConnection *_serviceConnection;
    id<MLMediaLibraryServiceProtocol> _serviceProxy;
    NSMutableDictionary *_progressBlocksByUUID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_setDaemonProcessInfo:(id)a0;
+ (id)sharedMediaLibraryService;

- (void)performImport:(id)a0 fromSource:(unsigned long long)a1 withProgressBlock:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)updateSpotlightIndexMetadataForItemsWithIdentifiers:(id)a0 bundleID:(id)a1 withCompletion:(id /* block */)a2;
- (void)performDiagnosticWithCompletionHandler:(id /* block */)a0;
- (BOOL)validateDatabaseAtPath:(id)a0 error:(id *)a1;
- (id)_serviceConnection;
- (void)executeQuery:(id)a0 withParameters:(id)a1 options:(id)a2 onTransaction:(id)a3 withCompletionHandler:(id /* block */)a4;
- (void)setOptions:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)mediaLibraryResourcesServiceListenerEndpointWithError:(id *)a0;
- (id)clientImportServiceListenerEndpointWithError:(id *)a0;
- (void)attemptDatabaseFileRecoveryAtPath:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)recreateDatabaseAtPath:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)lockDatabaseForReason:(long long)a0 withCompletion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)executeUpdate:(id)a0 withParameters:(id)a1 onTransaction:(id)a2 withCompletionHandler:(id /* block */)a3;
- (void)checkIntegrityOfDatabaseAtPath:(id)a0 repairFaults:(BOOL)a1 withCompletionHandler:(id /* block */)a2;
- (void)serviceTerminatedTransactionWithIdentifier:(id)a0 error:(id)a1;
- (void)importOperationWithIdentifier:(id)a0 didUpdateWithProgress:(float)a1;
- (void)updateSpotlightIndexForBundleID:(id)a0 withCompletion:(id /* block */)a1;
- (void)unlockDatabaseWithCompletion:(id /* block */)a0;
- (void)endTransaction:(id)a0 shouldCommit:(BOOL)a1 withCompletionHandler:(id /* block */)a2;
- (void)dealloc;
- (void)cancelImportOperation:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)getLanguageResourcesWithCompletion:(id /* block */)a0;
- (void)performMaintenanceTasksForDatabaseAtPath:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)performDatabaseOperation:(unsigned long long)a0 withAttributes:(id)a1 options:(id)a2 completionHandler:(id /* block */)a3;
- (void)beginTransactionForDatabaseWithContext:(id)a0 completionHandler:(id /* block */)a1;

@end
