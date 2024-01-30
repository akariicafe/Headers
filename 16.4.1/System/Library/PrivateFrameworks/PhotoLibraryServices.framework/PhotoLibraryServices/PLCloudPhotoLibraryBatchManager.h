@class NSMutableSet, NSMutableArray, PLCloudPhotoLibraryBatchContainer;

@interface PLCloudPhotoLibraryBatchManager : NSObject {
    NSMutableArray *_batches;
    PLCloudPhotoLibraryBatchContainer *_currentBatch;
    BOOL _wasDrained;
    NSMutableSet *_masterHistory;
    unsigned long long _resourceBudget;
}

- (void)addRecord:(id)a0;
- (long long)currentBatchCount;
- (id)drainBatches;
- (BOOL)isAboveMaximumResourceBudget;
- (void)addRecord:(id)a0 ignoreBatchSize:(BOOL)a1;
- (void)dealloc;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)reset;

@end
