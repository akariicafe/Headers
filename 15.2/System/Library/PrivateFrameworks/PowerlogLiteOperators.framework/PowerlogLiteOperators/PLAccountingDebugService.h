@class NSArray;

@interface PLAccountingDebugService : PLService

@property (retain, nonatomic) NSArray *testNames;

+ (void)printError:(id)a0;
+ (void)load;

- (void)testDistribution2;
- (void)testReloadAfter1;
- (void)blockingClearQueues;
- (void)testDistribution1;
- (void)testQualification1;
- (void)testCorrectionInMemory;
- (void)testQualification3;
- (void)testShortDistributionEventDuration;
- (void)testCorrection2;
- (BOOL)verifyAggregateQualificationEnergyWithQualificationID:(int)a0 withRootNodeID:(int)a1 withNodeName:(id)a2 withQualificationEnergy:(double)a3 withDate:(id)a4;
- (void)testReloadBefore1;
- (void)testCurrentDistributionEventForward;
- (void)testAddRemoveDistributionEventForward;
- (void)testReloadAfter2;
- (BOOL)verifyTotalCorrectionEnergyWithNodeName:(id)a0 withTotalCorrectionEnergy:(double)a1 withRootNodeID:(int)a2;
- (void).cxx_destruct;
- (void)testReloadBefore2;
- (id)init;
- (void)testCorrection3;
- (void)testDistribution4;
- (void)testCorrection4;
- (void)testDistribution3;
- (void)testShortQualificationEventDuration;
- (BOOL)verifyLastDistributionEventWithDistributionID:(int)a0 withNodeName:(id)a1 withWeight:(double)a2;
- (BOOL)verifyTotalEnergyWithNodeName:(id)a0 withTotalEnergy:(double)a1 withRootNodeID:(int)a2 withEpsilon:(double)a3;
- (void)testChunk;
- (BOOL)verifyLastQualificationEventWithQualificationID:(int)a0 withNodeName:(id)a1;
- (BOOL)verifyAggregateRootNodeEnergyWithNodeName:(id)a0 withRootNodeID:(int)a1 withEnergy:(double)a2 withDate:(id)a3;
- (void)testPowerEventIntervalOverlap;
- (void)blockingLogGasGaugeWithTotalPower:(double)a0 withStartDate:(id)a1 withEndDate:(id)a2;
- (void)testDistribution5;
- (void)testCorrection1;
- (void)testQualification2;
- (BOOL)verifyLastPowerEventWithRootNodeID:(int)a0 withPower:(double)a1;
- (void)testPerformance;

@end
