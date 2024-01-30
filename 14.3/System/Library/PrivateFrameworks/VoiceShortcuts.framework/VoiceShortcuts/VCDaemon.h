@class WFSiriWorkflowVocabularyUpdater, VCShareSheetWorkflowStatusUpdater, VCCKShortcutSyncCoordinator, VCWatchSyncCoordinator, VCDaemonSyncDataEndpoint, VCCoreDuetListener, VCDaemonXPCEventHandler, VCXPCServer, VCDaemonDatabaseProvider, VCSpotlightSyncService, WFRemoteExecutionCoordinator;

@interface VCDaemon : NSObject

@property (readonly, nonatomic) VCXPCServer *xpcServer;
@property (readonly, nonatomic) VCDaemonDatabaseProvider *databaseProvider;
@property (readonly, nonatomic) VCDaemonXPCEventHandler *xpcEventHandler;
@property (readonly, nonatomic) VCDaemonSyncDataEndpoint *syncDataEndpoint;
@property (readonly, nonatomic) VCCoreDuetListener *coreDuetListener;
@property (readonly, nonatomic) VCWatchSyncCoordinator *watchSyncCoordinator;
@property (readonly, nonatomic) VCSpotlightSyncService *spotlightLibrarySyncService;
@property (retain, nonatomic) VCShareSheetWorkflowStatusUpdater *shareSheetStatusUpdater;
@property (retain, nonatomic) WFSiriWorkflowVocabularyUpdater *vocabularyUpdater;
@property (retain, nonatomic) WFRemoteExecutionCoordinator *remoteExecutionCoordinator;
@property (retain, nonatomic) VCCKShortcutSyncCoordinator *shortcutSyncCoordinator;

+ (id)sharedDaemon;

- (id)init;
- (void).cxx_destruct;
- (void)startEventObservation;
- (void)start;
- (void)applicationWasUnregistered:(id)a0;

@end
