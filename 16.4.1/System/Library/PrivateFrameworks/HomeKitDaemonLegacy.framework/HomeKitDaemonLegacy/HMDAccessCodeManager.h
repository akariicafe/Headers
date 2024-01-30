@class NSString, NSUUID, HMDAccessCodeDataManager, NSHashTable, HMDAccessoryAccessCodeReaderWriter, NSObject;
@protocol OS_dispatch_queue, HMDAccessCodeManagerContext;

@interface HMDAccessCodeManager : HMFObject <HMFLogging, HMFMessageReceiver, HMDAccessCodeDataManagerDelegate>

@property (readonly) id<HMDAccessCodeManagerContext> context;
@property (readonly) Class utilities;
@property (readonly) HMDAccessoryAccessCodeReaderWriter *accessoryReaderWriter;
@property (getter=isHomeAppForegrounded) BOOL homeAppForegrounded;
@property (readonly) NSHashTable *subscribedClientConnections;
@property (readonly) HMDAccessCodeDataManager *dataManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

- (id)logIdentifier;
- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (void)_updateAccessoryAccessCodeCache;
- (void)configureWithMessageDispatcher:(id)a0;
- (id)_accessCodeForUserWithUUID:(id)a0 inHome:(id)a1;
- (id)_addNewAccessCode:(id)a0 forUserWithUUID:(id)a1 toAccessoriesWithUUIDs:(id)a2 withRetries:(BOOL)a3;
- (id)_createNewAccessCodeForUserWithUUID:(id)a0;
- (void)_fetchAccessCodeConstraintsForMessage:(id)a0;
- (void)_fetchAccessCodesForMessage:(id)a0;
- (void)_generateNewAccessCodeWithCompletion:(id /* block */)a0;
- (void)_generateNewUserAccessCodeForMessage:(id)a0;
- (void)_notifySubscribersOfMessageWithName:(id)a0 payload:(id)a1;
- (BOOL)_redispatchToResidentIfNeccesaryForMessage:(id)a0 withNewResponseHandler:(id /* block */)a1;
- (id)_removeAccessCode:(id)a0 forUser:(id)a1 removedByUserUUID:(id)a2;
- (id)_removeAccessCode:(id)a0 forUserBeingRemoved:(id)a1;
- (id)_removeAccessCode:(id)a0 forUserWithUUID:(id)a1 removedByUserUUID:(id)a2;
- (id)_removeAccessCodeFromAccessoriesKeepingiCloudDataUponFailure:(id)a0 forUserUUID:(id)a1;
- (void)_removeSimpleLabelAccessCodeMessage:(id)a0;
- (id)_resetAccessCodesForHomeAccessCode:(id)a0;
- (void)_resetAccessoryAccessCodesForMessage:(id)a0;
- (void)_setAccessCodeForUserForMessage:(id)a0;
- (void)_submitAccessCodeModificationRequestsForMessage:(id)a0;
- (id)_updateAccessCode:(id)a0 toNewValue:(id)a1 onAccessoriesWithFetchResponses:(id)a2 withRetries:(BOOL)a3;
- (void)_updateCacheWithModificationRespponses:(id)a0;
- (id)_updateModificationRequestsWithUserOrGuestNames:(id)a0;
- (id)_waitUntilDataHasSyncedToResidentForAccessoryUUIDs:(id)a0;
- (id)_waitUntilDataHasSyncedToResidentIfNecessaryForAccessoryUUIDs:(id)a0;
- (void)accessCodeDataManager:(id)a0 didAddAccessoryAccessCodes:(id)a1;
- (void)accessCodeDataManager:(id)a0 didAddHomeAccessCodes:(id)a1 addedByUserUUID:(id)a2;
- (void)accessCodeDataManager:(id)a0 didRemoveAccessoryAccessCodes:(id)a1;
- (void)accessCodeDataManager:(id)a0 didRemoveHomeAccessCodes:(id)a1 removedByUserUUID:(id)a2;
- (void)accessCodeDataManager:(id)a0 didUpdateAccessoryAccessCodes:(id)a1;
- (void)accessCodeDataManager:(id)a0 didUpdateHomeAccessCodes:(id)a1 changedByUserUUID:(id)a2;
- (void)fetchAccessCodeForIdentifier:(id)a0 accessoryUUID:(id)a1 completion:(id /* block */)a2;
- (void)handleAccessorySupportsAccessCodeDidChangeNotification:(id)a0;
- (void)handleConfirmDataHasSyncedToResidentMessage:(id)a0;
- (void)handleFetchAccessCodeConstraintsMessage:(id)a0;
- (void)handleFetchAccessCodesMessage:(id)a0;
- (void)handleFetchCachedAccessCodesMessage:(id)a0;
- (void)handleFetchHomeAccessCodesMessage:(id)a0;
- (void)handleGenerateNewUserAccessCodeMessage:(id)a0;
- (void)handleHomeDidDisableCharacteristicNotification:(id)a0;
- (void)handleHomeDidEnableCharacteristicNotification:(id)a0;
- (void)handleHomeUserRemovedNotification:(id)a0;
- (void)handleRemoveHomeAccessCodeMessage:(id)a0;
- (void)handleRemoveSimpleLabelAccessCodeMessage:(id)a0;
- (void)handleResetAccessoryAccessCodesMessage:(id)a0;
- (void)handleSetAccessCodeForUserMessage:(id)a0;
- (void)handleSetUserInformationMessage:(id)a0;
- (void)handleSubmitAccessCodeModificationRequestsMessage:(id)a0;
- (void)handleSubscribeMessage:(id)a0;
- (void)handleUnsubscribeMessage:(id)a0;
- (void)handleUserAccessCodeDidChangeMessage:(id)a0;
- (BOOL)hasCurrentUserAccessCodeChangedWithChangedAccessCodes:(id)a0 home:(id)a1;
- (id)initWithContext:(id)a0 utilities:(Class)a1 accessoryReaderWriter:(id)a2 dataManager:(id)a3;

@end
