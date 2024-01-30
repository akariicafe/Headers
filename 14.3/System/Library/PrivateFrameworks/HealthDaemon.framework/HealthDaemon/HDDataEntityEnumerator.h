@class NSString, NSArray, NSSet, HDSQLitePredicate, _HKFilter, HDDatabaseTransactionContext, HDProfile, NSMutableDictionary, NSNumber;

@interface HDDataEntityEnumerator : HDSQLiteQueryDescriptor {
    HDProfile *_profile;
    NSMutableDictionary *_encodingOptions;
    BOOL _useLeftJoin;
}

@property (retain, nonatomic) _HKFilter *filter;
@property (readonly, nonatomic) NSSet *objectTypes;
@property (retain, nonatomic) NSSet *restrictedSourceEntities;
@property (copy, nonatomic) id /* block */ authorizationFilter;
@property (retain, nonatomic) NSNumber *anchor;
@property (retain, nonatomic) NSNumber *deletedObjectsAnchor;
@property (copy, nonatomic) HDSQLitePredicate *deletedObjectsPredicate;
@property (copy, nonatomic) NSArray *sortDescriptors;
@property (copy, nonatomic) HDDatabaseTransactionContext *databaseTransactionContext;
@property (nonatomic) BOOL ignoreEntityClassAdditionalPredicateForEnumeration;
@property (nonatomic) BOOL improveJoinOrderingForStartDateIndexSelection;
@property (readonly, copy, nonatomic) NSString *lastSQL;

- (id)_initWithObjectTypes:(id)a0 entityClass:(Class)a1 profile:(id)a2;
- (BOOL)_prepareDescriptor:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addEncodingOptionsFromDictionary:(id)a0;
- (BOOL)_enumerateObjectsWithDatabaseTransaction:(id)a0 error:(id *)a1 handler:(id /* block */)a2;
- (BOOL)_setOrderingTermsOnDescriptor:(id)a0 error:(id *)a1;
- (BOOL)enumerateIncludingDeletedObjects:(BOOL)a0 error:(id *)a1 handler:(id /* block */)a2;
- (BOOL)enumerateWithError:(id *)a0 handler:(id /* block */)a1;
- (id)_initWithEntityClass:(Class)a0 profile:(id)a1;
- (void)setEncodingOption:(id)a0 forKey:(id)a1;
- (id)encodingOptionForKey:(id)a0;
- (id)_initWithObjectType:(id)a0 entityClass:(Class)a1 profile:(id)a2;
- (BOOL)_prepareDeletedObjectsAndSamplesDescriptor:(id)a0 error:(id *)a1;
- (id)_joinClauseForProperties:(id)a0;

@end
