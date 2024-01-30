@class WLSourceDevice, NSString, WLDataMigrationController, NSObject, BFFNavigationController, WLSourceDevicesController;
@protocol OS_dispatch_queue;

@interface WLWelcomeController : NSObject <WLSourceDevicesDelegate, WLDataMigrationDelegate, BFFNavigationControllerDelegate> {
    BOOL _uiTestMode;
    BOOL _forceUITestModeDownloadError;
    BFFNavigationController *_navigationController;
    WLSourceDevicesController *_sourceDevicesController;
    BOOL _dismissAfterSourceDevicePairingTimeout;
    WLSourceDevice *_sourceDevice;
    BOOL _migrateUsingRetryPolicies;
    unsigned long long _migrationState;
    WLDataMigrationController *_migrationController;
    NSObject<OS_dispatch_queue> *_migrationControllerDelegateQueueTargetedAtMainQueue;
    BOOL _migrationControllerIsRestartable;
    BOOL _migrationConcluded;
}

@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)setNavigationController:(id)a0;
- (void)dataMigratorDidGetInterrupted;
- (void)dataMigrator:(id)a0 didFailWithError:(id)a1;
- (void)sourceDeviceController:(id)a0 didDiscoverDevice:(id)a1;
- (void)dataMigratorDidBecomeRestartable:(id)a0;
- (void)dataMigratorDidFinish:(id)a0 withImportErrors:(BOOL)a1;
- (void)dataMigrator:(id)a0 didUpdateMigrationState:(unsigned long long)a1;
- (void)dataMigrator:(id)a0 didUpdateProgressPercentage:(float)a1;
- (void)dataMigrator:(id)a0 didUpdateRemainingDownloadTime:(double)a1;
- (void)wifiAndDeviceDiscoveryDidGetInterrupted;
- (void)_setStashDataLocally:(BOOL)a0;
- (void)_importLocalContent;
- (void)_configureWelcomeViewController:(id)a0;
- (void)_startPairing;
- (void)_showPairingCode:(id)a0 wifiPSK:(id)a1 ssid:(id)a2;
- (void)_completeWithSuccess:(BOOL)a0;
- (void)_didPairWithSourceDevice:(id)a0;
- (void)_pushViewController:(id)a0 andRemovePreviousTopmostViewControllerWithCompletion:(id /* block */)a1;
- (void)_sourceDevicePairingPeriodDidEnd;
- (void)_showPreparation;
- (void)_startMigration;
- (void)_didCompleteMigrationWithSuccess:(BOOL)a0 retry:(BOOL)a1;
- (void)_showWaitingForDataTypeSelection;
- (void)_showTransferring;
- (void)_updateTransferringForImport;
- (void)_showCompleted;
- (void)_showRetry;
- (id)initWithWelcomeViewController:(id)a0 forceUITestMode:(BOOL)a1 forceUITestModeDownloadError:(BOOL)a2;

@end
