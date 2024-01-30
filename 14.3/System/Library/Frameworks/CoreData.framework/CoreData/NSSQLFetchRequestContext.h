@class NSMutableArray, NSString, NSArray, NSMutableSet, NSSQLEntity, NSDictionary, NSSQLiteStatement, NSFaultHandler, NSFetchRequest, NSSQLModel, _PFFetchPlanHeader;

@interface NSSQLFetchRequestContext : NSSQLStoreRequestContext {
    NSSQLiteStatement *_statement;
    NSMutableSet *_objectIDsToRegister;
    NSMutableSet *_objectsToAwaken;
    NSMutableArray *_concurrentFetchingPipelineRows;
}

@property (readonly, nonatomic) NSSQLFetchRequestContext *parentContext;
@property (readonly, nonatomic) NSFetchRequest *request;
@property (retain, nonatomic) NSSQLiteStatement *fetchStatement;
@property (readonly, nonatomic) NSFetchRequest *originalRequest;
@property (readonly, nonatomic) BOOL storeIsUbiquitized;
@property (readonly, nonatomic) NSString *externalDataReferencesDirectory;
@property (readonly, nonatomic) NSString *externalDataLinksDirectory;
@property (readonly, nonatomic) NSString *fileBackedFuturesDirectory;
@property (readonly, nonatomic) int fileProtectionLevel;
@property (readonly, nonatomic) NSSQLModel *sqlModel;
@property (readonly, nonatomic) NSSQLEntity *sqlEntityForFetchRequest;
@property (readonly, nonatomic) NSFaultHandler *faultHandler;
@property (readonly, nonatomic) _PFFetchPlanHeader *fetchPlan;
@property (readonly, nonatomic) NSArray *objectIDsToRegisterWithContext;
@property (readonly, nonatomic) NSArray *objectsToAwaken;
@property (nonatomic) BOOL isFaultRequest;
@property (readonly, nonatomic) BOOL shouldUseBatches;
@property (nonatomic) BOOL isUsingCachedStatement;
@property (retain, nonatomic) NSDictionary *prefetchingSubstitutionVariables;
@property (readonly, retain, nonatomic) NSMutableArray *faultsThatWereFired;

- (void)cacheStatement:(id)a0;
- (id)manyToManyPrefetchRequestsForRelationshipNamed:(id)a0 onEntity:(id)a1;
- (void)executePrologue;
- (id)createChildContextForNestedFetchRequest:(id)a0;
- (id)ubiquitousExternalReferenceLocationForUUID:(id)a0;
- (void)executeEpilogue;
- (void)dealloc;
- (void)persistRows:(id)a0;
- (void)visitPredicateExpression:(id)a0;
- (void)addObjectIDsToRegister:(id)a0;
- (id)cachedStatement;
- (id)manyToOnePrefetchRequestForRelationshipNamed:(id)a0 onEntity:(id)a1;
- (void)addObjectsToAwaken:(id)a0;
- (void)_fireFaultsForValue:(id)a0;
- (void)_preparePredicate:(id)a0;
- (BOOL)executeRequestCore:(id *)a0;
- (void)_setupBindVariablesForCachedStatement:(id)a0 usingValues:(id)a1;
- (void)addFaultsThatWereFired:(id)a0;
- (id)_createStatement;
- (id)initWithRequest:(id)a0 connection:(id)a1 context:(id)a2 sqlCore:(id)a3 parentContext:(id)a4;
- (Class)objectIDFactoryForSQLEntity:(id)a0;
- (id)inverseIsToOnePrefetchRequestForRelationshipNamed:(id)a0 onEntity:(id)a1;
- (id)initWithRequest:(id)a0 context:(id)a1 sqlCore:(id)a2;
- (void)visitPredicate:(id)a0;

@end
