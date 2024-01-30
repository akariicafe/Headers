@class NSMutableSet, NSMutableArray, PLCloudPhotoLibraryBatchContainer;

@interface PLCloudPhotoLibraryBatchManager : NSObject {
    NSMutableArray *_batches;
    PLCloudPhotoLibraryBatchContainer *_currentBatch;
    BOOL _wasDrained;
    NSMutableSet *_masterHistory;
    unsigned long long _resourceBudget;
}

- (void)addRecord:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)dealloc;
- (id)drainBatches;
- (BOOL)isAboveMaximumResourceBudget;
- (void)addRecord:(id)a0 ignoreBatchSize:(BOOL)a1;
- (long long)currentBatchCount;
- (id)description;

@end
