@class NSString;

@interface EFSQLPreparedStatement : NSObject {
    struct sqlite3_stmt { } *_compiled;
}

@property (readonly, nonatomic) BOOL isFinalized;
@property (readonly, copy, nonatomic) NSString *originalString;
@property (readonly, nonatomic) struct sqlite3_stmt { } *compiled;
@property (nonatomic) double allowedExecutionTime;

+ (id)log;

- (id)initWithString:(id)a0 connection:(id)a1;
- (BOOL)executeWithIndexedBindings:(id)a0 usingBlock:(id /* block */)a1 error:(id *)a2;
- (BOOL)executeWithNamedBindings:(id)a0 rowsChanged:(unsigned long long *)a1 error:(id *)a2;
- (BOOL)resetWithError:(id *)a0;
- (BOOL)executeUsingBlock:(id /* block */)a0 error:(id *)a1;
- (BOOL)finalizeWithError:(id *)a0;
- (id)debugDescription;
- (void)dealloc;
- (BOOL)clearBindingsWithError:(id *)a0;
- (BOOL)executeWithNamedBindings:(id)a0 usingBlock:(id /* block */)a1 error:(id *)a2;

@end
