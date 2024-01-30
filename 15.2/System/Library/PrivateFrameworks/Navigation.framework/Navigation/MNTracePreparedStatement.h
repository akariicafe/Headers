@interface MNTracePreparedStatement : NSObject {
    struct sqlite3 { } *_db;
    struct sqlite3_stmt { } *_preparedStatement;
}

+ (id)preparedStatementForTrace:(id)a0 statement:(id)a1 outError:(out id *)a2;

- (BOOL)execute;
- (BOOL)step;
- (BOOL)clearBindings;
- (void)finalize;
- (id)init;
- (BOOL)stepRow;
- (void)dealloc;
- (BOOL)reset;
- (id)debugDescription;
- (void)bind:(unsigned long long)a0 string:(id)a1;
- (void)bind:(unsigned long long)a0 double:(double)a1;
- (void)bind:(unsigned long long)a0 int:(int)a1;
- (void)bind:(unsigned long long)a0 data:(id)a1;
- (void)bindNull:(unsigned long long)a0;
- (BOOL)_prepareStatementForTrace:(id)a0 statement:(id)a1 outError:(out id *)a2;
- (id)initForTrace:(id)a0 statement:(id)a1 outError:(out id *)a2;
- (int)columnInt:(unsigned long long)a0;
- (double)columnDouble:(unsigned long long)a0;
- (id)columnString:(unsigned long long)a0;
- (id)columnData:(unsigned long long)a0;

@end
