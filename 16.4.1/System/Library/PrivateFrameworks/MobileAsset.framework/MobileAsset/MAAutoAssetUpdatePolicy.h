@class NSString, NSArray, NSDictionary, NSUUID;

@interface MAAutoAssetUpdatePolicy : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *updatePolicyName;
@property (readonly, nonatomic) NSString *assetType;
@property (readonly, nonatomic) NSArray *categoryList;
@property (nonatomic) long long checkForNewerIntervalSecs;
@property (nonatomic) long long checkForNewerTimeoutSecs;
@property (nonatomic) BOOL checkForNewerAsUserInitiated;
@property (nonatomic) BOOL checkForNewerWithoutRampEnabled;
@property (nonatomic) BOOL newerFoundAutoDownloadPostponed;
@property (nonatomic) long long newerFoundAutoDownloadJitterSecs;
@property (nonatomic) long long newerFoundAutoDownloadTimeoutSecs;
@property (nonatomic) long long newerFoundUserInitiatedDownloadTimeoutSecs;
@property (nonatomic) BOOL revokeIgnoredForUnlockedPurge;
@property (nonatomic) BOOL revokeIgnoredForLockedContent;
@property (nonatomic) BOOL revokeTriggersLockedPurge;
@property (nonatomic) BOOL allowInterestAcrossTermination;
@property (nonatomic) BOOL allowLockAcrossTermination;
@property (nonatomic) BOOL allowLockAcrossReboot;
@property (nonatomic) BOOL allowLockAcrossOTAUpdate;
@property (nonatomic) BOOL allowLockOfRevokedContent;
@property (nonatomic) BOOL allowLockWhenFilesystemSpaceCritical;
@property (nonatomic) long long defaultUnlockAfterUsageSecs;
@property (nonatomic) long long maximumUnlockAfterUsageSecs;
@property (nonatomic) long long defaultPreventGarbageCollectionSecs;
@property (nonatomic) long long maximumPreventGarbageCollectionSecs;
@property (retain, nonatomic) NSDictionary *additionalUpdatePolicyControl;
@property (nonatomic) BOOL allowAutoCheckForNewerWhenBatteryLow;
@property (nonatomic) BOOL allowAutoCheckForNewerWhenCPUHigh;
@property (nonatomic) BOOL allowAutoCheckForNewerOverExpensive;
@property (nonatomic) BOOL allowAutoDownloadWhenBatteryLow;
@property (nonatomic) BOOL allowAutoDownloadWhenCPUHigh;
@property (nonatomic) BOOL blockIfBeforeFirstUnlock;
@property (nonatomic) BOOL blockAutoCheckForNewerOverCellular;
@property (nonatomic) BOOL blockAutoDownloadOverCellular;
@property (nonatomic) BOOL blockUserInitiatedDownloadOverCellular;
@property (nonatomic) BOOL blockUserInitiatedDownloadWhenBatteryLow;
@property (nonatomic) BOOL blockUserInitiatedDownloadWhenCPUHigh;
@property (nonatomic) BOOL blockUserInitiatedDownloadOverExpensive;
@property (nonatomic) BOOL downloadWithoutPreferenceForWiFi;
@property (retain, nonatomic) id limitCellularByRestrictedTimePeriods;
@property (retain, nonatomic) id limitWiFiByRestrictedTimePeriods;
@property (retain, nonatomic) id limitCellularByFeeAgreement;
@property (retain, nonatomic) id limitByNetworkType;
@property (retain, nonatomic) NSUUID *assetAudienceUUID;

+ (id)activityIntervalString:(long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)summary;
- (id)initUpdatePolicy:(id)a0 forAssetType:(id)a1;
- (id)newSummaryDictionary;
- (id)description;
- (void).cxx_destruct;

@end
