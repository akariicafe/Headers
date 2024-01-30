@class NSHashTable, NSString, HMBCloudDatabase, HMDLogEventDispatcher, HMBLocalDatabase, NSMapTable, HMFUnfairLock;

@interface HMDDatabase : HMFObject <HMBLocalDatabaseDelegate, HMBCloudDatabaseDelegate, HMDDatabaseZoneDelegate, HMFLogging, HMDDatabase>

@property (class, readonly) HMDDatabase *defaultDatabase;
@property (class, readonly) HMDDatabase *cameraClipsDatabase;

@property (readonly) HMFUnfairLock *lock;
@property (readonly) NSHashTable *delegates;
@property (readonly) NSMapTable *zoneDelegatesByLocalZone;
@property (readonly) HMDLogEventDispatcher *logEventDispatcher;
@property BOOL hasStarted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) HMBCloudDatabase *cloudDatabase;
@property (readonly) HMBLocalDatabase *localDatabase;

+ (id)logCategory;
+ (id)defaultLocalDatabaseFileURL;

- (void)removeDelegate:(id)a0;
- (void)addDelegate:(id)a0;
- (void).cxx_destruct;
- (id)acceptInvitation:(id)a0;
- (void)performDelegateCallback:(id /* block */)a0;
- (id)declineInvitation:(id)a0;
- (id)registerSharedSubscriptionForExternalRecordType:(id)a0;
- (id)unregisterSharedSubscriptionForExternalRecordType:(id)a0;
- (void)start;
- (id)logIdentifier;
- (void)localZone:(id)a0 didCompleteProcessingWithResult:(id)a1;
- (void)cloudDatabase:(id)a0 encounteredError:(id)a1 withOperation:(id)a2 onZone:(id)a3;
- (void)cloudZone:(id)a0 didChangeRebuildStatus:(id)a1;
- (void)localDatabase:(id)a0 willRemoveZoneWithID:(id)a1;
- (void)cloudDatabase:(id)a0 didCreateZoneWithID:(id)a1;
- (void)cloudDatabase:(id)a0 didRemoveZoneWithID:(id)a1;
- (id)cloudDatabase:(id)a0 willRemoveZoneWithID:(id)a1;
- (void)cloudDatabase:(id)a0 encounteredError:(id)a1 withOperation:(id)a2 onContainer:(id)a3;
- (void)cloudDatabase:(id)a0 didReceiveMessageWithUserInfo:(id)a1;
- (BOOL)localDatabaseShouldLogPrivateInformation:(id)a0;
- (void)localDatabase:(id)a0 detectedLocalCorruptionWithInfo:(id)a1;
- (void)cloudZone:(id)a0 didRemoveParticipantWithClientIdentifier:(id)a1;
- (id)removePrivateZonesWithName:(id)a0;
- (id)removeSharedZonesWithName:(id)a0;
- (id)privateZonesWithName:(id)a0 configuration:(id)a1 delegate:(id)a2 error:(id *)a3;
- (id)existingSharedZoneIDWithName:(id)a0;
- (id)sharedZonesWithID:(id)a0 configuration:(id)a1 delegate:(id)a2 error:(id *)a3;
- (id)removeLocalAndCloudDataForLocalZone:(id)a0;
- (id)existingPrivateZonesWithName:(id)a0 configuration:(id)a1 delegate:(id)a2 error:(id *)a3;
- (id)initWithFileURL:(id)a0 cloudContainerIdentifier:(id)a1 cloudContainerSourceApplicationBundleIdentifier:(id)a2;
- (id)initWithLocalDatabase:(id)a0 cloudDatabase:(id)a1 logEventDispatcher:(id)a2;
- (id)zonesWithID:(id)a0 isPrivate:(BOOL)a1 shouldCreate:(BOOL)a2 configuration:(id)a3 delegate:(id)a4 error:(id *)a5;
- (id)removeZonesWithID:(id)a0 isPrivate:(BOOL)a1;
- (void)addZoneDelegate:(id)a0 forLocalZone:(id)a1;
- (void)performZoneDelegateCallback:(id /* block */)a0 forLocalZone:(id)a1;
- (void)removeZoneDelegate:(id)a0 forLocalZone:(id)a1;
- (id)mergedActionFutureForActionFutures:(id)a0;

@end
