@class NSString, NSMutableArray, ACCSQLite;

@interface ACCSQLiteStatement : NSObject

@property (retain, nonatomic) NSMutableArray *temporaryBoundObjects;
@property (readonly, weak, nonatomic) ACCSQLite *SQLite;
@property (readonly, nonatomic) NSString *SQL;
@property (readonly, nonatomic) struct sqlite3_stmt { } *handle;
@property (nonatomic, getter=isReset) BOOL reset;

- (unsigned long long)columnCount;
- (void)bindBlob:(id)a0 atIndex:(unsigned long long)a1;
- (void)bindValues:(id)a0;
- (BOOL)step;
- (id)textAtIndex:(unsigned long long)a0;
- (void)bindDouble:(double)a0 atIndex:(unsigned long long)a1;
- (id)allObjectsByColumnName;
- (int)intAtIndex:(unsigned long long)a0;
- (void)resetAfterStepError;
- (long long)int64AtIndex:(unsigned long long)a0;
- (void)bindValue:(id)a0 atIndex:(unsigned long long)a1;
- (void)bindNullAtIndex:(unsigned long long)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)allObjects;
- (id)retainedTemporaryBoundObject:(id)a0;
- (id)columnNameAtIndex:(unsigned long long)a0;
- (id)blobAtIndex:(unsigned long long)a0;
- (double)doubleAtIndex:(unsigned long long)a0;
- (void)bindInt64:(long long)a0 atIndex:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)bindText:(id)a0 atIndex:(unsigned long long)a1;
- (int)columnTypeAtIndex:(unsigned long long)a0;
- (id)initWithSQLite:(id)a0 SQL:(id)a1 handle:(struct sqlite3_stmt { } *)a2;
- (void)reset;
- (void)bindInt:(int)a0 atIndex:(unsigned long long)a1;
- (void)finalizeStatement;

@end
