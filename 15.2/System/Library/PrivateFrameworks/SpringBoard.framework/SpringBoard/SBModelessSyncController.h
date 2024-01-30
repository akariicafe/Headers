@class ATConnection;

@interface SBModelessSyncController : NSObject {
    int _syncRegistrationToken;
    int _iCloudRestoreToken;
    BOOL _restoringFromICloud;
    ATConnection *_airTrafficConnection;
}

@property (readonly, nonatomic) BOOL isAppSyncing;
@property (readonly, nonatomic) BOOL isSyncing;
@property (readonly, nonatomic) BOOL isRestoringFromICloud;
@property (readonly, nonatomic) BOOL isAutoSyncing;
@property (readonly, nonatomic) BOOL isWirelessSyncing;

+ (id)sharedInstance;

- (void)_beginObservingICloudRestoreStatus;
- (void)endMonitoring;
- (void)_iCloudStatusChanged;
- (void)_appSyncStateChanged;
- (void)_updateIconsForStateChange;
- (void)gotLowBatteryWarning;
- (void)setIsSyncing:(BOOL)a0;
- (void).cxx_destruct;
- (void)beginMonitoring;
- (void)_setAppSyncState:(BOOL)a0;
- (id)init;
- (void)connection:(id)a0 updatedProgress:(id)a1;
- (void)_endObservingICloudRestoreStatus;
- (void)dealloc;
- (void)connectionWasInterrupted:(id)a0;

@end
