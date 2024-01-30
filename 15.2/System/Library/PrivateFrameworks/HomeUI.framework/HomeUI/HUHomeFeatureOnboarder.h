@class HMHome;

@interface HUHomeFeatureOnboarder : HUFeatureOnboarder

@property (retain, nonatomic) HMHome *home;

- (void).cxx_destruct;
- (id)_subclass_buildAllFlowGroupsFromFeatureGroups:(id)a0 usageOptions:(id)a1;
- (id)getPostProcessingFlowsForResults:(id)a0;
- (id)initWithFeatures:(id)a0 home:(id)a1 usageOptions:(id)a2;
- (id)initWithGroupedFeatures:(id)a0 home:(id)a1 usageOptions:(id)a2;

@end
