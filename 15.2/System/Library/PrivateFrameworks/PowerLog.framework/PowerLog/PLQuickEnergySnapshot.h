@class NSDate;

@interface PLQuickEnergySnapshot : NSObject

@property (retain) NSDate *timestamp;
@property double cpuEnergy;
@property double networkEnergy;

- (id)initWithEnergies:(double)a0 andNetworkEnergy:(double)a1;
- (id)description;
- (double)computeEnergyDiff:(id)a0;
- (void).cxx_destruct;
- (double)getTotalEnergy;

@end
