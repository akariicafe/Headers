@class RLMObjectSchema, NSString, RLMRealm;

@interface RLMObject : RLMObjectBase <RLMThreadConfined>

@property (readonly, nonatomic) RLMRealm *realm;
@property (readonly, nonatomic) RLMObjectSchema *objectSchema;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultPropertyValues;
+ (id)primaryKey;
+ (id)requiredProperties;
+ (id)objectsWhere:(id)a0 args:(char *)a1;
+ (id)objectsWithPredicate:(id)a0;
+ (id)objectsWhere:(id)a0;
+ (id)allObjects;
+ (id)className;
+ (id)createOrUpdateInRealm:(id)a0 withValue:(id)a1;
+ (id)createOrUpdateModifiedInRealm:(id)a0 withValue:(id)a1;
+ (id)objectsInRealm:(id)a0 where:(id)a1 args:(char *)a2;
+ (id)objectsInRealm:(id)a0 withPredicate:(id)a1;
+ (id)createInDefaultRealmWithValue:(id)a0;
+ (id)createInRealm:(id)a0 withValue:(id)a1;
+ (id)createOrUpdateInDefaultRealmWithValue:(id)a0;
+ (id)createOrUpdateModifiedInDefaultRealmWithValue:(id)a0;
+ (id)allObjectsInRealm:(id)a0;
+ (id)objectsInRealm:(id)a0 where:(id)a1;
+ (id)objectForPrimaryKey:(id)a0;
+ (id)objectInRealm:(id)a0 forPrimaryKey:(id)a1;
+ (id)indexedProperties;
+ (id)linkingObjectsProperties;
+ (id)ignoredProperties;

- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)init;
- (BOOL)isEqualToObject:(id)a0;
- (id)addNotificationBlock:(id /* block */)a0;
- (id)initWithValue:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (id)initWithValue:(id)a0 schema:(id)a1;
- (id)initWithRealm:(id)a0 schema:(id)a1;

@end
