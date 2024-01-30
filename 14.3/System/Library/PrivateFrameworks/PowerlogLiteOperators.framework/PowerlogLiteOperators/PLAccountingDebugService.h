@class NSArray;

@interface PLAccountingDebugService : PLService

@property (retain, nonatomic) NSArray *testNames;

+ (void)load;
+ (void)printError:(id)a0;

- (BOOL)verifyLastDistributionEventWithDistributionID:(int)a0 withNodeName:(id)a1 withWeight:(double)a2;
- (void)testCurrentDistributionEventForward;
- (void)testShortQualificationEventDuration;
- (id)init;
- (void).cxx_destruct;
- (BOOL)verifyTotalCorrectionEnergyWithNodeName:(id)a0 withTotalCorrectionEnergy:(double)a1 withRootNodeID:(int)a2;
- (void)testAddRemoveDistributionEventForward;
- (void)testChunk;
- (void)testCorrection4;
- (void)blockingLogGasGaugeWithTotalPower:(double)a0 withStartDate:(id)a1 withEndDate:(id)a2;
- (BOOL)verifyTotalEnergyWithNodeName:(id)a0 withTotalEnergy:(double)a1 withRootNodeID:(int)a2 withEpsilon:(double)a3;
- (void)testCorrectionInMemory;
- (void)testShortDistributionEventDuration;
- (BOOL)verifyAggregateQualificationEnergyWithQualificationID:(int)a0 withRootNodeID:(int)a1 withNodeName:(id)a2 withQualificationEnergy:(double)a3 withDate:(id)a4;
- (void)testQualification3;
- (void)testPowerEventIntervalOverlap;
- (BOOL)verifyAggregateRootNodeEnergyWithNodeName:(id)a0 withRootNodeID:(int)a1 withEnergy:(double)a2 withDate:(id)a3;
- (void)testCorrection2;
- (BOOL)verifyLastQualificationEventWithQualificationID:(int)a0 withNodeName:(id)a1;
- (void)testDistribution5;
- (void)blockingClearQueues;
- (void)testReloadBefore1;
- (void)testDistribution4;
- (void)testDistribution1;
- (void)testReloadBefore2;
- (void)testDistribution2;
- (BOOL)verifyLastPowerEventWithRootNodeID:(int)a0 withPower:(double)a1;
- (void)testPerformance;
- (void)testQualification2;
- (void)testCorrection1;
- (void)testReloadAfter1;
- (void)testQualification1;
- (void)testReloadAfter2;
- (void)testDistribution3;
- (void)testCorrection3;

@end
