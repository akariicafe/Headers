@class NSSQLEntity, NSString, NSArray;

@interface NSSQLSelectIntermediate : NSSQLIntermediate {
    NSSQLEntity *_entity;
    NSString *_entityAlias;
    NSString *_correlationTarget;
    NSArray *_fetchColumns;
    BOOL _useDistinct;
    NSString *_columnAlias;
    BOOL _isCount;
}

- (void)setFetchColumns:(id)a0;
- (id)resolveVariableExpression:(id)a0 inContext:(id)a1;
- (void)setFetchEntity:(id)a0;
- (void)dealloc;
- (void)setUseDistinct:(BOOL)a0;
- (id)generateSQLStringInContext:(id)a0;
- (id)initForCorrelationTarget:(id)a0 alias:(id)a1 fetchColumns:(id)a2 inScope:(id)a3;
- (BOOL)onlyFetchesAggregates;
- (void)setIsCount:(BOOL)a0;
- (void)setColumnAlias:(id)a0;
- (id)initWithEntity:(id)a0 alias:(id)a1 fetchColumns:(id)a2 inScope:(id)a3;
- (BOOL)isTargetColumnsScoped;

@end
