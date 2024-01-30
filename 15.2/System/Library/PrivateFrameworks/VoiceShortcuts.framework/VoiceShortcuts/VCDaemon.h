@class WFSiriWorkflowVocabularyUpdater, VCCKShortcutSyncCoordinator, WFSystemSurfaceWorkflowStatusUpdater, VCWatchSyncCoordinator, VCDaemonSyncDataEndpoint, WFRemoteExecutionCoordinator, VCDaemonXPCEventHandler, VCXPCServer, VCDaemonDatabaseProvider, VCSpotlightSyncService, WFTriggerRegistrar;

@interface VCDaemon : NSObject

@property (readonly, nonatomic) VCXPCServer *xpcServer;
@property (readonly, nonatomic) VCDaemonDatabaseProvider *databaseProvider;
@property (readonly, nonatomic) VCDaemonXPCEventHandler *xpcEventHandler;
@property (readonly, nonatomic) VCDaemonSyncDataEndpoint *syncDataEndpoint;
@property (readonly, nonatomic) WFTriggerRegistrar *triggerRegistrar;
@property (readonly, nonatomic) VCWatchSyncCoordinator *watchSyncCoordinator;
@property (readonly, nonatomic) VCSpotlightSyncService *spotlightLibrarySyncService;
@property (retain, nonatomic) WFSystemSurfaceWorkflowStatusUpdater *systemSurfaceWorkflowStatusUpdater;
@property (retain, nonatomic) WFSiriWorkflowVocabularyUpdater *vocabularyUpdater;
@property (retain, nonatomic) WFRemoteExecutionCoordinator *remoteExecutionCoordinator;
@property (retain, nonatomic) VCCKShortcutSyncCoordinator *shortcutSyncCoordinator;

+ (id)sharedDaemon;

- (void)startEventObservation;
- (void)start;
- (void).cxx_destruct;
- (id)init;
- (void)applicationWasUnregistered:(id)a0;
- (void)addSignalHandlers;

@end
