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

- (void).cxx_destruct;
- (id)init;
- (void)_logKeyAction:(id)a0;
- (void)_determineCourseOfActionFromSyncAgentMigrationState;
- (void)startCoordinatingMigration;
- (void)_determineCourseOfActionFromRemoteMigrationState;
- (void)_beginMigrationIfPossible;
- (void)_considerOverridingOtherMigratingDevice;
- (id)initWithSyncAgent:(id)a0 localDataProvider:(id)a1;
- (void)_logErrorAsKeyAction:(id)a0;

@end
