@class CKSQLiteStatement;

@interface CKSQLiteStatementEnumerator : NSEnumerator

@property (retain, nonatomic) CKSQLiteStatement *statement;
@property (copy, nonatomic) id /* block */ block;
@property (nonatomic) BOOL closed;

- (void)close;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithStatement:(id)a0 block:(id /* block */)a1;
- (id)nextObject;

@end
