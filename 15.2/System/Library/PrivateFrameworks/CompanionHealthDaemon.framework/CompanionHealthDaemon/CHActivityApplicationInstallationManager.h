@class NSString, HDProfile, ASDSystemAppRequest, NSObject;
@protocol OS_dispatch_queue;

@interface CHActivityApplicationInstallationManager : NSObject <HDHealthDaemonReadyObserver, HDNanoSyncManagerObserver> {
    HDProfile *_profile;
    BOOL _installationRequestInProgress;
    ASDSystemAppRequest *_systemAppRequest;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)daemonReady:(id)a0;
- (id)initWithProfile:(id)a0;
- (void)_queue_requestActivityAppInstallIfNecessaryWithPairedDeviceSnapshot:(id)a0;
- (void)_setAndNotifyStickersAvailable:(BOOL)a0;
- (void)_applicationsUninstalled:(id)a0;
- (void).cxx_destruct;
- (void)nanoSyncManager:(id)a0 pairedDevicesChanged:(id)a1;
- (void)_queue_startInstalling;
- (void)_cleanupInstallRequest;
- (void)_requestActivityAppInstallIfNecessaryWithPairedDeviceSnapshot:(id)a0;
- (void)dealloc;
- (void)_queue_cleanupInstallRequest;
- (void)_applicationsInstalled:(id)a0;

@end
