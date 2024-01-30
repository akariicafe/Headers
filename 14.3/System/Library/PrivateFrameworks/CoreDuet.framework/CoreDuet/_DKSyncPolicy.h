@class NSArray;

@interface _DKSyncPolicy : NSObject {
    BOOL _syncDisabled;
    BOOL _alwaysSyncUpAndDown;
    BOOL _pushTriggersSync;
    BOOL _forceSync;
    unsigned long long _assetThresholdInBytes;
    unsigned long long _firstSyncPeriodInDays;
    unsigned long long _maxSyncDownIntervalInDays;
    unsigned long long _minSyncIntervalInSeconds;
    unsigned long long _minSyncsPerDay;
    unsigned long long _maxSyncsPerDay;
    unsigned long long _numChangesTriggeringSync;
    unsigned long long _singleDeviceSyncIntervalInDays;
    NSArray *_streamNamesWithAdditionsTriggeringSync;
    NSArray *_streamNamesWithDeletionsTriggeringSync;
    unsigned long long _syncTimeoutInSeconds;
    unsigned long long _triggeredSyncDelayInSeconds;
    unsigned long long _policyDownloadIntervalInDays;
}

@property (readonly, nonatomic) BOOL syncDisabled;
@property (readonly, nonatomic) BOOL alwaysSyncUpAndDown;
@property (readonly, nonatomic) unsigned long long assetThresholdInBytes;
@property (readonly, nonatomic) unsigned long long firstSyncPeriodInDays;
@property (readonly, nonatomic) unsigned long long maxSyncDownIntervalInDays;
@property (readonly, nonatomic) unsigned long long minSyncIntervalInSeconds;
@property (readonly, nonatomic) unsigned long long minSyncsPerDay;
@property (readonly, nonatomic) unsigned long long maxSyncsPerDay;
@property (readonly, nonatomic) unsigned long long numChangesTriggeringSync;
@property (readonly, nonatomic) BOOL pushTriggersSync;
@property (readonly, nonatomic) unsigned long long singleDeviceSyncIntervalInDays;
@property (readonly, nonatomic) NSArray *streamNamesWithAdditionsTriggeringSync;
@property (readonly, nonatomic) NSArray *streamNamesWithDeletionsTriggeringSync;
@property (readonly, nonatomic) unsigned long long syncTimeoutInSeconds;
@property (readonly, nonatomic) unsigned long long triggeredSyncDelayInSeconds;
@property (readonly, nonatomic) BOOL forceSync;

+ (id)policy;
+ (id)forceSyncPolicy;

- (void).cxx_destruct;
- (double)hoursBetweenSyncsWhenIsSingleDevice:(BOOL)a0;
- (id)description;
- (id)queryStartDateFromLastDaySyncDates:(id)a0 lastSyncDate:(id)a1 isSingleDevice:(BOOL)a2 isTriggeredSync:(BOOL)a3;

@end
