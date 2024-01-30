@class NSString, NSMutableArray, ACCSQLite;

@interface ACCSQLiteStatement : NSObject

@property (retain, nonatomic) NSMutableArray *temporaryBoundObjects;
@property (readonly, weak, nonatomic) ACCSQLite *SQLite;
@property (readonly, nonatomic) NSString *SQL;
@property (readonly, nonatomic) struct sqlite3_stmt { } *handle;
@property (nonatomic, getter=isReset) BOOL reset;

- (unsigned long long)columnCount;
- (double)doubleAtIndex:(unsigned long long)a0;
- (BOOL)step;
- (void)bindInt64:(long long)a0 atIndex:(unsigned long long)a1;
- (id)retainedTemporaryBoundObject:(id)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)textAtIndex:(unsigned long long)a0;
- (void)finalizeStatement;
- (int)columnTypeAtIndex:(unsigned long long)a0;
- (id)allObjectsByColumnName;
- (id)blobAtIndex:(unsigned long long)a0;
- (long long)int64AtIndex:(unsigned long long)a0;
- (void)bindValue:(id)a0 atIndex:(unsigned long long)a1;
- (int)intAtIndex:(unsigned long long)a0;
- (id)allObjects;
- (void)bindDouble:(double)a0 atIndex:(unsigned long long)a1;
- (id)columnNameAtIndex:(unsigned long long)a0;
- (void)bindText:(id)a0 atIndex:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)bindValues:(id)a0;
- (void)resetAfterStepError;
- (void)bindNullAtIndex:(unsigned long long)a0;
- (void)reset;
- (void)bindInt:(int)a0 atIndex:(unsigned long long)a1;
- (id)initWithSQLite:(id)a0 SQL:(id)a1 handle:(struct sqlite3_stmt { } *)a2;
- (void)bindBlob:(id)a0 atIndex:(unsigned long long)a1;

@end
