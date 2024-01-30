@class NSSQLEntity, NSArray;

@interface NSSQLIntermediate : NSObject {
    NSSQLIntermediate *_scope;
}

@property (readonly, nonatomic) NSSQLEntity *disambiguatingEntity;
@property (readonly, nonatomic) NSArray *disambiguationKeypath;
@property (readonly, nonatomic) BOOL disambiguationKeypathHasToMany;

+ (BOOL)isSimpleKeypath:(id)a0;
+ (BOOL)expressionIsBasicKeypath:(id)a0;

- (id)_generateSQLForKeyPathExpression:(id)a0 allowToMany:(BOOL)a1 inContext:(id)a2;
- (BOOL)isTargetColumnsScoped;
- (id)_generateSQLForVariableExpression:(id)a0 allowToMany:(BOOL)a1 inContext:(id)a2;
- (BOOL)isUpdateColumnsScoped;
- (BOOL)isWhereScoped;
- (void)_promoteJoinsForSubqueryScopedKeypath:(id)a0;
- (id)governingEntityForKeypathExpression:(id)a0;
- (BOOL)isOrScoped;
- (id)initWithScope:(id)a0;
- (id)fetchIntermediate;
- (BOOL)isFunctionScoped;
- (BOOL)keypathExpressionIsSafeLHSForIn:(id)a0;
- (id)fetchIntermediateForKeypathExpression:(id)a0;
- (id)_lastScopedItem;
- (id)governingAliasForKeypathExpression:(id)a0;
- (void)_promoteJoinsForSubqueryScopedKeypaths;
- (id)generateSQLStringInContext:(id)a0;
- (id)governingEntity;
- (BOOL)isUpdateScoped;
- (void)setDisambiguatingEntity:(id)a0 withKeypath:(id)a1 hasToMany:(BOOL)a2;
- (id)governingAlias;
- (BOOL)isIndexScoped;
- (BOOL)isHavingScoped;
- (BOOL)isIndexExpressionScoped;

@end
