@class NSSQLEntity, NSArray;

@interface NSSQLIntermediate : NSObject {
    NSSQLIntermediate *_scope;
}

@property (readonly, nonatomic) NSSQLEntity *disambiguatingEntity;
@property (readonly, nonatomic) NSArray *disambiguationKeypath;
@property (readonly, nonatomic) BOOL disambiguationKeypathHasToMany;

+ (BOOL)expressionIsBasicKeypath:(id)a0;
+ (BOOL)isSimpleKeypath:(id)a0;

- (id)_generateSQLForKeyPathExpression:(id)a0 allowToMany:(BOOL)a1 inContext:(id)a2;
- (BOOL)isWhereScoped;
- (BOOL)isUpdateScoped;
- (id)initWithScope:(id)a0;
- (id)governingAliasForKeypathExpression:(id)a0;
- (void)_promoteJoinsForSubqueryScopedKeypath:(id)a0;
- (id)generateSQLStringInContext:(id)a0;
- (id)_lastScopedItem;
- (BOOL)isUpdateColumnsScoped;
- (void)setDisambiguatingEntity:(id)a0 withKeypath:(id)a1 hasToMany:(BOOL)a2;
- (id)fetchIntermediate;
- (id)governingEntity;
- (id)governingAlias;
- (BOOL)isOrScoped;
- (id)fetchIntermediateForKeypathExpression:(id)a0;
- (id)governingEntityForKeypathExpression:(id)a0;
- (id)_generateSQLForVariableExpression:(id)a0 allowToMany:(BOOL)a1 inContext:(id)a2;
- (BOOL)isTargetColumnsScoped;
- (BOOL)keypathExpressionIsSafeLHSForIn:(id)a0;
- (void)_promoteJoinsForSubqueryScopedKeypaths;
- (BOOL)isFunctionScoped;
- (BOOL)isHavingScoped;
- (BOOL)isIndexExpressionScoped;
- (BOOL)isIndexScoped;

@end
