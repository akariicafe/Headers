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

- (void)dealloc;
- (BOOL)onlyFetchesAggregates;
- (id)initForCorrelationTarget:(id)a0 alias:(id)a1 fetchColumns:(id)a2 inScope:(id)a3;
- (id)generateSQLStringInContext:(id)a0;
- (id)resolveVariableExpression:(id)a0 inContext:(id)a1;
- (id)initWithEntity:(id)a0 alias:(id)a1 fetchColumns:(id)a2 inScope:(id)a3;
- (BOOL)isTargetColumnsScoped;

@end
