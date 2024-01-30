@class NSMutableDictionary, NSDictionary, CLSCurationSession, NSString, PGGraphSceneNodeCollection;

@interface PGLegacyFoodieMemoryGenerator : PGFeaturedMemoryGenerator

@property (retain, nonatomic) NSDictionary *confidenceThresholdByFoodSceneIdentifier;
@property (retain, nonatomic) NSDictionary *confidenceThresholdByDrinkSceneIdentifier;
@property (retain, nonatomic) NSDictionary *confidenceThresholdByForbiddenSceneIdentifiers;
@property (retain, nonatomic) NSMutableDictionary *locationCoordinateByAssetUUID;
@property (retain, nonatomic) NSMutableDictionary *relevantFoodieAssetUUIDsByMomentNodeLocalIdentifier;
@property (retain, nonatomic) NSMutableDictionary *assetUUIDsWithPeopleByMomentNodeLocalIdentifier;
@property (nonatomic) long long currentYear;
@property (retain, nonatomic) PGGraphSceneNodeCollection *foodSceneNodeAsCollection;
@property (retain, nonatomic) CLSCurationSession *curationSession;
@property (retain, nonatomic) NSString *foodieMemoryType;
@property (retain, nonatomic) NSString *foodieMemoryKind;

+ (BOOL)_aggregationMeetsMinimumTimeIntervalForMomentNodes:(id)a0;
+ (id)_assetsCloseInTimeAndLocationToAsset:(id)a0 inAssets:(id)a1 stopAtFirstMatch:(BOOL)a2;

- (void).cxx_destruct;
- (void)_enumeratePotentialMemoriesWithGraph:(id)a0 usingBlock:(id /* block */)a1;
- (void)_postProcessMemory:(id)a0 withPotentialMemory:(id)a1 andGraph:(id)a2;
- (id)_potentialMemoriesForDryTesting;
- (id)curationOptionsWithRequiredAssetUUIDs:(id)a0 potentialMemory:(id)a1;
- (id)relevantFeederForPotentialMemory:(id)a0 inGraph:(id)a1;
- (id)relevantFeederForTriggeredMemory:(id)a0 inGraph:(id)a1 allowGuestAsset:(BOOL)a2 progressReporter:(id)a3;
- (id)titleGeneratorForTriggeredMemory:(id)a0 withKeyAsset:(id)a1 curatedAssets:(id)a2 extendedCuratedAssets:(id)a3 titleGenerationContext:(id)a4 inGraph:(id)a5;
- (id)keyAssetCurationOptionsWithPotentialMemory:(id)a0 inGraph:(id)a1;
- (id)keyAssetCurationOptionsWithTriggeredMemory:(id)a0 inGraph:(id)a1;
- (id)foodSceneNodesInGraph:(id)a0;
- (BOOL)_hasEnoughAssetsWithMinimumSceneAnalysisVersion;
- (id)_preferredPotentialMemoriesFromPotentialMemories:(id)a0;
- (id)_potentialMemoriesFromMomentNodes:(id)a0 atLocationCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1 atLocationNode:(id)a2 requireMinimumTimeInterval:(BOOL)a3 includeSingleYearMemories:(BOOL)a4 features:(id)a5 featuredNode:(id)a6 kind:(unsigned long long)a7 progressReporter:(id)a8;
- (id)_incompatiblePOILabels;
- (id)_momentNodesFilteredForIncompatiblePOIFromMomentNodes:(id)a0;
- (id)_incompatibleMeanings;
- (id)_momentNodesFilteredForIncompatibleMeaningsFromMomentNodes:(id)a0;
- (id)_momentNodesByYearFromMomentNodes:(id)a0;
- (id)_personAssetUUIDsByMomentNodeLocalIdentifierForMomentNodes:(id)a0 locationCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1 locationNode:(id)a2 progressReporter:(id)a3;
- (id)_potentialGenericMemoriesWithGraph:(id)a0 progressReporter:(id)a1;
- (id)_potentialMemoriesForTripsWithGraph:(id)a0 progressReporter:(id)a1;
- (id)_potentialMemoriesForPeopleWithGraph:(id)a0 progressReporter:(id)a1;
- (id)_potentialMemoriesForCitiesWithGraph:(id)a0 progressReporter:(id)a1;
- (id)_potentialMemoriesForRestaurantsWithGraph:(id)a0 progressReporter:(id)a1;
- (id)_potentialMemoriesForHomeWithGraph:(id)a0 progressReporter:(id)a1;
- (id)_assetUUIDsAtLocationCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 inAssetsWithUUIDs:(id)a1;
- (id)_assetUUIDsWithPeopleForMomentNode:(id)a0;
- (id)_relevantFoodieAssetUUIDsForMomentNode:(id)a0;
- (void)_calculateRelevantFoodieAssetUUIDsForMomentNode:(id)a0;
- (id)_assetUUIDsAtLocationNode:(id)a0 forMomentNodes:(id)a1 assetUUIDs:(id)a2 progressReporter:(id)a3;
- (id)_fetchAssetsForAssetUUIDsByMomentNodeLocalIdentifier:(id)a0;
- (id)_uuidsOfRequiredFoodAssetsWithNumberOfFoodAssetsToRequirePerMoment:(unsigned long long)a0 relevantFoodAssetsByMomentNodeLocalIdentifier:(id)a1 progressBlock:(id /* block */)a2;
- (id)_curatedPersonAssetsFromPersonAssetsByMomentNodeLocalIdentifier:(id)a0 relevantFoodAssetsByMomentNodeLocalIdentifier:(id)a1 momentNodes:(id)a2 featuringPersonNode:(id)a3 outValidMomentNodes:(id *)a4 outRelevantFoodAssetsForFeaturedPersonByMomentNodeLocalIdentifier:(id *)a5 progressBlock:(id /* block */)a6;
- (id)_extendedCurationForAssets:(id)a0 progressBlock:(id /* block */)a1;
- (BOOL)generateRelevantAssetsForPotentialMemory:(id)a0;
- (id)foodieTitleGeneratorForMomentNodes:(id)a0 kind:(unsigned long long)a1 featureNode:(id)a2 tripTitleLocationType:(unsigned long long)a3;
- (id)uuidsOfRequiredAssetsWithKeyAsset:(id)a0 triggeredMemory:(id)a1 inGraph:(id)a2 progressReporter:(id)a3;
- (unsigned long long)_foodMemoryKindFromFeatureNodes:(id)a0 outSpecificFeatureNode:(id *)a1;

@end
