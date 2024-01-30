@class NSMutableDictionary, NSMutableArray, LBFTrialStatusDetector;

@interface LBFAggregator : NSObject

@property (readonly, nonatomic) LBFTrialStatusDetector *trialStatusDetector;
@property (readonly, nonatomic) NSMutableArray *buckets;
@property (readonly, nonatomic) NSMutableDictionary *stateDict;
@property (nonatomic) BOOL strictDictChecks;

- (id)init;
- (void).cxx_destruct;
- (BOOL)fetchEvents;
- (BOOL)upload;
- (id)dateToStringInUTCAndLocal:(id)a0;
- (id)dumpAggregate;
- (BOOL)dumpFetchedEvents;
- (void)dumpTimestamps;
- (id)ensureDeploymentEventsHolderInBucket:(id)a0 bucketIndex:(unsigned long long)a1;
- (id)ensureExperimentEventsHolderInBucket:(id)a0 bucketIndex:(unsigned long long)a1;
- (void)enumerateAggregation:(id /* block */)a0;
- (BOOL)fetchBucket:(long long)a0;
- (BOOL)fetchBuckets:(id)a0;
- (id)fetchedEventsInDictionaries;
- (id)getAggregatedStatesUpdateTimestamp:(BOOL)a0 skipNullIdentifiers:(BOOL)a1;
- (id)getBucketEndDate;
- (id)getBucketsNotAggregated;
- (id)getTransitionProcessingEventArray:(id)a0 mlRuntimeInCurrentBucket:(BOOL)a1 mlRuntimeInPreviousBucket:(BOOL)a2;
- (id)getTrialIdentifierFromBMEvent:(id)a0;
- (BOOL)setUpBuckets;
- (BOOL)upload:(BOOL)a0 uploadRawEvents:(BOOL)a1 skipNullIdentifiers:(BOOL)a2;

@end
