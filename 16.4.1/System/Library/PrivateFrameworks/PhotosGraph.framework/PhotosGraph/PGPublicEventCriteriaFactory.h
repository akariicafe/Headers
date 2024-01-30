@class NSDictionary, PGGraph, CLSSceneTaxonomyHierarchy;

@interface PGPublicEventCriteriaFactory : NSObject {
    PGGraph *_graph;
    CLSSceneTaxonomyHierarchy *_sceneTaxonomy;
}

@property (readonly, nonatomic) NSDictionary *disambiguationCriteriaByEventCategory;
@property (readonly, nonatomic) NSDictionary *highConfidenceCriteriaByEventCategory;
@property (readonly, nonatomic) NSDictionary *prohibitedCriteriaByEventCategory;

+ (id)publicEventCriteriaByCategoryForGraph:(id)a0 sceneTaxonomy:(id)a1;

- (void).cxx_destruct;
- (id)_festivalsAndFairsCriteriaArray;
- (id)_appleEventsCriteriaArray;
- (id)_artsAndMuseumsCriteriaArray;
- (id)_danceCriteriaArray;
- (id)_meaningCriteriaByEventCategoryForMeaningIdentifierByEventCategories:(id)a0 inferenceType:(unsigned long long)a1;
- (id)_musicConcertsCriteriaArray;
- (id)_nightLifeCriteriaArray;
- (id)_publicEventCriteriaByCategory;
- (id)_sportsCriteriaArray;
- (id)_theaterCriteriaArray;
- (id)initWithGraph:(id)a0 sceneTaxonomy:(id)a1;

@end
