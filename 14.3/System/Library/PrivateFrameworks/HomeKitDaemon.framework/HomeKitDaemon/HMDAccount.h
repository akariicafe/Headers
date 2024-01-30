@class NSUUID, NSString, NSArray, HMDAccountHandle, HMDAccountIdentifier, NSSet, CNContact, HMDDevice, NSObject, NSMutableSet, HMFUnfairLock;
@protocol OS_dispatch_queue, HMDAccountManager;

@interface HMDAccount : HMFObject <HMFLogging, HMFMerging, HMDBackingStoreObjectProtocol, HMDBackingStoreModelBackedObjectProtocol, NSFastEnumeration, NSSecureCoding> {
    NSObject<OS_dispatch_queue> *_queue;
    HMFUnfairLock *_lock;
    NSSet *_handles;
    NSMutableSet *_devices;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, getter=isCurrentAccount) BOOL currentAccount;
@property (readonly) HMDDevice *currentDevice;
@property (readonly, copy) NSArray *identities;
@property (weak) id<HMDAccountManager> manager;
@property (readonly, copy) NSString *destination;
@property (readonly, copy) HMDAccountHandle *primaryHandle;
@property (readonly, copy) NSString *senderCorrelationIdentifier;
@property (readonly, getter=isAuthenticated) BOOL authenticated;
@property (readonly) BOOL shouldCache;
@property (readonly, copy) HMDAccountIdentifier *identifier;
@property (readonly, copy) NSString *name;
@property (readonly, copy) CNContact *contact;
@property (readonly, copy) NSArray *handles;
@property (readonly, copy) NSArray *devices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) Class modelClass;
@property (readonly, copy, nonatomic) NSUUID *modelIdentifier;
@property (readonly, copy, nonatomic) NSUUID *modelParentIdentifier;

+ (id)logCategory;
+ (id)accountWithHandle:(id)a0;
+ (id)accountWithDestination:(id)a0;

- (void)setHandles:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)init;
- (void).cxx_destruct;
- (BOOL)shouldMergeObject:(id)a0;
- (id)initWithObjectModel:(id)a0;
- (id)shortDescription;
- (id)attributeDescriptions;
- (void)addDevice:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToAccount:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)mergeObject:(id)a0;
- (void)addHandle:(id)a0;
- (id)logIdentifier;
- (void)encodeWithCoder:(id)a0;
- (void)removeHandle:(id)a0;
- (void)removeDevice:(id)a0;
- (id)modelObjectWithChangeType:(unsigned long long)a0 version:(long long)a1;
- (void)transactionObjectUpdated:(id)a0 newValues:(id)a1 message:(id)a2;
- (void)transactionObjectRemoved:(id)a0 message:(id)a1;
- (id)deviceForHandle:(id)a0;
- (id)initWithIdentifier:(id)a0 handles:(id)a1 devices:(id)a2;
- (id)deviceForIdentifier:(id)a0;
- (BOOL)isRelatedToAccount:(id)a0;
- (id)modelBackedObjects;
- (id)backingStoreObjectsWithChangeType:(unsigned long long)a0 version:(long long)a1;
- (id)accountHandleWithModelIdentifier:(id)a0;
- (id)deviceWithModelIdentifier:(id)a0;
- (id)currentDeviceModelsWithChangeType:(unsigned long long)a0 version:(long long)a1;

@end
