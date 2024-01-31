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

- (void)dealloc;
- (id)initWithScope:(id)a0;
- (id)generateSQLStringInContext:(id)a0;
- (id)fetchIntermediate;
- (id)selectIntermediate;
- (id)fetchIntermediateForKeypathExpression:(id)a0;
- (BOOL)isFunctionScoped;

@end
