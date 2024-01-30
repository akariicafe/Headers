@class NSString, NSDictionary, NSArray, NSMutableArray, HKQueryAnchor;

@interface HDAnchoredObjectQueryServer : HDBatchedQueryServer {
    BOOL _deliversUpdates;
    BOOL _initialResultsSent;
    BOOL _objectsDeleted;
    BOOL _includeDeletedObjects;
    HKQueryAnchor *_startAnchor;
    NSString *_secureClientToken;
    unsigned long long _deliveredResults;
    NSMutableArray *_addedSamplesPendingDidAddNotification;
    NSMutableArray *_addedSamplesPendingResume;
    NSMutableArray *_deletedSamplesPendingResume;
    NSDictionary *_sampleTypeToFilterMap;
    NSMutableArray *_pendingUpdateBlocks;
    BOOL _updateInProgress;
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
- (void)_queue_start;
- (BOOL)prepareToActivateServerWithError:(id *)a0;
- (void)didAddSamplesOfTypes:(id)a0 anchor:(id)a1;
- (BOOL)_shouldListenForUpdates;
- (void)samplesOfTypesWereRemoved:(id)a0 anchor:(id)a1;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (id)description;
- (id)objectTypes;
- (void)_queue_didDeactivate;
- (BOOL)validateConfiguration:(id *)a0;
- (void)_queue_didChangeStateFromPreviousState:(long long)a0 state:(long long)a1;
- (void).cxx_destruct;

@end
