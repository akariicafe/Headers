@class NSMutableDictionary;

@interface NSSQLReadOnlySelectIntermediate : NSSQLSelectIntermediate {
    BOOL _onlyFetchesAggregates;
    NSMutableDictionary *_variableToAliasMappings;
    NSMutableDictionary *_propertyToAliasMappings;
}

- (id)resolveVariableExpression:(id)a0 inContext:(id)a1;
- (void)dealloc;
- (id)generateSQLStringInContext:(id)a0;
- (BOOL)onlyFetchesAggregates;
- (id)initWithScope:(id)a0;

@end
