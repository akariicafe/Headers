@class NSSQLEntity, NSExpression, NSSQLFetchIntermediate, NSMutableString, NSString, NSSQLColumn, NSMutableArray;

@interface NSSQLSubqueryExpressionIntermediate : NSSQLExpressionIntermediate {
    NSExpression *_trailingKeypath;
    NSExpression *_variableExpression;
    NSSQLFetchIntermediate *_fetchIntermediate;
    NSSQLEntity *_selectFromEntity;
    NSMutableString *_selectFromCorrelationTarget;
    NSString *_selectEntityAlias;
    NSSQLEntity *_governingEntityForVariable;
    NSSQLColumn *_variableColumn;
    NSString *_variableAlias;
    NSSQLColumn *_targetColumn;
    NSString *_targetAlias;
    NSMutableArray *_keypathsToPromote;
    BOOL _useDistinct;
    BOOL _isCount;
    BOOL _hasTrailingFunction;
    BOOL _onlyTrailIsCount;
    BOOL _subqueryHasTruePredicate;
}

- (id)_generateSQLForVariableExpression:(id)a0 allowToMany:(BOOL)a1 inContext:(id)a2;
- (void)_promoteJoinsForSubqueryScopedKeypath:(id)a0;
- (id)governingEntityForKeypathExpression:(id)a0;
- (id)initWithExpression:(id)a0 trailingKeypath:(id)a1 inScope:(id)a2;
- (BOOL)keypathExpressionIsSafeLHSForIn:(id)a0;
- (id)fetchIntermediateForKeypathExpression:(id)a0;
- (id)governingAliasForKeypathExpression:(id)a0;
- (void)_promoteJoinsForSubqueryScopedKeypaths;
- (id)generateSQLStringInContext:(id)a0;
- (void)dealloc;

@end
