@class NSMutableDictionary;

@interface NSSQLReadOnlySelectIntermediate : NSSQLSelectIntermediate {
    BOOL _onlyFetchesAggregates;
    NSMutableDictionary *_variableToAliasMappings;
    NSMutableDictionary *_propertyToAliasMappings;
}

- (BOOL)onlyFetchesAggregates;
- (id)initWithScope:(id)a0;
- (id)resolveVariableExpression:(id)a0 inContext:(id)a1;
- (id)generateSQLStringInContext:(id)a0;
- (void)dealloc;

@end
