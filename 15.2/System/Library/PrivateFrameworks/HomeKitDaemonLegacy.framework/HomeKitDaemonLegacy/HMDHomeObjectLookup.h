@class HMDHome;

@interface HMDHomeObjectLookup : HMDObjectLookup

@property (weak) HMDHome *home;

+ (id)logCategory;

- (id)logIdentifier;
- (id)initWithHome:(id)a0;
- (void).cxx_destruct;
- (void)scanObjects;
- (void)_scanAccessoriesAndServices;
- (void)_scanSettings:(id)a0;
- (void)_scanRooms;
- (void)_scanZones;
- (void)_scanActionSets;
- (void)_scanServiceGroups;
- (void)_scanTriggers;
- (void)_scanResidentDevices;
- (void)_scanMediaSystems;
- (void)_scanUsers;

@end
