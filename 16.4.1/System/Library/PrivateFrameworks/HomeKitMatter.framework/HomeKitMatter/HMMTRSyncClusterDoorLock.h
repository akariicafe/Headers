@class MTRBaseDevice, NSString, MTRDevice, HMFFuture, NSObject;
@protocol OS_dispatch_queue;

@interface HMMTRSyncClusterDoorLock : MTRClusterDoorLock <HMFLogging>

@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) MTRDevice *device;
@property (retain) MTRBaseDevice *baseDevice;
@property unsigned short endpoint;
@property (retain) HMFFuture *apiSerializationFuture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)deriveHomePinFromUUID:(id)a0 withNumberOfDigits:(long long)a1;
+ (id)pinDataWithDigits:(id)a0;

- (id)lock;
- (id)unlock;
- (void)dealloc;
- (void).cxx_destruct;
- (id)serialize:(id /* block */)a0;
- (id)getUserAtIndex:(long long)a0;
- (id)addDeviceCredentialKeyData:(id)a0 forUserIndex:(long long)a1;
- (id)addIssuerKeyData:(id)a0 forUserIndex:(long long)a1;
- (id)addOrUpdatePinCodeWithValue:(id)a0 forUserIndex:(long long)a1;
- (id)addOrUpdateReaderKeyData:(id)a0;
- (id)getAllPinCodes;
- (id)removePinCodeForUserIndex:(long long)a0;
- (id)findOrAddUserWithUniqueID:(id)a0;
- (id)findUserOrAvailableSlotWithUserUniqueID:(id)a0;
- (id)removeUserWithUniqueID:(id)a0;
- (id)addCredentialData:(id)a0 forCredentialType:(id)a1 atIndex:(long long)a2 forUserAtUserIndex:(long long)a3;
- (id)_findUserOrAvailableSlotWithUserUniqueID:(id)a0;
- (id)_getUserAtIndex:(long long)a0;
- (id)_removeUserWithUniqueID:(id)a0;
- (BOOL)accessoryHasCOTAEnabled;
- (void)accessorySupportsPinCodes;
- (id)addPinCodeWithValue:(id)a0 forUserIndex:(long long)a1;
- (id)addPinCredentialAtIndex:(long long)a0 withValue:(id)a1 forUserAtUserIndex:(long long)a2;
- (id)addReaderKeyData:(id)a0;
- (id)addUserAtUserIndex:(long long)a0 withUserUniqueID:(long long)a1 isRemote:(BOOL)a2;
- (id)clearCredentialAtIndex:(long long)a0 withCredentialType:(id)a1;
- (id)clearUserAtIndex:(long long)a0;
- (id)deriveHomePinFromUUID:(id)a0;
- (id)fetchCurrentFabricIndex;
- (id)findAvailableCredentialIndexStartingAtSlot:(long long)a0 forCredentialType:(long long)a1 assumingTotalNumberOfSlots:(long long)a2;
- (id)findHomeUserWithUniqueID:(id)a0 indexStartingAtSlot:(long long)a1 assumingTotalNumberOfSlots:(long long)a2 availableSlots:(id)a3 currentFabricIndex:(id)a4;
- (id)findOrAddUserWithUniqueID:(id)a0 isRemote:(BOOL)a1;
- (id)firstAvailableCredentialSlotForCredentialType:(long long)a0;
- (id)getAllCredentialsIndexStartingAtSlot:(long long)a0 forCredentialType:(long long)a1 credentials:(id)a2;
- (id)getCredentialAtIndex:(long long)a0 forCredentialType:(long long)a1;
- (id)initWithDevice:(id)a0 baseDevice:(id)a1 endpoint:(unsigned short)a2 queue:(id)a3;
- (void)lockDoorWithAccessoryUUID:(id)a0 completionHandler:(id /* block */)a1;
- (id)lockWithPin:(id)a0;
- (id)pinCredentialForUser:(id)a0;
- (id)provisionHomePin:(id)a0;
- (id)removeHomeUser;
- (id)rfidCredentialForUser:(id)a0;
- (long long)totalNumberOfPINCredentialsSupported;
- (id)totalNumberOfUsersSupported;
- (void)unlockDoorWithAccessoryUUID:(id)a0 completionHandler:(id /* block */)a1;
- (id)unlockWithPin:(id)a0;
- (id)updateCredentialData:(id)a0 forCredentialType:(id)a1 atIndex:(long long)a2 forUserAtUserIndex:(long long)a3;
- (id)updatePinCredentialAtIndex:(long long)a0 withValue:(id)a1 forUserAtUserIndex:(long long)a2;

@end
