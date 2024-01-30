@class NSURL, NSString;

@interface MSVSQLDatabase : NSObject <MSVSQLExecutable> {
    struct sqlite3 { } *_databaseHandle;
    NSString *_databasePath;
}

@property (readonly, nonatomic) NSURL *databaseURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)executeStatement:(id)a0 error:(id *)a1;
- (id)executeSQL:(id)a0;
- (id)resultsForStatement:(id)a0;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (id)transactionWithName:(id)a0;
- (id)statementWithString:(id)a0 error:(id *)a1;
- (id)initWithMemory;
- (void)dealloc;

@end
