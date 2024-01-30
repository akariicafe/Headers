@class VCDaemonXPCEventHandler, NSString, NSMutableSet, VCCompanionSyncService, PSYSyncCoordinator, NSObject;
@protocol VCSyncDataEndpoint, OS_dispatch_queue;

@interface VCWatchSyncCoordinator : NSObject <PSYSyncCoordinatorDelegate, VCCompanionSyncServiceDelegate>

@property (readonly, nonatomic) PSYSyncCoordinator *pairedSyncCoordinator;
@property (readonly, nonatomic) NSMutableSet *startedSessions;
@property (readonly, nonatomic) id<VCSyncDataEndpoint> syncDataEndpoint;
@property (readonly, nonatomic) VCDaemonXPCEventHandler *eventHandler;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) VCCompanionSyncService *service;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleDeviceDidChangeVersionNotification;
- (void)companionSyncService:(id)a0 outgoingSyncSession:(id)a1 didUpdateProgress:(double)a2;
- (long long)companionSyncService:(id)a0 typeForSession:(id)a1;
- (void)syncCoordinator:(id)a0 didInvalidateSyncSession:(id)a1;
- (void)companionSyncService:(id)a0 didFinishSyncSession:(id)a1 withError:(id)a2;
- (void)companionSyncService:(id)a0 didRejectSessionWithError:(id)a1;
- (id)initWithSyncDataEndpoint:(id)a0 eventHandler:(id)a1;
- (void)stopObservingWatchChangeNotifications;
- (void).cxx_destruct;
- (void)handleDidUnpairNotification:(id)a0;
- (void)requestSyncIfUnrestricted;
- (void)startObservingWatchChangeNotifications;
- (void)companionSyncService:(id)a0 outgoingSyncSessionDidFinishSendingChanges:(id)a1;
- (BOOL)companionSyncServiceShouldStartSession:(id)a0;
- (void)dealloc;
- (void)syncCoordinatorDidChangeSyncRestriction:(id)a0;
- (void)syncCoordinator:(id)a0 beginSyncSession:(id)a1;

@end
