@class NSString, NSArray, NSObject;
@protocol MKPlaceBatchGuideConsumer, OS_dispatch_queue, MKPlaceBatchGuideFetcher;

@interface MKPlaceBatchController : NSObject <MKPlaceBatchDisplayCoordinator> {
    long long _lastDisplayedIndex;
    unsigned long long _numberOfBatches;
    long long _lastFetchedBatch;
    long long _state;
    NSArray *_batches;
    unsigned long long _totalIdentifiers;
    NSObject<OS_dispatch_queue> *_batchControllerQueue;
}

@property (nonatomic) unsigned long long batchSize;
@property (nonatomic) long long batchType;
@property (nonatomic) unsigned long long minNumberOfItems;
@property (weak, nonatomic) id<MKPlaceBatchGuideFetcher> guideFetcher;
@property (weak, nonatomic) id<MKPlaceBatchGuideConsumer> guideConsumer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)buildBatchesFromIdentifiers:(id)a0;
- (void)didDisplayItemAtIndex:(unsigned long long)a0;
- (void)fetchGuidesWithIdentifiers:(id)a0;
- (void)handleFetchGuidesCompleted:(BOOL)a0 error:(id)a1 usingGuides:(id)a2;
- (long long)lastDisplayedIndexForTesting;
- (long long)stateForTesting;
- (id)initWithGuideIdentifiers:(id)a0 withBatchSize:(unsigned long long)a1 minimumNumberOfItemBeforeFetching:(unsigned long long)a2 shouldLoadFirstBatchImmediately:(BOOL)a3 usingGuideBatchFetcher:(id)a4 usingGuideBatchConsumer:(id)a5;
- (id)batchesForTesting;
- (long long)lastFetchedBatchForTesting;

@end
