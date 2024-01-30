@class HMDHomeManager, NSMapTable, HMDBackingStoreLocal, NSOperationQueue, NSString, HMFVersion;

@interface HMDBackingStoreSingleton : HMFObject <HMFLogging>

@property (class, readonly) HMFVersion *dataVersion;

@property (retain, nonatomic) HMDBackingStoreLocal *local;
@property (readonly, nonatomic) NSMapTable *objectLookup;
@property (readonly, nonatomic) NSMapTable *classToNameTransform;
@property (readonly, nonatomic) NSMapTable *nameToClassTransform;
@property (readonly, nonatomic) NSMapTable *objectPropertyHashLookup;
@property (readonly, weak, nonatomic) HMDHomeManager *homeManager;
@property (readonly, nonatomic) NSOperationQueue *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)logCategory;
+ (void)setClass:(Class)a0 forClassName:(id)a1;
+ (void)start;
+ (void)resetClassMappings;
+ (void)resetSchemaHash;

- (id)logIdentifier;
- (void).cxx_destruct;
- (id)init;
- (void)setHomeManager:(id)a0;
- (id)schemaHashForObject:(id)a0;
- (id)flushBackingStore;
- (id)resetBackingStore;

@end
