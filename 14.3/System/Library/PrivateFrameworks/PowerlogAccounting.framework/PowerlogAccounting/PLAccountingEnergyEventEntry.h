@class NSNumber, PLAccountingRange;

@interface PLAccountingEnergyEventEntry : PLEntry

@property (readonly, nonatomic) NSNumber *nodeID;
@property (readonly, nonatomic) double energy;
@property (readonly, nonatomic) PLAccountingRange *range;

+ (void)load;
+ (id)entryKey;

- (id)initWithNodeID:(id)a0 withEnergy:(double)a1 withRange:(id)a2 withEntryDate:(id)a3;
- (void).cxx_destruct;

@end
