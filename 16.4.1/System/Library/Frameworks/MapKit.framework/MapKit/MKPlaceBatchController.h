@class NSString, NSArray, NSObject;
@protocol MKPlaceBatchFetcher, OS_dispatch_queue, MKPlaceBatchConsumer;

@interface MKPlaceBatchController : NSObject <MKPlaceBatchDisplayCoordinator> {
    long long _lastDisplayedIndex;
    unsigned long long _numberOfBatches;
    long long _lastFetchedBatch;
    long long _state;
    NSArray *_batches;
    unsigned long long _totalIdentifiers;
    unsigned long long _totalIdentifiersFetched;
    NSObject<OS_dispatch_queue> *_batchControllerQueue;
}

@property (nonatomic) unsigned long long batchSize;
@property (nonatomic) unsigned long long minNumberOfItems;
@property (weak, nonatomic) id<MKPlaceBatchFetcher> batchFetcher;
@property (weak, nonatomic) id<MKPlaceBatchConsumer> batchConsumer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (long long)stateForTesting;
- (void)fetchBatchItemsWithIdentifiers:(id)a0;
- (id)batchesForTesting;
- (void)buildBatchesFromIdentifiers:(id)a0;
- (void)didDisplayItemAtIndex:(unsigned long long)a0;
- (void)handleFetchGuidesCompleted:(BOOL)a0 error:(id)a1 usingGuides:(id)a2;
- (id)initWithItemIdentifiers:(id)a0 withBatchSize:(unsigned long long)a1 minimumNumberOfItemBeforeFetching:(unsigned long long)a2 shouldLoadFirstBatchImmediately:(BOOL)a3 usingBatchFetcher:(id)a4 usingBatchConsumer:(id)a5 displayedItemCount:(unsigned long long)a6;
- (long long)lastDisplayedIndexForTesting;
- (long long)lastFetchedBatchForTesting;

@end
