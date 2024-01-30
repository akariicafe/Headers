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

- (void)connectionWasInterrupted:(id)a0;
- (void)beginMonitoring;
- (void)_updateIconsForStateChange;
- (void)setIsSyncing:(BOOL)a0;
- (id)init;
- (void)_iCloudStatusChanged;
- (void).cxx_destruct;
- (void)dealloc;
- (void)connection:(id)a0 updatedProgress:(id)a1;
- (void)_setAppSyncState:(BOOL)a0;
- (void)gotLowBatteryWarning;
- (void)_endObservingICloudRestoreStatus;
- (void)_beginObservingICloudRestoreStatus;
- (void)_appSyncStateChanged;
- (void)endMonitoring;

@end
