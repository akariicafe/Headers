@class HMHome, NSSet;

@interface HUHomeFeatureOnboarder : HUFeatureOnboarder

@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) NSSet *devices;

- (void).cxx_destruct;
- (id)_subclass_buildAllFlowGroupsFromFeatureGroups:(id)a0 usageOptions:(id)a1;
- (id)getPostProcessingFlowsForResults:(id)a0;
- (id)initWithFeatures:(id)a0 home:(id)a1 devices:(id)a2 usageOptions:(id)a3;
- (id)initWithFeatures:(id)a0 home:(id)a1 usageOptions:(id)a2;
- (id)initWithGroupedFeatures:(id)a0 home:(id)a1 usageOptions:(id)a2;

@end
