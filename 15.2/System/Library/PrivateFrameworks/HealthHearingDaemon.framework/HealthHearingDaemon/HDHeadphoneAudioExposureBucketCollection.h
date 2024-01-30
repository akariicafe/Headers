@class NSMutableArray;

@interface HDHeadphoneAudioExposureBucketCollection : NSObject {
    NSMutableArray *_storage;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (nonatomic, getter=isDirty) BOOL dirty;

- (void)clear;
- (id)unitTesting_snapshotBuckets;
- (void).cxx_destruct;
- (id)init;
- (id)snapshotStatisticsForNowDate:(id)a0 error:(id *)a1;
- (void)insertBuckets:(id)a0;
- (id)copyWithEarliestStartDate:(id)a0 resetDoseToZero:(BOOL)a1 error:(id *)a2;
- (id)initWithBuckets:(id)a0;
- (id)_lock_snapshotStatisticsForNowDate:(id)a0 error:(id *)a1;
- (id)_lock_updateWithSampleBatch:(id)a0 error:(id *)a1;
- (void)pruneWithNowDate:(id)a0;
- (id)_updateWithSampleBatch:(id)a0 needsRebuild:(BOOL *)a1 error:(id *)a2;
- (id)_bucketsWithEarliestStartDate:(id)a0 resetDoseToZero:(BOOL)a1 error:(id *)a2;

@end
