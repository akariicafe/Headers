@class NSDate;

@interface PLQuickEnergySnapshot : NSObject

@property (retain) NSDate *timestamp;
@property double cpuEnergy;
@property double networkEnergy;

- (id)initWithEnergies:(double)a0 andNetworkEnergy:(double)a1;
- (double)computeEnergyDiff:(id)a0;
- (id)description;
- (double)getTotalEnergy;
- (void).cxx_destruct;

@end
