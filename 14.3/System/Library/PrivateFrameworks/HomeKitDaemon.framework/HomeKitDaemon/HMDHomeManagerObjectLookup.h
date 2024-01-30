@class HMDHomeManager;

@interface HMDHomeManagerObjectLookup : HMDObjectLookup

@property (weak) HMDHomeManager *homeManager;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithHomeManager:(id)a0;
- (void)scanObjects;
- (void)_scanHomes;
- (void)_scanCloudZones;
- (void)_scanAccounts;

@end
