@interface ATXCategoricalFeatureLocationPOICategory : ATXCandidateRelevanceModelOneHotCategoricalFeaturizer

+ (BOOL)ignorePoiCategoryForUsersCurrentLOI:(id)a0;

- (id)categoricalFeatureValueForContext:(id)a0 candidate:(id)a1;

@end
