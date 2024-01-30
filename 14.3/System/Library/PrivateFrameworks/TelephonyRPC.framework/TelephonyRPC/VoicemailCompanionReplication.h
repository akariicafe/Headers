@class PSYServiceSyncSession, NSString, NPHVMSyncSessionManager, PSYSyncCoordinator, NSObject, NSMutableArray, NPSDomainAccessor, SYService, VMVoicemailManager;
@protocol OS_dispatch_queue, OS_os_transaction, OS_dispatch_semaphore;

@interface VoicemailCompanionReplication : NSObject <SYServiceDelegate, PSYSyncCoordinatorDelegate, NPHVMSessionDelegate> {
    NPSDomainAccessor *_domainAccessor;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _domainAccessorMutexLock;
    NSObject<OS_dispatch_queue> *_companionSyncQueue;
    NSObject<OS_dispatch_queue> *_concurrentQueue;
    NSObject<OS_dispatch_queue> *_vmSyncServiceQueue;
    NSMutableArray *_vmAfterSyncComplete;
    PSYSyncCoordinator *_coordinator;
    NPHVMSyncSessionManager *_vmSyncSessionManager;
    PSYServiceSyncSession *_vmServiceSyncSession;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _syncTransactionMutex;
    NSObject<OS_os_transaction> *_syncTransaction;
    VMVoicemailManager *_voicemailManager;
    BOOL _deltaSyncSuccessful;
    NSObject<OS_dispatch_semaphore> *waitForFirstSyncRestrictionSemaphore;
    BOOL _didSuspendCompanionSyncQueue;
    NSObject<OS_dispatch_semaphore> *vmdIsReadySemaphore;
    BOOL _syncRestrictionsAtStartup;
}

@property BOOL sigtermCalled;
@property (retain, nonatomic) SYService *vmSyncService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_registerForNotifications;
- (id)init;
- (BOOL)service:(id)a0 startSession:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (void)dealloc;
- (void)syncCoordinator:(id)a0 beginSyncSession:(id)a1;
- (void)syncSession:(id)a0 applyChanges:(id)a1 completion:(id /* block */)a2;
- (void)syncSession:(id)a0 didEndWithError:(id)a1;
- (BOOL)syncSession:(id)a0 resetDataStoreWithError:(id *)a1;
- (void)serviceDidPairDevice:(id)a0;
- (void)syncCoordinator:(id)a0 didInvalidateSyncSession:(id)a1;
- (void)service:(id)a0 sessionEnded:(id)a1 error:(id)a2;
- (void)service:(id)a0 encounteredError:(id)a1 context:(id)a2;
- (void)syncCoordinatorDidChangeSyncRestriction:(id)a0;
- (void)reportProgress:(double)a0;
- (void)_handleVoicemailsChangedNotification:(id)a0;
- (void)_deltaSyncIsReunion:(BOOL)a0;
- (void)_performAfterFirstDeviceUnlockAndSyncRestrictionNone:(id /* block */)a0;
- (id)vmMetaVoicemailsToSync;
- (id)voicemailChangeSetFrom:(id)a0;
- (id)listOfVoicemailsToSync;
- (id)remoteVoicemails;
- (void)_initializeDomainAccessor;
- (void)setRemoteVoicemails:(id)a0;
- (void)_retrySyncSession:(id)a0;
- (void)removeFromRemoteVoicemails:(id)a0;
- (id)changeSetForRemoteVoicemails:(id)a0 fromVMVoicemails:(id)a1;
- (void)_handleVoicemailSubscriptionStateStatusChanged:(id)a0;
- (void)waitForVMDToBeUpAndRunning;
- (void)_enqueueAllVoicemailsAndLockSyncTransactionMutex;
- (long long)indexOfVoicemail:(id)a0 inArray:(id)a1;
- (void)handleSIGTERM;

@end
