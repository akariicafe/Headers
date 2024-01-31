@class NSMutableDictionary;

@interface NSSQLReadOnlySelectIntermediate : NSSQLSelectIntermediate {
    BOOL _onlyFetchesAggregates;
    NSMutableDictionary *_variableToAliasMappings;
    NSMutableDictionary *_propertyToAliasMappings;
}

- (void)dealloc;
- (id)initWithScope:(id)a0;
- (BOOL)onlyFetchesAggregates;
- (id)generateSQLStringInContext:(id)a0;
- (id)resolveVariableExpression:(id)a0 inContext:(id)a1;

@end
