@interface PLSpotlightProgressManager : NSObject

+ (id)_progressFilePathForPhotoLibraryPathManager:(id)a0;
+ (BOOL)deleteSpotlightProgressForPhotoLibraryPathManager:(id)a0;
+ (id)_readProgressFromDiskForPhotoLibraryPathManager:(id)a0;
+ (BOOL)_shouldRetryRequestWithMostRecentAttemptOf:(id)a0;
+ (BOOL)shouldPerformSpotlightOperationsWithPhotoLibraryPathManager:(id)a0;
+ (id)_updateFailureCountsForSearchableItemIdentifiers:(id)a0 shouldIncrementCounts:(BOOL)a1 forPhotoLibraryPathManager:(id)a2;
+ (BOOL)setSpotlightIndexNeedsReindexing:(BOOL)a0 forPhotoLibraryPathManager:(id)a1;
+ (BOOL)shouldReindexSpotlightIndexForPhotoLibraryPathManager:(id)a0;
+ (id)_storageKeyForOperationType:(unsigned long long)a0;
+ (BOOL)shouldPerformSpotlightOperationOfType:(unsigned long long)a0 withSearchableItemIdentifiers:(id)a1 photoLibraryPathManager:(id)a2;
+ (BOOL)_writeProgressToDisk:(id)a0 forPhotoLibraryPathManager:(id)a1;
+ (void)spotlightProgressForPhotoLibraryPathManager:(id)a0 completion:(id /* block */)a1;
+ (BOOL)removeSearchableItemIdentifiers:(id)a0 forPhotoLibraryPathManager:(id)a1;
+ (BOOL)_addSearchableItemIdentifiers:(id)a0 operationType:(unsigned long long)a1 forPhotoLibraryPathManager:(id)a2 isRetry:(BOOL)a3;
+ (BOOL)_shouldRetryReindexWithScheduledDateOf:(id)a0;
+ (id)_minimumScheduledDateForNextReindexRetry;
+ (BOOL)addSearchableItemIdentifiers:(id)a0 forOperationType:(unsigned long long)a1 forPhotoLibraryPathManager:(id)a2;
+ (BOOL)spotlightResetOperationCompletedForPhotoLibraryPathManager:(id)a0 success:(BOOL)a1;
+ (BOOL)spotlightOperationCompletedForOperationType:(unsigned long long)a0 withSearchableIdentifiers:(id)a1 forPhotoLibraryPathManager:(id)a2 success:(BOOL)a3;

@end
