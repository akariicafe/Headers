@class PLAccountingDistributionManager, PLAccountingQualificationManager, NSString, PLEntryNotificationOperatorComposition, PLAccountingCorrectionManager, PLActivity, NSObject;
@protocol OS_dispatch_queue;

@interface PLAccountingEngine : NSObject <PLAccountingDistributionManagerDelegate, PLAccountingCorrectionManagerDelegate, PLAccountingQualificationManagerDelegate>

@property (retain) NSObject<OS_dispatch_queue> *workQueue;
@property (retain) PLActivity *chunkActivity;
@property (retain) PLEntryNotificationOperatorComposition *batteryListener;
@property BOOL pluggedIn;
@property (retain, nonatomic) PLAccountingDistributionManager *distributionManager;
@property (retain, nonatomic) PLAccountingCorrectionManager *correctionManager;
@property (retain, nonatomic) PLAccountingQualificationManager *qualificationManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)workQueue;
+ (void)clearWithEntryKey:(id)a0;
+ (id)gasGaugeEntryKey;
+ (double)maxPowerEventChunkInterval;
+ (id)allSoCRootNodeIDs;
+ (id)allQualificationIDs;
+ (id)deviceRootNodeIDs;
+ (id)qualificationIDForQualificationName:(id)a0;
+ (id)deviceBBRootNodeIDs;
+ (id)normalizeWeights:(id)a0;
+ (id)distributionIDForDistributionName:(id)a0;
+ (id)debugInstance;
+ (id)allBBRootNodeIDs;
+ (BOOL)accountingDebugEnabled;
+ (double)minEnergy;
+ (id)deviceSoCRootNodeIDs;
+ (id)allDistributionIDs;

- (void)reload;
- (void)createAggregateRootNodeEnergyEntryWithEnergyEstimate:(id)a0;
- (id)init;
- (void)addEnergyMeasurementWithRootNodeID:(int)a0 withEnergy:(double)a1 withRange:(id)a2;
- (void)addQualificationEventInterval:(id)a0;
- (void).cxx_destruct;
- (void)didDistributeEnergyEstimate:(id)a0;
- (void)reset;
- (void)createDistributionEventForwardWithDistributionID:(int)a0 withRemovingChildNodeName:(id)a1 withStartDate:(id)a2;
- (void)reloadLastQualificationEventsWithLastDeviceBootDate:(id)a0;
- (void)createDistributionEventForwardWithDistributionID:(int)a0 withChildNodeNameToWeight:(id)a1 withStartDate:(id)a2;
- (void)didCreateChildEnergyEstimate:(id)a0 withParentEnergyEstimate:(id)a1;
- (void)reloadLastDistributionEventsWithLastDeviceBootDate:(id)a0;
- (void)createQualificationEventIntervalWithQualificationID:(int)a0 withChildNodeNames:(id)a1 withStartDate:(id)a2 withEndDate:(id)a3;
- (void)didQualifyEnergyEvent:(id)a0 withRootNodeID:(id)a1 withQualificationID:(id)a2;
- (void)createPowerEventForwardWithRootNodeID:(int)a0 withPower:(double)a1 withStartDate:(id)a2;
- (id)currentDistributionEventForwardWithDistributionID:(int)a0;
- (void)chunkWithLastChunkDate:(id)a0 withNow:(id)a1;
- (void)addDistributionEventInterval:(id)a0;
- (void)createDistributionEventPointWithDistributionID:(int)a0 withChildNodeNameToWeight:(id)a1 withStartDate:(id)a2;
- (void)didCorrectEnergyEstimate:(id)a0;
- (void)createPowerEventIntervalWithRootNodeID:(int)a0 withPower:(double)a1 withStartDate:(id)a2 withEndDate:(id)a3;
- (void)createQualificationEventBackwardWithQualificationID:(int)a0 withChildNodeNames:(id)a1 withEndDate:(id)a2;
- (void)addDistributionEventIntervalWithLastDistributionEventBackward:(id)a0 withDistributionEventBackward:(id)a1;
- (void)createDistributionEventForwardWithDistributionID:(int)a0 withAddingChildNodeName:(id)a1 withStartDate:(id)a2;
- (void)addDistributionEventPoint:(id)a0;
- (void)addDistributionEventIntervalWithLastDistributionEventForward:(id)a0 withDistributionEventForward:(id)a1;
- (void)createEventWithEvent:(id)a0 withActionBlock:(id /* block */)a1;
- (void)createQualificationEventForwardWithQualificationID:(int)a0 withChildNodeNames:(id)a1 withStartDate:(id)a2;
- (void)createQualificationEventPointWithQualificationID:(int)a0 withChildNodeNames:(id)a1 withStartDate:(id)a2;
- (void)addQualificationEventPoint:(id)a0;
- (void)addQualificationEventIntervalWithLastQualificationEventForward:(id)a0 withQualificationEventForward:(id)a1;
- (void)createQualificationEventForwardWithQualificationID:(int)a0 withAddingChildNodeName:(id)a1 withStartDate:(id)a2;
- (void)createDistributionEventBackwardWithDistributionID:(int)a0 withChildNodeNameToWeight:(id)a1 withEndDate:(id)a2;
- (void)createDistributionEventIntervalWithDistributionID:(int)a0 withChildNodeNameToWeight:(id)a1 withStartDate:(id)a2 withEndDate:(id)a3;
- (void)createPowerEventBackwardWithRootNodeID:(int)a0 withPower:(double)a1 withEndDate:(id)a2;
- (void)addQualificationEventIntervalWithLastQualificationEventBackward:(id)a0 withQualificationEventBackward:(id)a1;
- (void)createQualificationEventForwardWithQualificationID:(int)a0 withRemovingChildNodeName:(id)a1 withStartDate:(id)a2;
- (void)reloadLastPowerEventsWithLastDeviceBootDate:(id)a0;
- (void)addPowerMeasurementEventIntervalWithPower:(double)a0 withStartDate:(id)a1 withEndDate:(id)a2;

@end
