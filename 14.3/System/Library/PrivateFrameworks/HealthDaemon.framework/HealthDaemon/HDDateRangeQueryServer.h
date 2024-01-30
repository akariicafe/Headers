@class NSString, NSMutableDictionary, NSMutableSet;

@interface HDDateRangeQueryServer : HDQueryServer <HDDataObserver, HDDatabaseProtectedDataObserver> {
    BOOL _resultsDirty;
    NSMutableDictionary *_dateIntervalsBySampleType;
    NSMutableSet *_sampleTypesToReFetch;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)queryClass;

- (void).cxx_destruct;
- (BOOL)_shouldListenForUpdates;
- (void)_queue_start;
- (void)samplesAdded:(id)a0 anchor:(id)a1;
- (void)samplesOfTypesWereRemoved:(id)a0 anchor:(id)a1;
- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void)_deliverErrorToClient:(id)a0;
- (BOOL)_shouldObserveAllSampleTypes;
- (void)_queue_sendUpdatedResultsToClient;
- (void)_queue_samplesAdded:(id)a0;
- (void)_queue_samplesOfTypesWereRemoved:(id)a0;
- (void)_queue_updateTimePeriodsForSampleTypes:(id)a0;
- (id)dateRangeClientProxy;
- (void)_queue_protectedDataBecameAvailable;

@end
