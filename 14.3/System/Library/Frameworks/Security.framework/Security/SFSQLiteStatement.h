@class SFSQLite, NSMutableArray, NSString;

@interface SFSQLiteStatement : NSObject

@property (retain, nonatomic) NSMutableArray *temporaryBoundObjects;
@property (readonly, weak, nonatomic) SFSQLite *SQLite;
@property (readonly, nonatomic) NSString *SQL;
@property (readonly, nonatomic) struct sqlite3_stmt { } *handle;
@property (nonatomic, getter=isReset) BOOL reset;

- (BOOL)step;
- (id)blobAtIndex:(unsigned long long)a0;
- (double)doubleAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)bindValue:(id)a0 atIndex:(unsigned long long)a1;
- (void)reset;
- (id)textAtIndex:(unsigned long long)a0;
- (void)bindNullAtIndex:(unsigned long long)a0;
- (long long)int64AtIndex:(unsigned long long)a0;
- (void)bindText:(id)a0 atIndex:(unsigned long long)a1;
- (void)bindBlob:(id)a0 atIndex:(unsigned long long)a1;
- (int)intAtIndex:(unsigned long long)a0;
- (id)allObjectsByColumnName;
- (void)bindDouble:(double)a0 atIndex:(unsigned long long)a1;
- (void)resetAfterStepError;
- (id)initWithSQLite:(id)a0 SQL:(id)a1 handle:(struct sqlite3_stmt { } *)a2;
- (void)finalizeStatement;
- (id)retainedTemporaryBoundObject:(id)a0;
- (void)bindInt:(int)a0 atIndex:(unsigned long long)a1;
- (id)columnNameAtIndex:(unsigned long long)a0;
- (id)allObjects;
- (void)bindValues:(id)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (unsigned long long)columnCount;
- (int)columnTypeAtIndex:(unsigned long long)a0;
- (void)bindInt64:(long long)a0 atIndex:(unsigned long long)a1;

@end
