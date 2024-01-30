@class NSArray, NSDate;

@interface IMCloudKitSyncState : NSObject

@property (readonly, nonatomic) BOOL accountIsEnabled;
@property (readonly, nonatomic) long long syncState;
@property (readonly, nonatomic) BOOL isSyncing;
@property (readonly, nonatomic) BOOL isSyncingPaused;
@property (readonly, nonatomic) unsigned long long syncControllerSyncState;
@property (readonly, nonatomic) long long syncControllerSyncType;
@property (readonly, nonatomic) long long syncControllerRecordType;
@property (readonly, nonatomic) BOOL isSyncingAvailable;
@property (readonly, nonatomic) BOOL hasExited;
@property (readonly, copy, nonatomic) NSDate *exitDate;
@property (readonly, nonatomic) BOOL isSyncingEnabled;
@property (readonly, nonatomic) long long changingEnabledState;
@property (readonly, nonatomic) BOOL isDisablingDevices;
@property (readonly, nonatomic) BOOL canChangeEnabledSetting;
@property (readonly, nonatomic) BOOL canStartSyncing;
@property (readonly, nonatomic) BOOL canEnableSyncing;
@property (readonly, nonatomic) BOOL isSyncEnabledForDisplayOnly;
@property (readonly, nonatomic) NSDate *lastSyncDate;
@property (readonly, nonatomic) NSArray *errors;
@property (readonly, nonatomic) BOOL syncingFailed;
@property (readonly, nonatomic) long long accountStatus;

+ (id)logHandle;

- (id)logHandle;
- (id)description;
- (void).cxx_destruct;
- (BOOL)_isChangingEnabledState;
- (BOOL)_shouldHideProgressInFirstSevenDays;
- (id)createSyncProgressWithSyncStatistics:(id)a0;
- (id)initWithAccountEnabled:(BOOL)a0 stateDictionary:(id)a1;
- (BOOL)shouldFetchSyncStatistics;
- (BOOL)shouldRescheduleSyncSyncProgress;
- (id)syncErrorWithDomain:(id)a0 code:(long long)a1;

@end
