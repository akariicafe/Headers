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

- (id)initWithEntity:(id)a0 alias:(id)a1 fetchColumns:(id)a2 inScope:(id)a3;
- (BOOL)onlyFetchesAggregates;
- (id)resolveVariableExpression:(id)a0 inContext:(id)a1;
- (void)dealloc;
- (id)generateSQLStringInContext:(id)a0;
- (BOOL)isTargetColumnsScoped;
- (id)initForCorrelationTarget:(id)a0 alias:(id)a1 fetchColumns:(id)a2 inScope:(id)a3;

@end
