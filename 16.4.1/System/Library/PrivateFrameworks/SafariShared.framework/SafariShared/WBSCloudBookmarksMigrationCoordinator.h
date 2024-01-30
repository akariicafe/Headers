@class NSObject;
@protocol WBSSafariBookmarksSyncAgentProtocol, WBSCloudBookmarksMigrationCoordinatorLocalDataProvider, WBSLogger, OS_dispatch_queue;

@interface WBSCloudBookmarksMigrationCoordinator : NSObject {
    id<WBSSafariBookmarksSyncAgentProtocol> _syncAgent;
    NSObject<OS_dispatch_queue> *_processingQueue;
    BOOL _didDetermineReadyToMigrate;
    long long _skipReason;
}

@property (readonly, weak, nonatomic) id<WBSCloudBookmarksMigrationCoordinatorLocalDataProvider> localDataProvider;
@property (readonly, nonatomic) id<WBSSafariBookmarksSyncAgentProtocol> syncAgent;
@property (retain, nonatomic) id<WBSLogger> keyActionsLogger;
@property (nonatomic, getter=isMigrationEnabled) BOOL migrationEnabled;

- (id)init;
- (void).cxx_destruct;
- (void)_beginMigrationIfPossible;
- (void)_considerOverridingOtherMigratingDevice;
- (void)_determineCourseOfActionFromRemoteMigrationState;
- (void)_determineCourseOfActionFromSyncAgentMigrationState;
- (void)_logErrorAsKeyAction:(id)a0;
- (void)_logKeyAction:(id)a0;
- (id)initWithSyncAgent:(id)a0 localDataProvider:(id)a1;
- (void)startCoordinatingMigration;

@end
