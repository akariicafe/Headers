@class NSMutableDictionary;

@interface NSSQLReadOnlySelectIntermediate : NSSQLSelectIntermediate {
    BOOL _onlyFetchesAggregates;
    NSMutableDictionary *_variableToAliasMappings;
    NSMutableDictionary *_propertyToAliasMappings;
}

- (BOOL)onlyFetchesAggregates;
- (id)resolveVariableExpression:(id)a0 inContext:(id)a1;
- (void)dealloc;
- (id)generateSQLStringInContext:(id)a0;
- (id)initWithScope:(id)a0;

@end
