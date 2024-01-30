@class NSArray;

@interface PLAccountingDebugService : PLService

@property (retain, nonatomic) NSArray *testNames;

+ (void)load;
+ (void)printError:(id)a0;

- (void)testCorrection3;
- (BOOL)verifyLastPowerEventWithRootNodeID:(int)a0 withPower:(double)a1;
- (BOOL)verifyLastDistributionEventWithDistributionID:(int)a0 withNodeName:(id)a1 withWeight:(double)a2;
- (void)testDistribution3;
- (void)testChunk;
- (BOOL)verifyTotalEnergyWithNodeName:(id)a0 withTotalEnergy:(double)a1 withRootNodeID:(int)a2 withEpsilon:(double)a3;
- (void)testCurrentDistributionEventForward;
- (void)testQualification1;
- (void)blockingLogGasGaugeWithTotalPower:(double)a0 withStartDate:(id)a1 withEndDate:(id)a2;
- (void)testReloadBefore2;
- (void)testQualification3;
- (void)testDistribution1;
- (void)testShortQualificationEventDuration;
- (BOOL)verifyTotalCorrectionEnergyWithNodeName:(id)a0 withTotalCorrectionEnergy:(double)a1 withRootNodeID:(int)a2;
- (void)testDistribution2;
- (void)testReloadAfter2;
- (void)testCorrectionInMemory;
- (BOOL)verifyAggregateQualificationEnergyWithQualificationID:(int)a0 withRootNodeID:(int)a1 withNodeName:(id)a2 withQualificationEnergy:(double)a3 withDate:(id)a4;
- (void)blockingClearQueues;
- (BOOL)verifyLastQualificationEventWithQualificationID:(int)a0 withNodeName:(id)a1;
- (void)testShortDistributionEventDuration;
- (id)init;
- (void)testAddRemoveDistributionEventForward;
- (void)testQualification2;
- (void)testCorrection2;
- (void)testReloadBefore1;
- (void)testDistribution5;
- (void)testReloadAfter1;
- (void)testCorrection1;
- (void)testCorrection4;
- (void)testPerformance;
- (void)testDistribution4;
- (BOOL)verifyAggregateRootNodeEnergyWithNodeName:(id)a0 withRootNodeID:(int)a1 withEnergy:(double)a2 withDate:(id)a3;
- (void).cxx_destruct;
- (void)testPowerEventIntervalOverlap;

@end
