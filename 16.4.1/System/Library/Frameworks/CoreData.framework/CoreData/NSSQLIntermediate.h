@class NSSQLEntity, NSArray;

@interface NSSQLIntermediate : NSObject {
    NSSQLIntermediate *_scope;
}

@property (readonly, nonatomic) NSSQLEntity *disambiguatingEntity;
@property (readonly, nonatomic) NSArray *disambiguationKeypath;
@property (readonly, nonatomic) BOOL disambiguationKeypathHasToMany;

+ (BOOL)expressionIsBasicKeypath:(id)a0;
+ (BOOL)isSimpleKeypath:(id)a0;

- (BOOL)isUpdateScoped;
- (BOOL)isWhereScoped;
- (id)_generateSQLForKeyPathExpression:(id)a0 allowToMany:(BOOL)a1 inContext:(id)a2;
- (BOOL)isOrScoped;
- (id)governingAliasForKeypathExpression:(id)a0;
- (id)_lastScopedItem;
- (BOOL)isFunctionScoped;
- (id)fetchIntermediateForKeypathExpression:(id)a0;
- (id)_generateSQLForVariableExpression:(id)a0 allowToMany:(BOOL)a1 inContext:(id)a2;
- (id)governingAlias;
- (id)governingEntityForKeypathExpression:(id)a0;
- (id)generateSQLStringInContext:(id)a0;
- (BOOL)isTargetColumnsScoped;
- (void)_promoteJoinsForSubqueryScopedKeypath:(id)a0;
- (id)governingEntity;
- (void)setDisambiguatingEntity:(id)a0 withKeypath:(id)a1 hasToMany:(BOOL)a2;
- (id)initWithScope:(id)a0;
- (id)fetchIntermediate;
- (BOOL)isUpdateColumnsScoped;
- (void)_promoteJoinsForSubqueryScopedKeypaths;
- (BOOL)keypathExpressionIsSafeLHSForIn:(id)a0;
- (BOOL)isHavingScoped;
- (BOOL)isIndexExpressionScoped;
- (BOOL)isIndexScoped;

@end
