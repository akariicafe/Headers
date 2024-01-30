@class CLSQuerySpecification, NSString, CLSDataStore, NSMutableSet, NSPredicate, NSArray;

@interface CLSDataObserver : NSObject <CLSPredicateValueNormalizer, CLSEntityChangeNotifiable>

@property (retain, nonatomic) NSMutableSet *entitiesMatchingPredicate;
@property (retain, nonatomic) NSMutableSet *entitiesChangedAddedIDs;
@property (retain, nonatomic) NSMutableSet *entitiesChangedUpdatedIDs;
@property (retain, nonatomic) NSMutableSet *entitiesChangedDeletedIDs;
@property (retain, nonatomic) NSMutableSet *entitiesChangedUpdatedMatchingPredicateIDs;
@property (retain, nonatomic) NSMutableSet *entitiesChangedUpdatedNotMatchingPredicateIDs;
@property (weak, nonatomic) CLSDataStore *dataStore;
@property (readonly, nonatomic) NSString *className;
@property (getter=isInvalidated) BOOL invalidated;
@property unsigned long long changeTag;
@property (readonly, nonatomic) CLSQuerySpecification *querySpec;
@property (readonly, nonatomic) Class objectType;
@property (readonly, nonatomic) NSString *observerID;
@property (readonly, nonatomic) NSPredicate *predicate;
@property (copy, nonatomic) NSArray *sortDescriptors;
@property (copy, nonatomic) id /* block */ dataChanged;
@property (copy, nonatomic) id /* block */ entitiesChanged;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)predicateForObjectWithObjectID:(id)a0;
+ (id)predicateForCollaborationStateForObjectWithID:(id)a0 ownerPersonID:(id)a1 domain:(long long)a2;
+ (id)predicateForCollaborationStatesForObjectWithID:(id)a0;
+ (id)predicateForCollaborationStatesForObjectWithID:(id)a0 domain:(long long)a1;
+ (id)predicateForCollaborationStatesForObjectWithID:(id)a0 ownerPersonID:(id)a1;
+ (id)predicateForObjectsWithIdentifier:(id)a0;
+ (id)predicateForObjectsWithObjectIDs:(id)a0;
+ (id)predicateForObjectsWithParentObjectID:(id)a0;
+ (id)predicateForObjectsWithParentObjectID:(id)a0 andRole:(unsigned long long)a1;
+ (id)predicateForObjectsWithPersonID:(id)a0 andRole:(unsigned long long)a1;
+ (id)predicateForUnexpiredObjects;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (oneway void)clientRemote_entitiesChangedAdded:(id)a0 updated:(id)a1 deleted:(id)a2;
- (oneway void)clientRemote_entitiesChangedUpdatedMatchingPredicate:(id)a0 updatedNotMatchingPredicate:(id)a1;
- (oneway void)clientRemote_finishWithEntitiesChangedSince:(id)a0;
- (oneway void)clientRemote_invalidate;
- (oneway void)clientRemote_itemChanged:(unsigned long long)a0;
- (id)initWithObjectType:(Class)a0 predicate:(id)a1 sortDescriptors:(id)a2;
- (id)initWithObjectType:(Class)a0 predicate:(id)a1 sortDescriptors:(id)a2 error:(id *)a3;
- (id)initWithQuerySpecification:(id)a0 error:(id *)a1;
- (id)normalizeKeyPath:(id)a0 forValue:(id)a1;
- (id)normalizedValue:(id)a0 forKeyPath:(id)a1;

@end
