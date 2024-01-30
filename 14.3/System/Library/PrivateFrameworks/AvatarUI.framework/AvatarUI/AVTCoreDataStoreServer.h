@class AVTAvatarRecordImageGenerator, NSXPCStoreServer, AVTCoreEnvironment, NSObject, AVTStickerChangeObserver;
@protocol AVTPushNotificationsSupport, AVTStoreBackend, AVTSyncSchedulingAuthority, AVTAvatarsDaemonServer, AVTCoreDataCloudKitMirroringHandler, AVTBlockScheduler, OS_dispatch_queue, AVTUILogger, AVTCoreDataPersistentStoreLocalConfiguration, AVTCoreDataRemoteChangesObserver, AVTAvatarRecordChangeTracker, AVTCoreDataStoreMaintenance;

@interface AVTCoreDataStoreServer : NSObject <AVTPushNotificationsSupportDelegate, AVTCoreDataCloudKitMirroringHandlerDelegate, AVTAvatarsDaemonServerDelegate, AVTAvatarStoreServer>

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
@property (readonly, nonatomic) AVTAvatarRecordImageGenerator *imageGenerator;
@property (readonly, nonatomic) AVTStickerChangeObserver *stickerChangeObserver;
@property (readonly, nonatomic) id<AVTAvatarRecordChangeTracker> changeTracker;
@property (readonly, nonatomic) id<AVTAvatarsDaemonServer> daemonServer;
@property (readonly, nonatomic) id<AVTCoreDataStoreMaintenance> storeMaintenance;
@property (nonatomic) BOOL setupCompleted;
@property (copy, nonatomic) id /* block */ migrationActivityCompletion;
@property (copy, nonatomic) id /* block */ userRequestedBackupActivityCompletion;

+ (id)imageGeneratorForEnvironment:(id)a0;
+ (BOOL)resetSyncShouldPreserveContentForReason:(unsigned long long)a0;

- (void)setupThen:(id /* block */)a0;
- (BOOL)processInternalSettingsChanges:(id /* block */)a0;
- (id)initWithLocalBackend:(id)a0 configuration:(id)a1 migratorProvider:(id /* block */)a2 pushSupport:(id)a3 mirroringHandler:(id)a4 schedulingAuthority:(id)a5 remoteChangesObserver:(id)a6 imageGenerator:(id)a7 stickerChangeObserver:(id)a8 changeTracker:(id)a9 daemonServer:(id)a10 storeMaintenance:(id)a11 backgroundQueue:(id)a12 environment:(id)a13;
- (void)scheduleExportWithManagedObjectContext:(id)a0 discretionary:(BOOL)a1 completion:(id /* block */)a2;
- (void)scheduleUpdateThumbnails;
- (void)deleteStickerRecents;
- (void)completeMigrationActivityIfNeeded;
- (void)scheduleSetupThen:(id /* block */)a0;
- (void)completeUserRequestedBackupActivityIfNeeded;
- (void)scheduleImportExportIfRequiredWithPostImportHandler:(id /* block */)a0 completion:(id /* block */)a1;
- (void)updateThumbnails;
- (void)scheduleMigrationThen:(id /* block */)a0;
- (void)scheduleImportDiscretionary:(BOOL)a0 completionBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (void)clientDidCheckInForServer:(id)a0;
- (id)initWithEnvironment:(id)a0;
- (void)migrate;
- (void)startListening;
- (void)mirroringHandler:(id)a0 willResetSyncWithReason:(unsigned long long)a1;
- (void)mirroringHandler:(id)a0 didResetSyncWithReason:(unsigned long long)a1;
- (void)didReceivePushNotification:(id)a0;

@end
