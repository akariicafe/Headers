@class HMIPersonsModelManager, NSUUID, HMIGreedyClustering, NSDate, HMIClusteringTaskSummary;
@protocol HMIHomePersonManagerDataSource, HMIFaceClassifier;

@interface HMIHomePersonClusteringTask : HMIHomeTask {
    HMIGreedyClustering *_clusterer;
    id<HMIFaceClassifier> _faceClassifier;
}

@property (readonly) HMIClusteringTaskSummary *summary;
@property (readonly) NSDate *startTime;
@property (readonly) id<HMIHomePersonManagerDataSource> dataSource;
@property (readonly) NSUUID *sourceUUID;
@property (readonly) HMIPersonsModelManager *personsModelManager;

+ (id)logCategory;

- (void)finish;
- (void).cxx_destruct;
- (void)main;
- (id)initWithTaskID:(int)a0 homeUUID:(id)a1 dataSource:(id)a2 sourceUUID:(id)a3 personsModelManager:(id)a4 error:(id *)a5;
- (void)_stageZero_expireUnnamedPersons;
- (void)removePerson:(id)a0;
- (id)personCreatedDateFromFaceCrops:(id)a0;
- (void)_stageOne_fetchFaceCrops;
- (void)_stageTwo_fetchFaceprints:(id)a0;
- (void)_stageThree_generateFaceprintsForFaceCrops:(id)a0 existingFaceprints:(id)a1;
- (void)_stageFour_clusterFaceprints:(id)a0;
- (void)_stageFive_addPersons:(id)a0 clusterMapping:(id)a1 faceprints:(id)a2;
- (void)_stageSix_associateFaceCropsWithClusterMapping:(id)a0 faceprints:(id)a1;

@end
