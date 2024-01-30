@class NSMutableDictionary;

@interface PGCurationCriteriaFactory : NSObject {
    NSMutableDictionary *_holidayServiceByLocale;
}

- (id)_entertainmentCriteriaWithClient:(unsigned long long)a0;
- (id)_climbingCriteriaWithClient:(unsigned long long)a0;
- (id)_museumCriteriaWithClient:(unsigned long long)a0;
- (id)_yourBabyCriteriaWithClient:(unsigned long long)a0;
- (id)_petScenesTrait;
- (id)_yourPetCriteriaWithClient:(unsigned long long)a0;
- (id)_beachingCriteriaWithClient:(unsigned long long)a0;
- (id)petCurationCriteriaWithCollection:(id)a0 client:(unsigned long long)a1;
- (id)_lunchCriteriaWithClient:(unsigned long long)a0;
- (id)_divingCriteriaWithClient:(unsigned long long)a0;
- (id)_festivalCriteriaWithClient:(unsigned long long)a0;
- (id)_birthdayCriteriaWithPersonLocalIdentifiers:(id)a0 client:(unsigned long long)a1;
- (id)curationCriteriaWithMeaningLabel:(id)a0 featureNodes:(id)a1 inGraph:(id)a2 client:(unsigned long long)a3;
- (id)_nightOutCriteriaWithClient:(unsigned long long)a0;
- (id)_longTripCriteriaWithClient:(unsigned long long)a0;
- (id)_memoriesRestaurantScenesTrait;
- (id)_winterSportCriteriaWithClient:(unsigned long long)a0;
- (id)_searchRestaurantScenesTrait;
- (id)_searchFallCriteria;
- (id)_searchSummerCriteria;
- (id)_dinnerCriteriaWithClient:(unsigned long long)a0;
- (id)_tripScenesTrait;
- (void).cxx_destruct;
- (id)_indexSetFromBaseSceneNames:(id)a0 leafSceneNames:(id)a1;
- (id)_compulsoryRequiredTraitsFromBaseSceneNames:(id)a0 leafSceneNames:(id)a1;
- (id)_sportEventCriteriaWithClient:(unsigned long long)a0;
- (id)_shortTripCriteriaWithClient:(unsigned long long)a0;
- (id)_breakfastCriteriaWithClient:(unsigned long long)a0;
- (id)_hikingCriteriaWithClient:(unsigned long long)a0;
- (id)holidayServiceWithGraph:(id)a0;
- (id)_concertCriteriaWithClient:(unsigned long long)a0;
- (id)foodieCurationCriteriaWithClient:(unsigned long long)a0;
- (id)curationCriteriaWithSeasonName:(id)a0 client:(unsigned long long)a1;
- (id)_babyScenesTrait;
- (id)curationCriteriaWithCollection:(id)a0 meaningLabel:(id)a1 inGraph:(id)a2 client:(unsigned long long)a3;
- (id)foodieCurationCriteriaWithPersonLocalIdentifier:(id)a0 client:(unsigned long long)a1;
- (id)_holidayEventCriteriaWithGraph:(id)a0 featureNodes:(id)a1 client:(unsigned long long)a2;
- (id)babyCurationCriteriaWithCollection:(id)a0 client:(unsigned long long)a1;
- (id)_performanceCriteriaWithClient:(unsigned long long)a0;
- (id)_searchSpringCriteria;
- (id)_searchRestaurantCompulsoryScenesTrait;
- (id)_weddingCriteriaWithClient:(unsigned long long)a0;
- (id)_searchWinterCriteria;
- (id)_anniversaryCriteriaWithPersonLocalIdentifier:(id)a0 client:(unsigned long long)a1;
- (id)tripCurationCriteriaWithCollection:(id)a0 client:(unsigned long long)a1;

@end
