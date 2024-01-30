@class NSSet, NSMutableDictionary, NSString, PVVisionHelper;
@protocol PVPhotoLibraryProtocol;

@interface PVPersonClusterManager : NSObject <PVPhotoLibraryProtocol> {
    NSMutableDictionary *_representativeFaceObservationForPersonIdentifier;
    NSMutableDictionary *_distancesForPersonLocalIdentifier;
    NSMutableDictionary *_distancesInCommonMomentsForPersonLocalIdentifier;
    NSMutableDictionary *_confidencesForMergedPersonLocalIdentifier;
}

@property (retain, nonatomic) id<PVPhotoLibraryProtocol> photoLibrary;
@property (retain, nonatomic) PVVisionHelper *visionHelper;
@property (retain, nonatomic) NSMutableDictionary *personClusters;
@property (retain, nonatomic) NSSet *assetsToIgnore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)momentSortDescriptors;
+ (id)assetSortDescriptors;
+ (id)faceGroupSortDescriptors;
+ (id)faceSortDescriptors;
+ (id)peopleSortDescriptors;
+ (id)personProcessingSortDescriptors;
+ (id)nodeSortDescriptors;

- (id)initWithPhotoLibrary:(id)a0;
- (void)clearCaches;
- (void).cxx_destruct;
- (void)mergePersons:(id)a0 withPerson:(id)a1;
- (id)pv_fetchMoments;
- (BOOL)pv_performChangesAndWait:(id /* block */)a0 error:(id *)a1;
- (float)pv_faceProcessingProgress;
- (id)pv_fetchAssetsForFaceGroup:(id)a0;
- (id)pv_fetchAssetsForFaceLocalIdentifiers:(id)a0;
- (id)pv_fetchAssetsForPerson:(id)a0;
- (id)pv_fetchAssetsInMoment:(id)a0;
- (id)pv_fetchAssetsWithLocalIdentifiers:(id)a0;
- (id)pv_fetchCandidatePersonsForPerson:(id)a0;
- (id)pv_fetchFaceGroups;
- (id)pv_fetchFaceGroupsForPerson:(id)a0;
- (id)pv_fetchFacesForFaceGroup:(id)a0;
- (id)pv_fetchFacesForPerson:(id)a0;
- (id)pv_fetchFacesForPerson:(id)a0 inMoment:(id)a1;
- (id)pv_fetchFacesForPersonLocalIdentifiers:(id)a0 inMoment:(id)a1;
- (id)pv_fetchFacesGroupedByAssetLocalIdentifierForAssets:(id)a0;
- (id)pv_fetchFacesWithLocalIdentifiers:(id)a0;
- (id)pv_fetchInvalidAssetIdentifiersForCommonComparison;
- (id)pv_fetchInvalidCandidatePersonsForPerson:(id)a0;
- (id)pv_fetchMomentsForAssetsWithLocalIdentifiers:(id)a0;
- (id)pv_fetchMomentsForPerson:(id)a0;
- (id)pv_fetchMomentsWithLocalIdentifiers:(id)a0;
- (id)pv_fetchPersonsGroupedByAssetLocalIdentifierForAssets:(id)a0;
- (id)pv_fetchPersonsInMoment:(id)a0;
- (id)pv_fetchPersonsWithLocalIdentifiers:(id)a0;
- (id)pv_fetchPersonsWithType:(unsigned long long)a0;
- (id)pv_lastAssetDate;
- (unsigned long long)pv_numberOfFacesWithFaceprints;
- (id)pv_persistentStorageDirectoryURL;
- (float)_adjustDistanceFactorForPerson:(id)a0 andPerson:(id)a1 forAgeType:(unsigned short)a2 andAgeType:(unsigned short)a3;
- (id)_mapPersonClustersToFaceGroups:(id)a0;
- (id)_mapPersonClustersToPersons:(id)a0;
- (float)_minimiumDistanceRequiredForCommonAssetDistanceForAgeType:(unsigned short)a0;
- (id)_representativeFaceObservationForPerson:(id)a0 ageType:(unsigned short *)a1 inAssetCollections:(id)a2;
- (long long)assetsOverlapBetweenPerson:(id)a0 andPerson:(id)a1;
- (long long)assetsOverlapBetweenPersonAssetIdentifiers:(id)a0 andPersonAssetIdentifiers:(id)a1;
- (float)distanceBetweenPerson:(id)a0 andPerson:(id)a1 useCommonMoments:(BOOL)a2 minAgeType:(unsigned short *)a3 updateBlock:(id /* block */)a4 error:(id *)a5;
- (float)distanceWithOverlapCheckBetweenPerson:(id)a0 andPerson:(id)a1 useCommonMoments:(BOOL)a2 minAgeType:(unsigned short *)a3 updateBlock:(id /* block */)a4 error:(id *)a5;
- (void)invalidateCachesForPerson:(id)a0;
- (float)mergeConfidenceBetweenPersonLocalIdentifier:(id)a0 andCandidateLocalIdentifiers:(id)a1;
- (unsigned short)minAgeTypeForFaceAgeType:(unsigned short)a0 andFaceAgeType:(unsigned short)a1;
- (unsigned long long)numberOfAssetsInCommonBetweenPerson:(id)a0 andPerson:(id)a1;
- (unsigned long long)numberOfAssetsInCommonBetweenPersonAssetIdentifiers:(id)a0 andPersonAssetIdentifiers:(id)a1;
- (unsigned long long)numberOfMomentsInCommonBetweenPerson:(id)a0 andPerson:(id)a1;
- (id)representativeFaceObservationForFaces:(id)a0 ageType:(unsigned short *)a1 inPerson:(id)a2;
- (id)representativeFaceObservationForPerson:(id)a0 ageType:(unsigned short *)a1;
- (void)updateConfidenceCacheBetweenPersonLocalIdentifier:(id)a0 andOtherPersonLocalIdentifier:(id)a1 withDistance:(double)a2;

@end
