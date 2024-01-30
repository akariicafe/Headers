@class NSString, NSDictionary, NSArray, NSMutableArray, HKQueryAnchor;

@interface HDAnchoredObjectQueryServer : HDBatchedQueryServer {
    BOOL _deliversUpdates;
    BOOL _initialResultsSent;
    BOOL _objectsDeleted;
    BOOL _includeDeletedObjects;
    HKQueryAnchor *_startAnchor;
    NSString *_secureClientToken;
    unsigned long long _deliveredResults;
    NSMutableArray *_addedSamplesPendingResume;
    NSMutableArray *_deletedSamplesPendingResume;
    NSDictionary *_sampleTypeToFilterMap;
    BOOL _includeAutomaticTimeZones;
    BOOL _includeContributorInformation;
    HKQueryAnchor *_anchor;
    unsigned long long _limit;
    NSArray *_queryDescriptors;
    NSString *_localSourceUUIDString;
}

+ (id)requiredEntitlements;
+ (BOOL)supportsAnchorBasedAuthorization;
+ (Class)queryClass;

- (void)samplesAdded:(id)a0 anchor:(id)a1;
- (id)objectTypes;
- (void)samplesOfTypesWereRemoved:(id)a0 anchor:(id)a1;
- (BOOL)_shouldListenForUpdates;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void)_queue_start;
- (id)description;
- (BOOL)validateConfiguration:(id *)a0;
- (void).cxx_destruct;
- (BOOL)prepareToActivateServerWithError:(id *)a0;
- (void)_queue_didDeactivate;
- (void)_queue_didChangeStateFromPreviousState:(long long)a0 state:(long long)a1;

@end
