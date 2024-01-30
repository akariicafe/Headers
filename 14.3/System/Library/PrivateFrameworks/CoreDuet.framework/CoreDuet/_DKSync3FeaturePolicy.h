@class NSDictionary, NSString, NSArray;

@interface _DKSync3FeaturePolicy : NSObject <_DKSync3PolicyCommonMethods> {
    BOOL _isSyncDisabled;
    BOOL _onlyMultiDevice;
    BOOL _onlySingleDevice;
    BOOL _requiresCharging;
    BOOL _pushTriggersSync;
    BOOL _additionsCountTowardTriggeredSyncBucket;
    BOOL _deletionsCountTowardTriggeredSyncBucket;
    BOOL _additionTriggersImmediateSync;
    BOOL _deletionTriggersImmediateSync;
    NSString *_name;
    NSString *_feature;
    NSArray *_streamNames;
    NSArray *_sources;
    NSArray *_destinations;
    NSString *_transport;
    unsigned long long _periodicSyncCadenceInMinutes;
    unsigned long long _oldestEventToSyncInDays;
    NSArray *_requiresCompanions;
}

@property (retain, nonatomic) NSDictionary *properties;

- (id)init;
- (void).cxx_destruct;
- (id)description;

@end
