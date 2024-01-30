@class NSSQLCore;

@interface NSSQLGenerator : NSObject {
    NSSQLCore *_persistentStore;
}

+ (void)initialize;

- (id)_predicateRestrictingToSubentitiesForEntity:(id)a0;
- (id)generateUpdateColumnsIntermediateInContext:(id)a0;
- (void)generateIntermediateForOffset:(unsigned long long)a0 inContext:(id)a1;
- (id)newSQLStatementForChangeRequest:(id)a0;
- (id)newSQLStatementForRequest:(id)a0 ignoreInheritance:(BOOL)a1 countOnly:(BOOL)a2 nestingLevel:(unsigned int)a3 nestIsWhereScoped:(BOOL)a4 requestContext:(id)a5;
- (void)generateOrderIntermediateInContext:(id)a0;
- (id)initializeContextForFetchRequest:(id)a0 ignoreInheritance:(BOOL)a1 nestingLevel:(unsigned int)a2 nestIsWhereScoped:(BOOL)a3 requestContext:(id)a4;
- (id)newSQLStatmentForBinaryIndex:(id)a0 inStore:(id)a1;
- (void)generateSelectIntermediateInContext:(id)a0;
- (id)_predicateRestrictingSuperentitiesForEntity:(id)a0;
- (id)initializeContextForIndexGeneration:(id)a0 inStore:(id)a1;
- (id)initWithPersistentStore:(id)a0;
- (id)generateIntermediatesForFetchInContext:(id)a0 countOnly:(BOOL)a1;
- (id)newSQLStatementForUpdateRequest:(id)a0;
- (void)generateHavingIntermediateForPredicate:(id)a0 inContext:(id)a1;
- (id)generateIntermediatesForUpdateInContext:(id)a0;
- (id)initializeContextForUpdateRequest:(id)a0;
- (void)generateIntermediateForLimit:(unsigned long long)a0 inContext:(id)a1;
- (id)_predicateForSpecificEntity:(id)a0;
- (id)initializeContextForRequest:(id)a0 ignoreInheritance:(BOOL)a1 nestingLevel:(unsigned int)a2;
- (id)newSQLStatementForFetchRequest:(id)a0 ignoreInheritance:(BOOL)a1 countOnly:(BOOL)a2 nestingLevel:(unsigned int)a3 nestIsWhereScoped:(BOOL)a4 requestContext:(id)a5;
- (id)predicateForRequestInContext:(id)a0;
- (void)generateWhereIntermediatesInContext:(id)a0;
- (void)generateGroupByIntermediatesForProperties:(id)a0 inContext:(id)a1;

@end
