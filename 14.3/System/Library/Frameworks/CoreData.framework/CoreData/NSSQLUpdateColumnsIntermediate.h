@class NSArray;

@interface NSSQLUpdateColumnsIntermediate : NSSQLIntermediate {
    NSArray *_propertiesToUpdate;
    NSArray *_valuesToUpdateTo;
}

- (BOOL)isDestination:(id)a0 compatibleDestinationFor:(id)a1;
- (id)_generateSQLToUpdateProperty:(id)a0 fromSubquery:(id)a1 inContext:(id)a2;
- (id)_generateSQLForRelationshipUpdate:(id)a0 destination:(id)a1 inContext:(id)a2;
- (void)dealloc;
- (id)generateSQLStringInContext:(id)a0;
- (id)_generateSQLToUpdateProperty:(id)a0 fromSingleStepKeypath:(id)a1 inContext:(id)a2;
- (id)_generateSQLForRelationshipUpdate:(id)a0 sourceRelationship:(id)a1 inContext:(id)a2;
- (id)_generateSQLForAttributeUpdate:(id)a0 value:(id)a1 inContext:(id)a2;
- (id)_generateSQLToUpdateProperty:(id)a0 fromKeypath:(id)a1 inContext:(id)a2;
- (id)_subqueryIntermediateForToManyKeypathWithComponents:(id)a0 withFunction:(BOOL)a1 inContext:(id)a2;
- (id)initWithProperties:(id)a0 values:(id)a1 inScope:(id)a2;
- (id)governingAliasForKeypathExpression:(id)a0;
- (id)_generateSQLToUpdateProperty:(id)a0 fromMultiStepKeypathComponents:(id)a1 inContext:(id)a2;
- (id)_generateSQLForAttributeUpdate:(id)a0 sourceAttribute:(id)a1 inContext:(id)a2;
- (BOOL)isUpdateColumnsScoped;
- (BOOL)isRelationship:(id)a0 compatibleWith:(id)a1;
- (id)_generateSQLForKeypathWithComponents:(id)a0 onSQLEntity:(id)a1 inContext:(id)a2;

@end
