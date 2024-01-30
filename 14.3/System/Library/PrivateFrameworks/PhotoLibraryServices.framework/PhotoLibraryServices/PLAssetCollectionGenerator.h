@class NSDateFormatter, NSString, NSMutableSet, PLFrequentLocationManager, PLLocalCreationDateCreator, NSMutableArray;
@protocol PLMomentGenerationDataManagement;

@interface PLAssetCollectionGenerator : NSObject <PLLibraryClustererDelegate>

@property (weak, nonatomic) id<PLMomentGenerationDataManagement> manager;
@property (retain, nonatomic) PLFrequentLocationManager *frequentLocationManager;
@property (retain, nonatomic) PLLocalCreationDateCreator *localCreationDateCreator;
@property (retain, nonatomic) NSMutableSet *usedMomentObjectIDs;
@property (retain, nonatomic) NSMutableSet *insertedOrUpdatedMoments;
@property (retain, nonatomic) NSMutableArray *momentsFromAssetClusters;
@property (retain, nonatomic) NSDateFormatter *debugDateFormatter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_createMomentOrUpdateForAssetCluster:(id)a0 existingMomentDataForAssets:(id)a1 dataManager:(id)a2 usedMomentObjectIDs:(id)a3 debugDateFormatter:(id)a4;
+ (id)createMomentOrUpdateForAssetCluster:(id)a0 affectedMoment:(id)a1 dataManager:(id)a2;

- (void).cxx_destruct;
- (id)processMomentsWithAssets:(id)a0 affectedMoments:(id)a1 processMonthsAndYears:(BOOL)a2;
- (id)_createMomentOrUpdateForAssetCluster:(id)a0 existingMomentDataForAssets:(id)a1;
- (id)initWithDataManager:(id)a0 frequentLocationManager:(id)a1 localCreationDateCreator:(id)a2;
- (id)libraryClusterer:(id)a0 createYearListForMoments:(id)a1 year:(long long)a2;
- (id)libraryClusterer:(id)a0 createMonthListForMoments:(id)a1 month:(long long)a2 year:(long long)a3;
- (void)logRoutineInformation;
- (id)dataManager;
- (id)_createYearListOrAppendMomentsForYear:(long long)a0 moments:(id)a1;
- (void)_refreshMonthList:(id)a0;
- (void)_cleanUpMoment:(id)a0;
- (id)_processMomentsCollectionsYearsWithAssets:(id)a0 affectedMoments:(id)a1 processMonthsAndYears:(BOOL)a2;
- (id)_createMonthListOrAppendMomentsForMonth:(long long)a0 year:(long long)a1 moments:(id)a2;
- (void)_refreshYearListWithMoments:(id)a0;
- (id)libraryClusterer:(id)a0 createMomentClustersForAssetClusters:(id)a1 existingMomentDataForAssets:(id)a2;

@end
