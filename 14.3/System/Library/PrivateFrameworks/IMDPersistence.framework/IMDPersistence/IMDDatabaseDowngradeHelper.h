@class NSString, NSArray;

@interface IMDDatabaseDowngradeHelper : NSObject {
    BOOL _inTransaction;
}

@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSArray *tableNames;
@property (retain, nonatomic) NSArray *createIndexesSQL;
@property (retain, nonatomic) NSArray *createTablesSQL;
@property (retain, nonatomic) NSArray *createTriggersSQL;
@property (readonly, nonatomic) BOOL isOpen;
@property (readonly, nonatomic) struct sqlite3 { } *database;
@property (readonly, nonatomic) long long downgradesToVersion;

- (BOOL)close:(id /* block */)a0;
- (void)dealloc;
- (BOOL)beginTransaction:(id /* block */)a0;
- (BOOL)open:(id /* block */)a0;
- (BOOL)readDatabaseVersion:(id /* block */)a0;
- (BOOL)commitTransaction:(id /* block */)a0;
- (id)errorFromResult:(int)a0 query:(id)a1;
- (BOOL)runSimpleQuery:(id)a0 resultBlock:(id /* block */)a1;
- (BOOL)runArrayOfQueries:(id)a0 resultBlock:(id /* block */)a1;
- (BOOL)cloneTableContents:(id)a0 withOperation:(struct IMDSqlOperation { void *x0; void *x1; struct __CFString *x2; void *x3; struct IMDSqlStatement { void *x0; int x1; struct __CFString *x2; struct sqlite3 *x3; int x4; int x5; int x6; struct IMPerfMeasurement_t { struct IMFileLocation_t { char *x0; char *x1; char *x2; char *x3; int x4; } x0; unsigned long long x1; unsigned long long x2; struct __CFString *x3; double x4; double x5; double x6; } x7; } x4; struct __CFError *x5; } *)a1 resultBlock:(id /* block */)a2;
- (id)initWithPath:(id)a0 tableNames:(id)a1 createTablesSQL:(id)a2 createIndexesSQL:(id)a3 createTriggersSQL:(id)a4 downgradesToVersion:(long long)a5;
- (BOOL)createTables:(id /* block */)a0;
- (BOOL)createIndexes:(id /* block */)a0;
- (BOOL)createTriggers:(id /* block */)a0;
- (BOOL)revertTransaction:(id /* block */)a0;
- (BOOL)writeDatabaseVersion:(long long)a0 resultBlock:(id /* block */)a1;
- (BOOL)importDataFromWhitetailDatabaseWithSqlOperation:(struct IMDSqlOperation { void *x0; void *x1; struct __CFString *x2; void *x3; struct IMDSqlStatement { void *x0; int x1; struct __CFString *x2; struct sqlite3 *x3; int x4; int x5; int x6; struct IMPerfMeasurement_t { struct IMFileLocation_t { char *x0; char *x1; char *x2; char *x3; int x4; } x0; unsigned long long x1; unsigned long long x2; struct __CFString *x3; double x4; double x5; double x6; } x7; } x4; struct __CFError *x5; } *)a0 resultBlock:(id /* block */)a1;
- (BOOL)_readIntegerFromQuery:(id)a0 resultBlock:(id /* block */)a1;
- (BOOL)readRowCountForTable:(id)a0 resultBlock:(id /* block */)a1;

@end
