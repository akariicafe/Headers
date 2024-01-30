@class _PASLock, SGM2HarvestCost;

@interface SGHarvestQueueMetrics : NSObject {
    _PASLock *_guardedData;
    SGM2HarvestCost *_harvestCostMetrics;
}

+ (id)overridePET2InstanceForTesting:(id)a0;

- (id)initWithItem:(id)a0;
- (void).cxx_destruct;
- (void)startTimer:(id)a0;
- (id)initRealtime:(id)a0 wasNoBudgetItem:(BOOL)a1;
- (id)harvestTimes;
- (id)harvestTimerForName:(id)a0;
- (void)endTimer:(id)a0 significantWork:(BOOL)a1;
- (void)startHarvest;
- (void)endHarvest;
- (int)_harvestSourceFromItemStorageReason:(int)a0;
- (int)_documentSourceForBundleId:(id)a0;

@end
