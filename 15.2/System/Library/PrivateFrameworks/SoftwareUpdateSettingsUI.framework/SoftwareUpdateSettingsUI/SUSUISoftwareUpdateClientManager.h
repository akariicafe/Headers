@class SUManagerClient, NSString, NSObject, SUAutoInstallOperation;
@protocol OS_dispatch_queue, SUSUISoftwareUpdateClientManagerDelegate;

@interface SUSUISoftwareUpdateClientManager : NSObject <SUManagerClientDelegate, SUAutoInstallOperationDelegate> {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_completionQueue;
    SUManagerClient *_suClient;
    BOOL _autoDownloadEnabled;
    BOOL _autoUpdateEnabled;
    BOOL _autoUpdateScheduled;
    SUAutoInstallOperation *_autoInstallOperation;
}

@property (weak, nonatomic) id<SUSUISoftwareUpdateClientManagerDelegate> delegate;
@property (readonly, retain, nonatomic) SUManagerClient *suManagerClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isAutoUpdateScheduled;
- (void)softwareUpdatePathRestriction:(id /* block */)a0;
- (void)isScanning:(id /* block */)a0;
- (void)download:(id /* block */)a0;
- (void)preferencesChangedCallback:(id)a0;
- (void)purgeDownload:(id /* block */)a0;
- (void).cxx_destruct;
- (void)isDelayingUpdates:(id /* block */)a0;
- (void)autoInstallOperationWasCancelled:(id)a0;
- (void)dealloc;
- (void)autoInstallOperationDidConsent:(id)a0;
- (void)autoInstallOperationIsReadyToInstall:(id)a0 withResponse:(id /* block */)a1;
- (void)autoInstallOperationPasscodePolicyDidChange:(id)a0 passcodePolicyType:(unsigned long long)a1;
- (void)isInstallationKeybagRequired:(id /* block */)a0;
- (void)client:(id)a0 scanRequestDidStartForOptions:(id)a1;
- (void)client:(id)a0 scanRequestDidFinishForOptions:(id)a1 results:(id)a2 error:(id)a3;
- (void)client:(id)a0 downloadDidStart:(id)a1;
- (void)client:(id)a0 downloadProgressDidChange:(id)a1;
- (void)client:(id)a0 downloadDidFail:(id)a1 withError:(id)a2;
- (void)client:(id)a0 downloadDidFinish:(id)a1 withInstallPolicy:(id)a2;
- (void)client:(id)a0 downloadWasInvalidatedForNewUpdatesAvailable:(id)a1;
- (void)client:(id)a0 installDidStart:(id)a1;
- (void)client:(id)a0 installDidFail:(id)a1 withError:(id)a2;
- (void)client:(id)a0 installTonightScheduled:(BOOL)a1 operationID:(id)a2;
- (void)cancelAutoInstall;
- (void)setAutoUpdateScheduled:(BOOL)a0;
- (void)queue_setAutoDownloadEnabledIvar:(BOOL)a0;
- (void)queue_setAutoInstallEnabledIvar:(BOOL)a0;
- (void)queue_setAutoDownloadEnabled:(BOOL)a0;
- (void)queue_setAutoInstallEnabled:(BOOL)a0;
- (void)_queue_setAutoUpdateScheduled:(BOOL)a0;
- (void)_queue_cancelAutoInstall;
- (id)initWithDelegate:(id)a0 completionQueue:(id)a1;
- (void)scanforUpdatesWithOptions:(id)a0 completion:(id /* block */)a1;
- (void)updatesDownloadable:(id)a0 alternateUpdate:(id)a1 completion:(id /* block */)a2;
- (void)startDownloadWithOptions:(id)a0 completion:(id /* block */)a1;
- (void)updateDownloadOptions:(id)a0 completion:(id /* block */)a1;
- (BOOL)isAutoDownloadEnabled;
- (void)enableAutoDownload:(BOOL)a0;
- (void)isUpdateReadyForInstallationWithOpions:(id)a0 completion:(id /* block */)a1;
- (void)installUpdateWithOptions:(id)a0 completion:(id /* block */)a1;
- (void)currentAutoInstallOperation:(BOOL)a0 completion:(id /* block */)a1;
- (BOOL)isAutoInstallEnabled;
- (void)enableAutoInstall:(BOOL)a0;
- (BOOL)isAutoUpdateArmedAndReady;
- (void)createInstallationKeybagWithOptions:(id)a0 completion:(id /* block */)a1;
- (void)destroyInstallationKeybag:(id /* block */)a0;

@end
