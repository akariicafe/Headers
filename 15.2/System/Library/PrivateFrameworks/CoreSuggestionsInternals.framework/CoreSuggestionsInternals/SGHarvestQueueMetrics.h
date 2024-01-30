@class _PASLock, SGM2HarvestCost;

@interface SGHarvestQueueMetrics : NSObject {
    _PASLock *_guardedData;
    SGM2HarvestCost *_harvestCostMetrics;
}

+ (id)overridePET2InstanceForTesting:(id)a0;

- (void)startTimer:(id)a0;
- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0 highPriority:(BOOL)a1 harvestedOnBattery:(BOOL)a2 receivedOnBattery:(BOOL)a3 harvestSource:(int)a4;
- (id)initRealtime:(id)a0 wasNoBudgetItem:(BOOL)a1;
- (id)harvestTimes;
- (id)harvestTimerForName:(id)a0;
- (void)endTimer:(id)a0 significantWork:(BOOL)a1;
- (void)startHarvest;
- (void)endHarvest;
- (int)_documentSourceForBundleId:(id)a0;

@end
