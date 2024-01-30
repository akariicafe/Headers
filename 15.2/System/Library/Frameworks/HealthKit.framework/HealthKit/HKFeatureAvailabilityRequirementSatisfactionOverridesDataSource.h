@interface HKFeatureAvailabilityRequirementSatisfactionOverridesDataSource : HKUserDefaultsDataSource

- (void)unregisterObserver:(id)a0 forFeature:(id)a1 requirement:(id)a2;
- (void)registerObserver:(id)a0 forFeature:(id)a1 requirement:(id)a2 newValueHandler:(id /* block */)a3;

@end
