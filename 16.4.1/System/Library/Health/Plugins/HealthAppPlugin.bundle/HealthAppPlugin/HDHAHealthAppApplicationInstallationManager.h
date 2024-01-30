@class NSString, HDProfile, ASDSystemAppRequest, NSObject;
@protocol OS_dispatch_queue;

@interface HDHAHealthAppApplicationInstallationManager : NSObject <HDHealthDaemonReadyObserver, HDNanoSyncManagerObserver, HDProfileManagerObserver> {
    HDProfile *_profile;
    BOOL _installationRequestInProgress;
    ASDSystemAppRequest *_systemAppRequest;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)profileListDidChange;
- (void)_queue_installHealthAppIfTinkerProfileExists;
- (void)daemonReady:(id)a0;
- (id)initWithProfile:(id)a0;
- (void)_queue_cleanupInstallRequest;
- (void)_requestHealthAppInstallIfNecessaryWithPairedDeviceSnapshot:(id)a0;
- (void)dealloc;
- (void)_cleanupInstallRequest;
- (void)nanoSyncManager:(id)a0 pairedDevicesChanged:(id)a1;
- (void)_queue_requestHealthAppInstallIfNecessaryWithPairedDeviceSnapshot:(id)a0;
- (void)_queue_startInstalling;
- (void).cxx_destruct;

@end
