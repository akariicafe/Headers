@class NSMutableSet, NSString, NSMutableArray, NSSQLEntity, NSDictionary, NSSQLiteStatement, NSFaultHandler, NSFetchRequest, NSSQLModel, _PFFetchPlanHeader;

@interface NSSQLFetchRequestContext : NSSQLStoreRequestContext {
    NSString *_externalDataReferencesDirectory;
    NSString *_externalDataLinksDirectory;
    NSString *_fileBackedFuturesDirectory;
    NSSQLModel *_sqlModel;
    NSSQLEntity *_sqlEntity;
    NSFaultHandler *_faultHandler;
    _PFFetchPlanHeader *_fetchPlan;
    NSSQLiteStatement *_statement;
    NSMutableSet *_objectIDsToRegister;
    NSMutableSet *_objectsToAwaken;
    NSMutableArray *_resultFaultsThatWereFired;
    NSSQLFetchRequestContext *_parentContext;
    int _fileProtectionLevel;
    NSFetchRequest *_originalRequest;
    BOOL _storeIsUbiquitized;
    BOOL _isUsingCachedStatement;
    NSMutableArray *_concurrentFetchingPipelineRows;
    NSDictionary *_prefetchingSubstitutionVariables;
}

@property (readonly, nonatomic) NSFetchRequest *request;
@property (retain, nonatomic) NSSQLiteStatement *fetchStatement;
@property (nonatomic) BOOL isFaultRequest;
@property (readonly, nonatomic) BOOL shouldUseBatches;

- (id)manyToOnePrefetchRequestForRelationshipNamed:(id)a0 onEntity:(id)a1;
- (id)manyToManyPrefetchRequestsForRelationshipNamed:(id)a0 onEntity:(id)a1;
- (id)inverseIsToOnePrefetchRequestForRelationshipNamed:(id)a0 onEntity:(id)a1;
- (void)dealloc;
- (void)executeEpilogue;
- (void)visitPredicate:(id)a0;
- (id)initWithRequest:(id)a0 context:(id)a1 sqlCore:(id)a2;
- (void)visitPredicateExpression:(id)a0;
- (BOOL)executeRequestCore:(id *)a0;
- (void)executePrologue;
- (id)_createStatement;
- (id)createChildContextForNestedFetchRequest:(id)a0;

@end
