@protocol VNClustererModelBuilding, VNClustererModelQuerying;

@interface VNClustererBuilder : NSObject <VNClustererModelBuilding, VNClustererModelQuerying> {
    id<VNClustererModelQuerying, VNClustererModelBuilding> _context;
}

+ (id)clustererBuilderWithOptions:(id)a0 error:(id *)a1;
+ (id)nonGroupedGroupID;
+ (id)clustererModelFileNamesFromState:(id)a0 storedInPath:(id)a1 error:(id *)a2;
+ (id)representativenessForFaces:(id)a0 error:(id *)a1;
+ (id)distanceBetweenFacesWithFaceprint:(id)a0 andFaceprint:(id)a1 error:(id *)a2;
+ (id)distanceBetweenFacesWithFaceObservation:(id)a0 andFaceObservation:(id)a1 error:(id *)a2;

- (id)updateModelByAddingFaces:(id)a0 andRemovingFaces:(id)a1 canceller:(id)a2 error:(id *)a3;
- (void).cxx_destruct;
- (id)getDistances:(id)a0 to:(id)a1 error:(id *)a2;
- (id)maximumFaceIdInModelAndReturnError:(id *)a0;
- (id)getAllClustersAndReturnError:(id *)a0;
- (id)allClusteredFaceIdsAndReturnError:(id *)a0;
- (id)clusteredFaceIdsForClusterContainingFaceId:(id)a0 error:(id *)a1;
- (id)l1ClusteredFaceIdsGroupedByL0ClustersForClustersContainingFaceIds:(id)a0 error:(id *)a1;
- (id)distanceBetweenClustersWithFaceId:(id)a0 andFaceId:(id)a1 error:(id *)a2;
- (id)distanceBetweenLevel1Clusters:(id)a0 error:(id *)a1;
- (id)suggestionsForClustersWithFaceIds:(id)a0 affinityThreshold:(float)a1 canceller:(id)a2 error:(id *)a3;
- (id)updateModelByAddingFaces:(id)a0 canceller:(id)a1 error:(id *)a2;
- (id)updateModelByAddingFaces:(id)a0 withGroupingIdentifiers:(id)a1 canceller:(id)a2 error:(id *)a3;
- (id)updateModelByRemovingFaces:(id)a0 canceller:(id)a1 error:(id *)a2;
- (BOOL)resetModelState:(id)a0 error:(id *)a1;
- (id)saveAndReturnCurrentModelState:(id *)a0;
- (id)updateModelByAddingFaces:(id)a0 withGroupingIdentifiers:(id)a1 andRemovingFaces:(id)a2 canceller:(id)a3 error:(id *)a4;
- (id)initWithType:(id)a0 cachePath:(id)a1 state:(id)a2 threshold:(float)a3 babyThreshold:(float)a4 kidThreshold:(float)a5 requestRevision:(unsigned long long)a6 error:(id *)a7;
- (id)initWithType:(id)a0 cachePath:(id)a1 state:(id)a2 threshold:(float)a3 torsoThreshold:(float)a4 babyThreshold:(float)a5 kidThreshold:(float)a6 requestRevision:(unsigned long long)a7 error:(id *)a8;

@end
