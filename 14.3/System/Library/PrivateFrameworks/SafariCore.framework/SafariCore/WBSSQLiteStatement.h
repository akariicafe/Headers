@class NSArray, NSDictionary, WBSSQLiteDatabase;

@interface WBSSQLiteStatement : NSObject {
    NSDictionary *_columnNamesToIndexes;
    NSArray *_columnNames;
}

@property (readonly, nonatomic) NSArray *columnNames;
@property (readonly, nonatomic) NSDictionary *columnNamesToIndexes;
@property (readonly, nonatomic) struct sqlite3_stmt { } *handle;
@property (readonly, nonatomic) WBSSQLiteDatabase *database;

- (BOOL)execute:(id *)a0;
- (void)bindData:(id)a0 atParameterIndex:(unsigned long long)a1;
- (id)fetch;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)dealloc;
- (int)execute;
- (void)bindNullAtParameterIndex:(unsigned long long)a0;
- (void)bindInt64:(long long)a0 atParameterIndex:(unsigned long long)a1;
- (void)bindInt:(int)a0 atParameterIndex:(unsigned long long)a1;
- (id)initWithDatabase:(id)a0 query:(id)a1 error:(id *)a2;
- (void)bindString:(id)a0 atParameterIndex:(unsigned long long)a1;
- (BOOL)_isValid;
- (BOOL)fetchWithEnumerationBlock:(id /* block */)a0 error:(id *)a1;
- (id)initWithDatabase:(id)a0 query:(id)a1;
- (void)bindDouble:(double)a0 atParameterIndex:(unsigned long long)a1;
- (void)invalidate;

@end
