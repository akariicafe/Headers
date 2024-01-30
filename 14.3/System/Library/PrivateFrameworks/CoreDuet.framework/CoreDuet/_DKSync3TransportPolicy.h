@class NSDictionary, NSString;

@interface _DKSync3TransportPolicy : NSObject <_DKSync3PolicyCommonMethods> {
    BOOL _isSyncDisabled;
    NSString *_name;
    NSString *_transport;
    unsigned long long _maximumSyncsPerDay;
    unsigned long long _syncBatchSizeInEvents;
    unsigned long long _maximumBatchesPerSync;
    unsigned long long _minimumSyncWindowInSeconds;
    unsigned long long _minimumTimeBetweenSyncsInSeconds;
    unsigned long long _singleDevicePeriodicSyncCadenceInDays;
    unsigned long long _additionsBucketCountTriggeringSync;
    unsigned long long _deletionsBucketCountTriggeringSync;
}

@property (retain, nonatomic) NSDictionary *properties;

- (id)init;
- (void).cxx_destruct;
- (id)description;

@end
