@class HMDHomeManager, CKRecordID, HMDBackingStoreLocal, HMDHome, NSUUID, HMDObjectLookup, NSString;
@protocol HMDBackingStoreObjectProtocol;

@interface HMDBackingStore : HMFObject <HMFLogging>

@property (readonly, nonatomic) CKRecordID *root;
@property (retain, nonatomic) HMDBackingStoreLocal *local;
@property (weak, nonatomic) HMDHomeManager *homeManager;
@property (weak, nonatomic) HMDHome *home;
@property (retain, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) HMDObjectLookup *lookup;
@property (weak, nonatomic) id<HMDBackingStoreObjectProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)currentDevice;
+ (void)start;
+ (id)internalAllowedTypes;
+ (id)allowedTypes;
+ (id)deeplyProblematicObjectTypes;
+ (id)flushBackingStore;
+ (id)resetBackingStore;

- (void)submit:(id)a0;
- (void).cxx_destruct;
- (id)initWithUUID:(id)a0;
- (id)dumpState;
- (id)logIdentifier;
- (void)submitBlock:(id /* block */)a0;
- (id)transaction:(id)a0 options:(id)a1;
- (id)initWithUUID:(id)a0 home:(id)a1;
- (void)saveToPersistentStoreWithReason:(id)a0 incrementGeneration:(BOOL)a1;
- (void)updateModelObjects:(id)a0 destination:(unsigned long long)a1;
- (void)deleteModelObjects:(id)a0 destination:(unsigned long long)a1;
- (id)__fetchWithGroup:(id)a0 uuids:(id)a1 error:(id *)a2;
- (void)commit:(id)a0 run:(BOOL)a1 save:(BOOL)a2 completionHandler:(id /* block */)a3;
- (id)initWithUUID:(id)a0 homeManager:(id)a1 home:(id)a2;
- (id)initWithUUID:(id)a0 homeManager:(id)a1;
- (id)transactionWithOptions:(id)a0;

@end
