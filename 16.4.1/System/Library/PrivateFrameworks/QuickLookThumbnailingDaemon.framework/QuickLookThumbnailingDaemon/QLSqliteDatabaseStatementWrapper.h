@class NSString, NSMapTable;

@interface QLSqliteDatabaseStatementWrapper : NSObject {
    NSMapTable *_inUseTable;
}

@property (copy, nonatomic) NSString *key;
@property (nonatomic, getter=isInUse) BOOL inUse;
@property (nonatomic) struct sqlite3_stmt { } *stmt;

- (id)initWithStatement:(struct sqlite3_stmt { } *)a0 key:(id)a1 inUseTable:(id)a2;
- (void)dealloc;
- (void).cxx_destruct;

@end
