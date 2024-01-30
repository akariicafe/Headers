@class NSString, CLSDataStore, NSPredicate, NSArray;

@interface CLSDataObserver : NSObject <CLSPredicateValueNormalizer, CLSChangeNotifiable>

@property (weak, nonatomic) CLSDataStore *dataStore;
@property (readonly, nonatomic) NSString *className;
@property (getter=isInvalidated) BOOL invalidated;
@property unsigned long long changeTag;
@property (readonly, nonatomic) Class objectType;
@property (readonly, nonatomic) NSString *observerID;
@property (readonly, nonatomic) NSPredicate *predicate;
@property (copy, nonatomic) NSArray *sortDescriptors;
@property (copy, nonatomic) id /* block */ dataChanged;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)predicateForObjectsWithIdentifier:(id)a0;
+ (id)predicateForObjectsWithParentObjectID:(id)a0 andRole:(unsigned long long)a1;
+ (id)predicateForObjectsWithObjectIDs:(id)a0;
+ (id)predicateForObjectsWithParentObjectID:(id)a0;
+ (id)predicateForObjectWithObjectID:(id)a0;
+ (id)predicateForObjectsWithPersonID:(id)a0 andRole:(unsigned long long)a1;
+ (id)predicateForCollaborationStateForObjectWithID:(id)a0 ownerPersonID:(id)a1 domain:(long long)a2;
+ (id)predicateForCollaborationStatesForObjectWithID:(id)a0;
+ (id)predicateForCollaborationStatesForObjectWithID:(id)a0 ownerPersonID:(id)a1;
+ (id)predicateForCollaborationStatesForObjectWithID:(id)a0 domain:(long long)a1;
+ (id)predicateForUnexpiredObjects;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (oneway void)clientRemote_invalidate;
- (id)initWithObjectType:(Class)a0 predicate:(id)a1 sortDescriptors:(id)a2 error:(id *)a3;
- (oneway void)clientRemote_itemChanged:(unsigned long long)a0;
- (id)initWithObjectType:(Class)a0 predicate:(id)a1 sortDescriptors:(id)a2;
- (id)normalizeKeyPath:(id)a0 forValue:(id)a1;
- (id)normalizedValue:(id)a0 forKeyPath:(id)a1;

@end
