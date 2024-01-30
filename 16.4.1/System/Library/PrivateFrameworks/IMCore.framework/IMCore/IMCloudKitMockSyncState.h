@class NSArray, NSDate;

@interface IMCloudKitMockSyncState : NSObject

@property BOOL IMCloudKitSyncingEnabled;
@property BOOL IMCloudKitIsSyncing;
@property BOOL IMCloudKitSyncPaused;
@property BOOL IMCloudKitIsEligibleForTruthZone;
@property BOOL IMCloudKitIsInExitState;
@property BOOL IMCloudKitIsRemovedFromBackup;
@property (retain) NSDate *IMCloudKitSyncDate;
@property BOOL IMCloudKitStartingPeriodicSync;
@property BOOL IMCloudKitStartingInitialSync;
@property long long IMCloudKitStartingEnabledSettingChange;
@property BOOL IMCloudKitStartingDisableDevices;
@property unsigned long long IMCloudKitSyncControllerSyncState;
@property long long IMCloudKitSyncControllerSyncType;
@property long long IMCloudKitSyncControllerSyncRecordType;
@property (retain) NSArray *IMCloudKitSyncErrors;

- (void).cxx_destruct;
- (id)convertToDictionary;

@end
