@class NSSQLGroupByIntermediate, NSMutableArray, NSMutableDictionary, NSSQLSelectIntermediate, NSSQLHavingIntermediate, NSSQLOffsetIntermediate;

@interface NSSQLFetchIntermediate : NSSQLStatementIntermediate {
    NSSQLSelectIntermediate *_selectClause;
    NSSQLGroupByIntermediate *_groupByClause;
    NSSQLHavingIntermediate *_havingClause;
    NSSQLOffsetIntermediate *_offsetClause;
    NSMutableArray *_groupByKeypaths;
    BOOL _isDictionaryCountFetch;
    NSMutableArray *_joinIntermediates;
    NSMutableDictionary *_joinKeypaths;
}

- (id)initWithScope:(id)a0;
- (id)fetchIntermediate;
- (BOOL)isFunctionScoped;
- (id)fetchIntermediateForKeypathExpression:(id)a0;
- (id)generateSQLStringInContext:(id)a0;
- (void)dealloc;
- (id)selectIntermediate;

@end
