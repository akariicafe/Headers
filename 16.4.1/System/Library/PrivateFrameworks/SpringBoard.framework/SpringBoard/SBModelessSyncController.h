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
- (void)connection:(id)a0 updatedProgress:(id)a1;
- (void)_appSyncStateChanged;
- (void)endMonitoring;
- (void)_endObservingICloudRestoreStatus;
- (void)_iCloudStatusChanged;
- (void)beginMonitoring;
- (void)setIsSyncing:(BOOL)a0;
- (void)gotLowBatteryWarning;
- (void)dealloc;
- (void)_beginObservingICloudRestoreStatus;
- (id)init;
- (void)_updateIconsForStateChange;
- (void)_setAppSyncState:(BOOL)a0;
- (void).cxx_destruct;

@end
