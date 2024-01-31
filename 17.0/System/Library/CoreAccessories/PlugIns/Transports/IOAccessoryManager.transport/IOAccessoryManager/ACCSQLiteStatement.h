@class NSString, NSMutableArray, ACCSQLite;

@interface ACCSQLiteStatement : NSObject

@property (retain, nonatomic) NSMutableArray *temporaryBoundObjects;
@property (readonly, weak, nonatomic) ACCSQLite *SQLite;
@property (readonly, nonatomic) NSString *SQL;
@property (readonly, nonatomic) struct sqlite3_stmt { } *handle;
@property (nonatomic, getter=isReset) BOOL reset;

- (unsigned long long)columnCount;
- (void)bindText:(id)a0 atIndex:(unsigned long long)a1;
- (void)bindValue:(id)a0 atIndex:(unsigned long long)a1;
- (void)bindInt64:(long long)a0 atIndex:(unsigned long long)a1;
- (void)reset;
- (double)doubleAtIndex:(unsigned long long)a0;
- (void)resetAfterStepError;
- (void)bindValues:(id)a0;
- (id)textAtIndex:(unsigned long long)a0;
- (void)bindInt:(int)a0 atIndex:(unsigned long long)a1;
- (id)columnNameAtIndex:(unsigned long long)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)retainedTemporaryBoundObject:(id)a0;
- (void)bindNullAtIndex:(unsigned long long)a0;
- (long long)int64AtIndex:(unsigned long long)a0;
- (id)allObjects;
- (int)columnTypeAtIndex:(unsigned long long)a0;
- (void)bindBlob:(id)a0 atIndex:(unsigned long long)a1;
- (void)finalizeStatement;
- (id)blobAtIndex:(unsigned long long)a0;
- (void)bindDouble:(double)a0 atIndex:(unsigned long long)a1;
- (void).cxx_destruct;
- (BOOL)step;
- (id)allObjectsByColumnName;
- (int)intAtIndex:(unsigned long long)a0;
- (id)initWithSQLite:(id)a0 SQL:(id)a1 handle:(struct sqlite3_stmt { } *)a2;

@end
