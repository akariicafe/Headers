@class NSUUID, NSHashTable, NSArray, HMHome, NSString, _HMContext, NSObject, HMAccessCodeConstraints, NSNotificationCenter;
@protocol OS_dispatch_queue;

@interface HMAccessCodeManager : NSObject <HMFLogging, HMFMessageReceiver> {
    struct hmf_unfair_data_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; } _lock;
}

@property (class, readonly) HMAccessCodeConstraints *accessCodeConstraints;

@property (readonly, weak) HMHome *home;
@property (readonly) _HMContext *context;
@property (readonly, copy) NSUUID *UUID;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) NSHashTable *observers;
@property (readonly, copy) NSArray *accessoriesSupportingAccessCodes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;
+ (long long)_accessCodeLengthFromLowerBound:(long long)a0 upperBound:(long long)a1;
+ (id)_createAccessCodeWithLength:(long long)a0;
+ (id)accessCodeManagerUUIDFromHomeUUID:(id)a0;
+ (id)convertPotentialUniqueIdentifier:(id)a0 toUUIDForUserInHome:(id)a1;
+ (BOOL)doesAccessCode:(id)a0 conflictWithExistingAccessCodes:(id)a1;
+ (id)generateAccessCodeValueFromConstraints:(id)a0 accessoryAccessCodes:(id)a1 homeAccessCodes:(id)a2;
+ (id)generateAccessCodeValueFromConstraints:(id)a0 existingAccessCodes:(id)a1;
+ (long long)greatestLowerBoundForAccessCodeLengthFromConstraints:(id)a0;
+ (BOOL)isWeakAccessCode:(id)a0;
+ (long long)leastUpperBoundForAccessCodeLengthFromConstraints:(id)a0;
+ (id)valueObjectsForAccessCodeModificationRequests:(id)a0 home:(id)a1;

- (void)configure;
- (id)logIdentifier;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)_sendMessageWithName:(id)a0 payload:(id)a1 responseHandler:(id /* block */)a2;
- (void)_subscribe;
- (void)_unsubscribe;
- (void)fetchAccessCodeConstraintsFromAccessories:(id)a0 completion:(id /* block */)a1;
- (void)fetchAccessCodesFromAccessories:(id)a0 completion:(id /* block */)a1;
- (void)fetchCachedAccessoryAccessCodesWithCompletion:(id /* block */)a0;
- (void)fetchHomeAccessCodesWithCompletion:(id /* block */)a0;
- (void)generateAccessCodeForUser:(id)a0 completion:(id /* block */)a1;
- (void)handleDaemonReconnectedNotification:(id)a0;
- (void)handleDidAddAccessoryAccessCodesMessage:(id)a0;
- (void)handleDidAddHomeAccessCodesMessage:(id)a0;
- (void)handleDidRemoveAccessoryAccessCodesMessage:(id)a0;
- (void)handleDidRemoveHomeAccessCodesMessage:(id)a0;
- (void)handleDidUpdateAccessoryAccessCodesMessage:(id)a0;
- (void)handleDidUpdateHomeAccessCodesMessage:(id)a0;
- (id)initWithHome:(id)a0;
- (id)initWithHome:(id)a0 context:(id)a1 UUID:(id)a2 notificationCenter:(id)a3;
- (void)removeHomeAccessCodeWithValue:(id)a0 completion:(id /* block */)a1;
- (void)removeSimpleLabelAccessCode:(id)a0 completion:(id /* block */)a1;
- (void)resetAccessoryAccessCodesWithValueMatchingHomeAccessCode:(id)a0 completion:(id /* block */)a1;
- (void)setAccessCode:(id)a0 forUser:(id)a1 completion:(id /* block */)a2;
- (void)setAccessCode:(id)a0 forUserWithUUID:(id)a1 completion:(id /* block */)a2;
- (void)setUserInformation:(id)a0 forHomeAccessCodeWithValue:(id)a1 completion:(id /* block */)a2;
- (void)submitAccessCodeModificationRequests:(id)a0 completion:(id /* block */)a1;

@end
