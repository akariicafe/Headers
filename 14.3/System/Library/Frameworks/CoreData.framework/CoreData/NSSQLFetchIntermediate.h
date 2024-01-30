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

- (void)addJoinIntermediate:(id)a0 atKeypathWithComponents:(id)a1;
- (void)setHavingIntermediate:(id)a0;
- (void)setGroupByIntermediate:(id)a0;
- (id)fetchIntermediateForKeypathExpression:(id)a0;
- (id)selectIntermediate;
- (void)dealloc;
- (id)generateSQLStringInContext:(id)a0;
- (void)promoteToOuterJoinAtKeypathWithComponents:(id)a0;
- (id)_generateJoinSQLStringInContext:(id)a0;
- (void)addGroupByKeypath:(id)a0;
- (BOOL)isFunctionScoped;
- (id)groupByIntermediate;
- (id)initWithScope:(id)a0;
- (void)setOffsetIntermediate:(id)a0;
- (id)fetchIntermediate;
- (id)finalJoinForKeypathWithComponents:(id)a0;
- (id)havingIntermediate;
- (id)joinIntermediates;
- (void)setSelectIntermediate:(id)a0;
- (BOOL)isDictionaryCountFetch;
- (void)selectDistinct;
- (void)setDictionaryCountFetch:(BOOL)a0;
- (BOOL)groupByClauseContainsKeypath:(id)a0;
- (void)promoteToOuterJoinsAlongKeypathWithComponents:(id)a0;

@end
