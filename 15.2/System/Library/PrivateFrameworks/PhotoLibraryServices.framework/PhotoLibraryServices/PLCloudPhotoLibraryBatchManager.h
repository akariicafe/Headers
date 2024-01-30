@class NSMutableSet, NSMutableArray, PLCloudPhotoLibraryBatchContainer;

@interface PLCloudPhotoLibraryBatchManager : NSObject {
    NSMutableArray *_batches;
    PLCloudPhotoLibraryBatchContainer *_currentBatch;
    BOOL _wasDrained;
    NSMutableSet *_masterHistory;
    unsigned long long _resourceBudget;
}

- (void)addRecord:(id)a0;
- (BOOL)isAboveMaximumResourceBudget;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (void)addRecord:(id)a0 ignoreBatchSize:(BOOL)a1;
- (void)dealloc;
- (long long)currentBatchCount;
- (void)reset;
- (id)drainBatches;

@end
