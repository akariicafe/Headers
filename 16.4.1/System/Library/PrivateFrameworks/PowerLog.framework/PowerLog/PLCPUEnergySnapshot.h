@class NSMutableDictionary;

@interface PLCPUEnergySnapshot : NSObject

@property (class, retain, nonatomic) NSMutableDictionary *coalitionIDToCoalitionNameMapping;
@property (class, retain, nonatomic) NSMutableDictionary *identifierToAccountingName;
@property (class, retain, nonatomic) NSMutableDictionary *identifierToCoalitionID;

@property unsigned long long cpuEnergy;
@property unsigned long long cpuEnergyBilledToMe;
@property unsigned long long cpuEnergyBilledToOthers;
@property (retain) NSMutableDictionary *mockData;

- (double)computeEnergyDiff:(id)a0;
- (BOOL)isValid;
- (id)description;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 andMockData:(id)a1;
- (double)computeEnergyDiffUntilNow:(id)a0 andAdjustSnapshotToNow:(BOOL)a1;
- (id)getCoalitionIDForIdentifier:(id)a0;
- (void)refreshCoalitionIDMapping;
- (id)searchCoalitionsCacheForID:(id)a0;
- (BOOL)snapshotCPUEnergy:(id)a0;

@end
