@class NSString, NSSet, SYService, WFDebouncer, VCCompanionSyncSession, NSObject, VCNRDeviceSyncService;
@protocol OS_dispatch_queue, VCSyncDataEndpoint, VCCompanionSyncServiceDelegate;

@interface VCCompanionSyncService : NSObject <SYServiceDelegate, VCCompanionSyncSessionDelegate>

@property (readonly, nonatomic) SYService *service;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) id<VCSyncDataEndpoint> syncDataEndpoint;
@property (readonly, nonatomic) WFDebouncer *debouncer;
@property (copy, nonatomic) NSSet *currentDataHandlers;
@property (retain, nonatomic) VCCompanionSyncSession *currentSession;
@property (copy, nonatomic) VCNRDeviceSyncService *currentSyncService;
@property (weak, nonatomic) id<VCCompanionSyncServiceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)service:(id)a0 startSession:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (void)updateCurrentSyncServiceIfNecessary;
- (void)companionSyncSession:(id)a0 didFinishWithError:(id)a1;
- (void)dealloc;
- (void)service:(id)a0 willSwitchFromPairingID:(id)a1 toPairingID:(id)a2;
- (void)requestSyncImmediately;
- (void)companionSyncSessionDidFinishSendingChanges:(id)a0;
- (void)requestSync;
- (void)configureReasonForUnderlyingSession:(id)a0 withSession:(id)a1;
- (void)service:(id)a0 encounteredError:(id)a1 context:(id)a2;
- (void)service:(id)a0 didSwitchFromPairingID:(id)a1 toPairingID:(id)a2;
- (void)requestFullResync;
- (void)updateSyncDataHandlers;
- (void)companionSyncSession:(id)a0 didUpdateProgress:(double)a1;
- (void)resetSession;
- (void)resumeServiceIfNecessary;
- (BOOL)isRunningOnWatch;
- (id)initWithSyncDataEndpoint:(id)a0;

@end
