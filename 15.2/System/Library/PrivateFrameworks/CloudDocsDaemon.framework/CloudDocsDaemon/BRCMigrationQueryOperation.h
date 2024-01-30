@class NSString, CKQueryCursor, NSMutableArray;

@interface BRCMigrationQueryOperation : BRCSyncDownOperation {
    NSString *_migrationKey;
    CKQueryCursor *_continuationCursor;
    NSMutableArray *_shareIDsToFetch;
}

+ (id)folderSharesMigrationKey;
+ (id)folderShareAliasesMigrationKey;
+ (id)documentSharesMigrationKey;
+ (id)allMigrationKeysOrdered;

- (void)finishWithResult:(id)a0 error:(id)a1;
- (void)main;
- (void).cxx_destruct;
- (BOOL)shouldRetryForError:(id)a0;
- (id)initWithServerZone:(id)a0 migrationKey:(id)a1 continuationCursor:(id)a2;
- (BOOL)_saveFetchedRecords:(id)a0 cursor:(id)a1 error:(id *)a2;
- (void)_performQuery:(id)a0 recordFetchedBlock:(id /* block */)a1 cursorUpdatedBlock:(id /* block */)a2 desiredKeys:(id)a3 completion:(id /* block */)a4;
- (BOOL)_updatedContinuationCursor:(id)a0 fetchedRecords:(id)a1 error:(id *)a2;
- (void)_performAfterQueryingForShareIDsOfFolders:(BOOL)a0 completion:(id /* block */)a1;
- (void)_performAfterQueryingForShareAliasesWithCompletion:(id /* block */)a0;

@end
