@class NSString, MSVSQLDatabase;

@interface MSVSQLDatabaseTransaction : NSObject <MSVSQLExecutable> {
    BOOL _invalid;
    MSVSQLDatabase *_database;
    struct sqlite3 { } *_databaseHandle;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)executeStatement:(id)a0 error:(id *)a1;
- (BOOL)rollback;
- (BOOL)commit;
- (BOOL)_releaseSavepoint:(id)a0;
- (id)resultsForStatement:(id)a0;
- (void).cxx_destruct;
- (id)createSavepoint;
- (id)statementWithString:(id)a0 error:(id *)a1;
- (void)dealloc;
- (BOOL)rollbackToSavepoint:(id)a0;

@end
