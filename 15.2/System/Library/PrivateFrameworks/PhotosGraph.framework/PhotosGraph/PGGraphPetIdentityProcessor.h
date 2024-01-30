@class PGGraph, PHPhotoLibrary, NSObject;
@protocol OS_os_log;

@interface PGGraphPetIdentityProcessor : NSObject

@property (nonatomic) short detectionType;
@property (weak, nonatomic) PGGraph *graph;
@property (weak, nonatomic) PHPhotoLibrary *photoLibrary;
@property (retain, nonatomic) NSObject<OS_os_log> *loggingConnection;
@property (nonatomic) BOOL petPrintClusteringEnabled;

+ (unsigned long long)petFaceClusterMinSize;
+ (unsigned long long)petFaceClusteringType;
+ (double)petFaceClusteringThreshold;

- (void).cxx_destruct;
- (id)initWithDetectionType:(short)a0 photoLibrary:(id)a1 graph:(id)a2 loggingConnection:(id)a3;
- (id)momentNodesForFaces:(id)a0;
- (id)petFacesAtHome;
- (BOOL)updatePetIdentityWithError:(id *)a0;
- (id)fetchPetPersons;
- (id)_fetchPetFaceGroups;
- (id)_fetchPetFacesInMomentsForUUIDs:(id)a0;
- (id)_createClustersFromPetFaces:(id)a0 withErrors:(id)a1;
- (void)_sortFaceClusters:(id)a0;
- (BOOL)updateFacesNameSourceToSourceGraphIfNeeded:(id)a0 error:(id *)a1;
- (BOOL)updatePetFaceGroupsForFaceClusters:(id)a0 error:(id *)a1;
- (BOOL)updatePetPersonsForFaceClusters:(id)a0 error:(id *)a1;
- (id)removeClusterMatchingPetEntityFaceSet:(id)a0 fromFaceClustersAtHome:(id)a1;

@end
