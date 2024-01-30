@class NSSQLFetchIntermediate;

@interface NSSQLFetchDictionaryCountIntermediate : NSSQLStatementIntermediate {
    NSSQLFetchIntermediate *_realFetch;
}

- (id)initWithFetchIntermediate:(id)a0 inScope:(id)a1;
- (id)generateSQLStringInContext:(id)a0;
- (void)dealloc;

@end
