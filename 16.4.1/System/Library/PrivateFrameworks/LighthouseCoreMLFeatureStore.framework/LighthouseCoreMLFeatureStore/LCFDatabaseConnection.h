@class NSURL, NSString;

@interface LCFDatabaseConnection : NSObject

@property (readonly, nonatomic) NSURL *databaseBaseURL;
@property (readonly, nonatomic) NSString *databaseName;
@property (readonly, nonatomic) NSString *databaseNamePath;
@property (readonly, nonatomic) NSString *tableName;

- (id)getColumns;
- (BOOL)addColumn:(id)a0;
- (void).cxx_destruct;
- (BOOL)doQueryEachStep:(id)a0 statementStepHandler:(id /* block */)a1;
- (BOOL)doQueryExec:(id)a0;
- (void)dumpDatabase;
- (void)ensureDatabaseTable;
- (id)init:(id)a0 databaseName:(id)a1 tableName:(id)a2;
- (id)query:(id)a0 startTime:(id)a1 endTime:(id)a2 reversed:(BOOL)a3;
- (BOOL)writeFeatures:(id)a0;

@end
