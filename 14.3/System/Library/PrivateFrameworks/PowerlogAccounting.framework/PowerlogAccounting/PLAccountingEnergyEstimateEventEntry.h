@class NSNumber, NSDate;

@interface PLAccountingEnergyEstimateEventEntry : PLAccountingEnergyEventEntry

@property (readonly, nonatomic) NSNumber *rootNodeID;
@property (readonly, nonatomic) int parentEntryID;
@property (readonly, nonatomic) int numAncestors;
@property (readonly, nonatomic) NSNumber *distributionRuleID;
@property (readonly, nonatomic) NSNumber *qualificationRuleIDSum;
@property (nonatomic) double correctionEnergy;
@property (nonatomic) double terminationRatio;
@property (retain, nonatomic) NSDate *distributionDate;
@property (retain, nonatomic) NSDate *correctionDate;
@property (retain, nonatomic) NSDate *qualificationDate;
@property BOOL isRootNodeEnergyAggregated;

+ (void)load;
+ (id)entryKey;

- (id)initWithNodeID:(id)a0 withRootNodeID:(id)a1 withParentEntryID:(int)a2 withNumAncestors:(int)a3 withEnergy:(double)a4 withRange:(id)a5 withEntryDate:(id)a6;

@end
