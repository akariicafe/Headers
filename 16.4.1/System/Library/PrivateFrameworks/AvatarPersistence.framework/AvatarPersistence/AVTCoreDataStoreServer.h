@class NSXPCStoreServer, AVTCoreEnvironment, NSObject, AVTStickerChangeObserver;
@protocol AVTStoreBackend, OS_dispatch_queue, AVTAvatarRecordChangeTracker, AVTCoreDataStoreMaintenance, AVTAvatarsDaemonServer, AVTBlockScheduler, AVTCoreDataCloudKitMirroringHandler, AVTUILogger, AVTCoreDataPersistentStoreLocalConfiguration, AVTPBackendImageHandlingDelegate, AVTSyncSchedulingAuthority, AVTCoreDataRemoteChangesObserver, AVTPushNotificationsSupport;

@interface AVTCoreDataStoreServer : NSObject <AVTPushNotificationsSupportDelegate, AVTCoreDataCloudKitMirroringHandlerDelegate, AVTAvatarsDaemonServerDelegate, AVTAvatarStoreServer>

@property (readonly, nonatomic) id<AVTPBackendImageHandlingDelegate> imageHandlingDelegate;
@property (readonly, nonatomic) id<AVTStoreBackend> backend;
@property (readonly, nonatomic) AVTCoreEnvironment *environment;
@property (readonly, nonatomic) id<AVTUILogger> logger;
@property (readonly, nonatomic) id<AVTBlockScheduler> blockScheduler;
@property (readonly, nonatomic) id<AVTCoreDataPersistentStoreLocalConfiguration> configuration;
@property (readonly, copy, nonatomic) id /* block */ migratorProvider;
@property (retain, nonatomic) NSXPCStoreServer *server;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *backgroundQueue;
@property (readonly, nonatomic) id<AVTPushNotificationsSupport> pushNotificationsSupport;
@property (readonly, nonatomic) id<AVTCoreDataCloudKitMirroringHandler> mirroringHandler;
@property (readonly, nonatomic) id<AVTSyncSchedulingAuthority> schedulingAuthority;
@property (readonly, nonatomic) id<AVTCoreDataRemoteChangesObserver> remoteChangesObserver;
@property (readonly, nonatomic) AVTStickerChangeObserver *stickerChangeObserver;
@property (readonly, nonatomic) id<AVTAvatarRecordChangeTracker> changeTracker;
@property (readonly, nonatomic) id<AVTAvatarsDaemonServer> daemonServer;
@property (readonly, nonatomic) id<AVTCoreDataStoreMaintenance> storeMaintenance;
@property (nonatomic) BOOL setupCompleted;
@property (copy, nonatomic) id /* block */ migrationActivityCompletion;
@property (copy, nonatomic) id /* block */ userRequestedBackupActivityCompletion;

+ (BOOL)resetSyncShouldPreserveContentForReason:(unsigned long long)a0;

- (void)migrate;
- (void)startListening;
- (void).cxx_destruct;
- (void)didReceivePushNotification:(id)a0;
- (void)setImageHandlingDelegate:(id)a0;
- (BOOL)processInternalSettingsChanges:(id /* block */)a0;
- (void)scheduleImportExportIfRequiredWithPostImportHandler:(id /* block */)a0 completion:(id /* block */)a1;
- (void)clientDidCheckInForServer:(id)a0;
- (void)completeMigrationActivityIfNeeded;
- (void)completeUserRequestedBackupActivityIfNeeded;
- (void)deleteStickerRecents;
- (void)importSetupUserDataIfNeeded;
- (id)initWithEnvironment:(id)a0 imageHandlingDelegate:(id)a1;
- (id)initWithLocalBackend:(id)a0 configuration:(id)a1 migratorProvider:(id /* block */)a2 pushSupport:(id)a3 mirroringHandler:(id)a4 schedulingAuthority:(id)a5 remoteChangesObserver:(id)a6 stickerChangeObserver:(id)a7 changeTracker:(id)a8 daemonServer:(id)a9 storeMaintenance:(id)a10 backgroundQueue:(id)a11 environment:(id)a12 imageHandlingDelegate:(id)a13;
- (void)mirroringHandler:(id)a0 didResetSyncWithReason:(unsigned long long)a1;
- (void)mirroringHandler:(id)a0 willResetSyncWithReason:(unsigned long long)a1;
- (void)scheduleExportWithManagedObjectContext:(id)a0 discretionary:(BOOL)a1 completion:(id /* block */)a2;
- (void)scheduleImportDiscretionary:(BOOL)a0 completionBlock:(id /* block */)a1;
- (void)scheduleMigrationThen:(id /* block */)a0;
- (void)scheduleSetupThen:(id /* block */)a0;
- (void)scheduleUpdateThumbnails;
- (void)setupThen:(id /* block */)a0;
- (void)updateThumbnails;

@end
