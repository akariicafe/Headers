@class NSSQLEntity, NSString, NSSQLWhereIntermediate, NSSQLOrderIntermediate, NSSQLLimitIntermediate;

@interface NSSQLStatementIntermediate : NSSQLIntermediate {
    NSSQLEntity *_governingEntity;
    NSString *_governingAlias;
    NSString *_correlationToken;
    NSSQLWhereIntermediate *_whereClause;
    NSSQLLimitIntermediate *_limitClause;
    NSSQLOrderIntermediate *_orderIntermediate;
}

- (void)setGoverningAlias:(id)a0;
- (id)whereIntermediate;
- (id)initWithEntity:(id)a0 alias:(id)a1 inScope:(id)a2;
- (id)governingEntity;
- (BOOL)keypathExpressionIsSafeLHSForIn:(id)a0;
- (void)dealloc;
- (id)correlationToken;
- (void)setLimitIntermediate:(id)a0;
- (void)setWhereIntermediate:(id)a0;
- (id)orderIntermediate;
- (void)setOrderIntermediate:(id)a0;
- (void)setGoverningEntity:(id)a0;
- (id)governingAliasForKeypathExpression:(id)a0;
- (id)governingEntityForKeypathExpression:(id)a0;
- (id)governingAlias;
- (id)limitIntermediate;
- (void)setCorrelationToken:(id)a0;

@end
