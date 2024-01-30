@class NSNumber, PLAccountingRange;

@interface PLAccountingEnergyEventEntry : PLEntry

@property (readonly, nonatomic) NSNumber *nodeID;
@property (readonly, nonatomic) double energy;
@property (readonly, nonatomic) PLAccountingRange *range;

+ (id)entryKey;
+ (void)load;

- (void).cxx_destruct;
- (id)initWithNodeID:(id)a0 withEnergy:(double)a1 withRange:(id)a2 withEntryDate:(id)a3;

@end
