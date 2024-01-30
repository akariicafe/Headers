@class NSString, NSDictionary, NSArray, NSNumber;

@interface _DKSync2Policy : NSObject

@property (class, readonly, nonatomic) BOOL rapportSyncDisabled;
@property (class, readonly, nonatomic) BOOL cloudSyncDisabled;

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSNumber *version;
@property (nonatomic) BOOL syncDisabled;
@property (nonatomic) unsigned long long maxSyncPeriodInDays;
@property (nonatomic) unsigned long long maxSyncDownIntervalInDays;
@property (nonatomic) unsigned long long minSyncIntervalInSeconds;
@property (nonatomic) unsigned long long minSyncWindowInSeconds;
@property (nonatomic) unsigned long long minSyncsPerDay;
@property (nonatomic) unsigned long long maxSyncsPerDay;
@property (nonatomic) unsigned long long numChangesTriggeringSync;
@property (nonatomic) unsigned long long policyDownloadIntervalInDays;
@property (nonatomic) BOOL pushTriggersSync;
@property (nonatomic) BOOL requireCharging;
@property (nonatomic) unsigned long long singleDeviceSyncIntervalInDays;
@property (retain, nonatomic) NSDictionary *streamNamesToSync;
@property (retain, nonatomic) NSArray *streamNamesToAlwaysSync;
@property (retain, nonatomic) NSArray *streamNamesWithAdditionsTriggeringSync;
@property (retain, nonatomic) NSArray *streamNamesWithDeletionsTriggeringSync;
@property (nonatomic) unsigned long long syncBatchSizeInEvents;
@property (nonatomic) unsigned long long maxBatchesPerSync;
@property (nonatomic) unsigned long long syncTimeoutInSeconds;
@property (nonatomic) unsigned long long triggeredSyncDelayInSeconds;

+ (id)policyForSyncTransportType:(long long)a0;
+ (id)disabledFeaturesForSyncType:(id)a0 transports:(long long)a1;
+ (id)policyFromDictionary:(id)a0;
+ (void)setOkToDownloadPolicyUpdates:(BOOL)a0;

- (id)streamNamesToSyncWithDisabledFeatures:(id)a0;
- (id)streamNamesToSyncWithSyncType:(id)a0 transportType:(long long)a1;
- (double)hoursBetweenSyncsWhenIsSingleDevice:(BOOL)a0 urgency:(unsigned long long)a1;
- (id)queryStartDateWithSyncType:(id)a0 previousHighWaterMark:(id)a1;
- (id)queryStartDateWithSyncType:(id)a0 lastSyncDate:(id)a1 lastDaySyncCount:(unsigned long long)a2 previousHighWaterMark:(id)a3;
- (BOOL)canDeferSyncOperationWithSyncType:(id)a0;
- (BOOL)highPriorityForSyncDownWithSyncType:(id)a0;
- (BOOL)canPerformSyncOperationWithSyncType:(id)a0 lastSyncDate:(id)a1 lastDaySyncCount:(unsigned long long)a2 isCharging:(BOOL)a3;
- (id)description;
- (void).cxx_destruct;
- (double)hoursBetweenSyncsWhenIsSingleDevice:(BOOL)a0;
- (BOOL)highPriorityForSyncUpWithSyncType:(id)a0 lastSyncDate:(id)a1;

@end
