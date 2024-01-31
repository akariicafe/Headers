@class NSSQLFetchIntermediate;

@interface NSSQLFetchDictionaryCountIntermediate : NSSQLStatementIntermediate {
    NSSQLFetchIntermediate *_realFetch;
}

- (void)dealloc;
- (id)generateSQLStringInContext:(id)a0;
- (id)initWithFetchIntermediate:(id)a0 inScope:(id)a1;

@end
