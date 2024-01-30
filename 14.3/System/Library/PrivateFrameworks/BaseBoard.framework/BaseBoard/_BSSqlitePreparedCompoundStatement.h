@class NSArray;

@interface _BSSqlitePreparedCompoundStatement : BSSqlitePreparedStatement {
    NSArray *_statements;
}

- (BOOL)executeWithBindings:(id)a0 resultRowHandler:(id /* block */)a1 error:(out id *)a2;
- (void).cxx_destruct;

@end
