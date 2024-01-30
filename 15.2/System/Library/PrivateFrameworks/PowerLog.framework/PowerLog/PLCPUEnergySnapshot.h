@class NSMutableDictionary;

@interface PLCPUEnergySnapshot : NSObject

@property (class, retain, nonatomic) NSMutableDictionary *coalitionIDToCoalitionNameMapping;
@property (class, retain, nonatomic) NSMutableDictionary *identifierToAccountingName;
@property (class, retain, nonatomic) NSMutableDictionary *identifierToCoalitionID;

@property unsigned long long cpuEnergy;
@property unsigned long long cpuEnergyBilledToMe;
@property unsigned long long cpuEnergyBilledToOthers;
@property (retain) NSMutableDictionary *mockData;

- (id)description;
- (double)computeEnergyDiff:(id)a0;
- (void).cxx_destruct;
- (BOOL)isValid;
- (BOOL)snapshotCPUEnergy:(id)a0;
- (id)initWithIdentifier:(id)a0 andMockData:(id)a1;
- (id)getCoalitionIDForIdentifier:(id)a0;
- (id)searchCoalitionsCacheForID:(id)a0;
- (void)refreshCoalitionIDMapping;
- (double)computeEnergyDiffUntilNow:(id)a0 andAdjustSnapshotToNow:(BOOL)a1;

@end
