@class CLSSceneTaxonomyHierarchy, NSMutableDictionary;

@interface PGCurationCriteriaFactory : NSObject {
    NSMutableDictionary *_holidayServiceByLocale;
    CLSSceneTaxonomyHierarchy *_sceneTaxonomy;
}

- (id)_searchSummerCriteria;
- (id)_searchRestaurantCompulsoryScenesTrait;
- (id)_sceneNamesFromBaseSceneNames:(id)a0 leafSceneNames:(id)a1;
- (id)curationCriteriaWithMeaningLabel:(id)a0 featureNodes:(id)a1 inGraph:(id)a2 client:(unsigned long long)a3;
- (id)tripCurationCriteriaWithCollection:(id)a0 client:(unsigned long long)a1;
- (id)_yourBabyCriteriaWithClient:(unsigned long long)a0;
- (id)curationCriteriaWithSeasonName:(id)a0 client:(unsigned long long)a1;
- (id)_babyScenesTrait;
- (id)_performanceCriteriaWithClient:(unsigned long long)a0;
- (id)_compulsoryRequiredTraitsFromBaseSceneNames:(id)a0 leafSceneNames:(id)a1;
- (id)_searchWinterCriteria;
- (id)_yourPetCriteriaWithClient:(unsigned long long)a0;
- (id)_dinnerCriteriaWithClient:(unsigned long long)a0;
- (id)holidayServiceWithGraph:(id)a0;
- (id)_searchSpringCriteria;
- (id)curationCriteriaWithCollection:(id)a0 meaningLabel:(id)a1 inGraph:(id)a2 client:(unsigned long long)a3;
- (id)_climbingCriteriaWithClient:(unsigned long long)a0;
- (id)_tripScenesTrait;
- (id)_anniversaryCriteriaWithPersonLocalIdentifier:(id)a0 client:(unsigned long long)a1;
- (id)_weddingCriteriaWithClient:(unsigned long long)a0;
- (id)_divingCriteriaWithClient:(unsigned long long)a0;
- (id)_breakfastCriteriaWithClient:(unsigned long long)a0;
- (id)_hikingCriteriaWithClient:(unsigned long long)a0;
- (id)_festivalCriteriaWithClient:(unsigned long long)a0;
- (id)_searchFallCriteria;
- (id)petCurationCriteriaWithCollection:(id)a0 client:(unsigned long long)a1;
- (id)_lunchCriteriaWithClient:(unsigned long long)a0;
- (id)_searchRestaurantScenesTrait;
- (id)_winterSportCriteriaWithClient:(unsigned long long)a0;
- (id)_beachingCriteriaWithClient:(unsigned long long)a0;
- (id)foodieCurationCriteriaWithPersonLocalIdentifier:(id)a0 client:(unsigned long long)a1;
- (id)init;
- (id)_birthdayCriteriaWithPersonLocalIdentifiers:(id)a0 client:(unsigned long long)a1;
- (id)_entertainmentCriteriaWithClient:(unsigned long long)a0;
- (id)_nightOutCriteriaWithClient:(unsigned long long)a0;
- (id)_shortTripCriteriaWithClient:(unsigned long long)a0;
- (id)_longTripCriteriaWithClient:(unsigned long long)a0;
- (id)_petScenesTrait;
- (id)_memoriesRestaurantScenesTrait;
- (id)foodieCurationCriteriaWithClient:(unsigned long long)a0;
- (id)_museumCriteriaWithClient:(unsigned long long)a0;
- (id)babyCurationCriteriaWithCollection:(id)a0 client:(unsigned long long)a1;
- (id)_sportEventCriteriaWithClient:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)_holidayEventCriteriaWithGraph:(id)a0 featureNodes:(id)a1 client:(unsigned long long)a2;
- (id)_concertCriteriaWithClient:(unsigned long long)a0;

@end
