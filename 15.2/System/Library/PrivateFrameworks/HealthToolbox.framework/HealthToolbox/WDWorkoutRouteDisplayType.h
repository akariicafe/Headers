@interface WDWorkoutRouteDisplayType : HKDisplayType

@property (class, readonly) WDWorkoutRouteDisplayType *sharedDisplayType;

- (long long)categoryIdentifier;
- (id)sampleType;
- (id)wd_listViewControllerDataProviderWithProfile:(id)a0 unitController:(id)a1 isHierarchical:(BOOL)a2;

@end
