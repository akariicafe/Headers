@class NSSQLEntity, NSArray;

@interface NSSQLIntermediate : NSObject {
    NSSQLIntermediate *_scope;
}

@property (readonly, nonatomic) NSSQLEntity *disambiguatingEntity;
@property (readonly, nonatomic) NSArray *disambiguationKeypath;
@property (readonly, nonatomic) BOOL disambiguationKeypathHasToMany;

+ (BOOL)isSimpleKeypath:(id)a0;
+ (BOOL)expressionIsBasicKeypath:(id)a0;

- (id)scope;
- (id)governingEntity;
- (id)_generateSQLForExpression:(id)a0 allowToMany:(BOOL)a1 inContext:(id)a2;
- (BOOL)keypathExpressionIsSafeLHSForIn:(id)a0;
- (id)fetchIntermediateForKeypathExpression:(id)a0;
- (BOOL)isSimpleKeypath:(id)a0;
- (id)_generateSQLForConstantValue:(id)a0 inContext:(id)a1;
- (BOOL)isVariableBasedKeypathScopedBySubquery:(id)a0;
- (BOOL)isIndexScoped;
- (id)_generateSQLForSubqueryExpression:(id)a0 trailingKeypath:(id)a1 inContext:(id)a2;
- (BOOL)isHavingScoped;
- (BOOL)_functionExpressionIsSubqueryFollowedByKeypath:(id)a0;
- (BOOL)isIndexExpressionScoped;
- (BOOL)expressionIsBasicKeypath:(id)a0;
- (id)_entitySpecificationKeypath;
- (void)_setEntitySpecificationKeypath:(id)a0;
- (void)promoteJoinsInKeypathsForExpression:(id)a0;
- (void)_promoteJoinsForKeypathExpression:(id)a0;
- (BOOL)isSimpleNoIndexFunction:(id)a0;
- (void)_promoteJoinsForFunctionExpression:(id)a0;
- (void)_promoteJoinsForAggregateExpression:(id)a0;
- (void)_promoteJoinsForTernaryExpression:(id)a0;
- (id)_generateSQLForConstantCollection:(id)a0 reboundFrom:(id)a1 inContext:(id)a2;
- (BOOL)_canDoASubselectForExpression:(id)a0 inContext:(id)a1;
- (id)_generateSQLForFetchExpression:(id)a0 allowToMany:(BOOL)a1 inContext:(id)a2;
- (id)_generateSQLForFunctionExpression:(id)a0 allowToMany:(BOOL)a1 inContext:(id)a2;
- (id)_generateSQLForExpressionCollection:(id)a0 allowToMany:(BOOL)a1 inContext:(id)a2;
- (id)_generateSQLForTernaryExpression:(id)a0 allowToMany:(BOOL)a1 inContext:(id)a2;
- (id)generateSQLStringInContext:(id)a0;
- (id)_generateSQLForVariableExpression:(id)a0 allowToMany:(BOOL)a1 inContext:(id)a2;
- (BOOL)isFunctionScoped;
- (id)initWithScope:(id)a0;
- (BOOL)isOrScoped;
- (void)setDisambiguatingEntity:(id)a0 withKeypath:(id)a1 hasToMany:(BOOL)a2;
- (id)fetchIntermediate;
- (id)_generateSQLForKeyPathExpression:(id)a0 allowToMany:(BOOL)a1 inContext:(id)a2;
- (id)governingAliasForKeypathExpression:(id)a0;
- (void)_promoteJoinsForSubqueryScopedKeypath:(id)a0;
- (BOOL)isUpdateScoped;
- (void)_promoteJoinsForSubqueryScopedKeypaths;
- (BOOL)isUpdateColumnsScoped;
- (id)_lastScopedItem;
- (BOOL)isWhereScoped;
- (id)governingEntityForKeypathExpression:(id)a0;
- (BOOL)isTargetColumnsScoped;
- (id)governingAlias;

@end
