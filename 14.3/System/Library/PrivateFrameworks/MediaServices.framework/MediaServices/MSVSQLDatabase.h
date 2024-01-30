@class NSString;

@interface MSVSQLDatabase : NSObject <MSVSQLExecutable> {
    struct sqlite3 { } *_databaseHandle;
    NSString *_databasePath;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)statementWithString:(id)a0 error:(id *)a1;
- (id)resultsForStatement:(id)a0;
- (id)initWithMemory;
- (void)dealloc;
- (id)executeSQL:(id)a0;
- (BOOL)executeStatement:(id)a0 error:(id *)a1;
- (id)transactionWithName:(id)a0;
- (id)initWithURL:(id)a0 error:(id *)a1;

@end
