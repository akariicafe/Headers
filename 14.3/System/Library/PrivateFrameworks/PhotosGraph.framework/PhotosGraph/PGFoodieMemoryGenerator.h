@class PGGraphSceneNode, NSMutableDictionary, NSDictionary, CLSCurationSession, NSString;

@interface PGFoodieMemoryGenerator : PGFeaturedMemoryGenerator

@property (retain, nonatomic) NSDictionary *confidenceThresholdByFoodSceneIdentifier;
@property (retain, nonatomic) NSDictionary *confidenceThresholdByDrinkSceneIdentifier;
@property (retain, nonatomic) NSDictionary *confidenceThresholdByForbiddenSceneIdentifiers;
@property (retain, nonatomic) NSMutableDictionary *locationCoordinateByAssetUUID;
@property (retain, nonatomic) NSMutableDictionary *relevantFoodieAssetUUIDsByMomentNodeLocalIdentifier;
@property (retain, nonatomic) NSMutableDictionary *assetUUIDsWithPeopleByMomentNodeLocalIdentifier;
@property (retain, nonatomic) NSMutableDictionary *cityNodesByMomentLocalIdentifier;
@property (nonatomic) long long currentYear;
@property (retain, nonatomic) PGGraphSceneNode *foodSceneNode;
@property (retain, nonatomic) CLSCurationSession *curationSession;
@property (retain, nonatomic) NSString *foodieMemoryType;
@property (retain, nonatomic) NSString *foodieMemoryKind;

- (void).cxx_destruct;
- (void)_enumeratePotentialMemoriesUsingBlock:(id /* block */)a0;
- (void)_postProcessMemory:(id)a0 withPotentialMemory:(id)a1;
- (id)_potentialMemoriesForDryTesting;
- (BOOL)_hasEnoughAssetsWithMinimumSceneAnalysisVersion;
- (id)_preferredPotentialMemoriesFromPotentialMemories:(id)a0;
- (id)_assetUUIDsFromAssets:(id)a0;
- (id)_potentialMemoriesFromMomentNodes:(id)a0 atLocationCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1 atLocationNode:(id)a2 requireMinimumTimeInterval:(BOOL)a3 includeSingleYearMemories:(BOOL)a4 features:(id)a5 featuredNode:(id)a6 kind:(unsigned long long)a7 cancelled:(BOOL *)a8;
- (id)_incompatibleMeanings;
- (id)_momentNodesFilteredForIncompatibleMeaningsFromMomentNodes:(id)a0;
- (BOOL)_aggregationMeetsMinimumTimeIntervalForMomentNodes:(id)a0;
- (id)_momentNodesByYearFromMomentNodes:(id)a0;
- (id)_potentialGenericMemoriesWithGraph:(id)a0 cancelled:(BOOL *)a1;
- (id)_potentialMemoriesForTripsWithGraph:(id)a0 cancelled:(BOOL *)a1;
- (id)_potentialMemoriesForPeopleWithGraph:(id)a0 cancelled:(BOOL *)a1;
- (id)_cityNodesForMomentNode:(id)a0;
- (id)_potentialMemoriesForCitiesWithGraph:(id)a0 cancelled:(BOOL *)a1;
- (id)_potentialMemoriesForRestaurantsWithGraph:(id)a0 cancelled:(BOOL *)a1;
- (id)_potentialMemoriesForHomeWithGraph:(id)a0 cancelled:(BOOL *)a1;
- (id)_assetUUIDsAtLocationCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 inAssetsWithUUIDs:(id)a1;
- (id)_assetUUIDsWithPeopleForMomentNode:(id)a0;
- (id)_relevantFoodieAssetUUIDsForMomentNode:(id)a0;
- (void)_calculateRelevantFoodieAssetUUIDsForMomentNode:(id)a0;
- (id)_assetUUIDsAtLocationNode:(id)a0 forMomentNodes:(id)a1 assetUUIDs:(id)a2;
- (id)_fetchAssetsForAssetUUIDsByMomentNodeLocalIdentifier:(id)a0 controller:(id)a1;
- (id)_uuidsOfRequiredFoodAssetsWithNumberOfFoodAssetsToRequirePerMoment:(unsigned long long)a0 relevantFoodAssetsByMomentNodeLocalIdentifier:(id)a1 controller:(id)a2 progressBlock:(id /* block */)a3;
- (id)_foodieCurationCriteriaWithGraph:(id)a0 personNode:(id)a1;
- (id)_assetsCloseInTimeAndLocationToAsset:(id)a0 inAssets:(id)a1 stopAtFirstMatch:(BOOL)a2;
- (id)_curatedPersonAssetsFromPersonAssetsByMomentNodeLocalIdentifier:(id)a0 relevantFoodAssetsByMomentNodeLocalIdentifier:(id)a1 momentNodes:(id)a2 featuringPersonNode:(id)a3 outValidMomentNodes:(id *)a4 outRelevantFoodAssetsForFeaturedPersonByMomentNodeLocalIdentifier:(id *)a5 controller:(id)a6 progressBlock:(id /* block */)a7;
- (id)_extendedCurationForAssets:(id)a0 controller:(id)a1 progressBlock:(id /* block */)a2;

@end
