@class PHPhotoLibrary;

@interface VCPPhotosAutoCounterWorker : NSObject {
    PHPhotoLibrary *_photoLibrary;
    unsigned long long _detectionVersion;
    unsigned long long _recognitionVersion;
    unsigned long long _personClusterVersion;
    int _processingVersion;
    unsigned long long _clusterDumpFaceFetched;
}

+ (BOOL)_dumpFaceprint;
+ (BOOL)_dumpAssetsToFaces;
+ (id)workerWithPhotoLibrary:(id)a0;

- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0;
- (id)_groundTruthURL;
- (int)_loadGroundTruthURL:(id)a0 toGroundTruth:(id *)a1 error:(id *)a2;
- (int)_loadGroundTruth:(id *)a0 error:(id *)a1;
- (int)_processFetchedFaceGroup:(id)a0 forPersonID:(id)a1 facesPerAsset:(id)a2 assetInformation:(id)a3 extendTimeoutBlock:(id /* block */)a4 cancelBlock:(id /* block */)a5;
- (void)_fetchPersonWithIdentifier:(id)a0 facesPerAsset:(id)a1 assetInformation:(id)a2 extendTimeoutBlock:(id /* block */)a3 cancelBlock:(id /* block */)a4;
- (id)_fetchPeopleHomePersons;
- (double)_overlapRatioOf:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 with:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_exportAssetsToFacesDetails:(id)a0;
- (int)_parseGroundTruthWithURL:(id)a0 faceCountPerPerson:(id *)a1 personInformation:(id *)a2 faceToPerson:(id *)a3 assetToFaces:(id *)a4 extendTimeoutBlock:(id /* block */)a5 cancelBlock:(id /* block */)a6;
- (int)_measureClusterWithClusterStateURL:(id)a0 groundTruthFaceCountPerPerson:(id)a1 groundTruthPersonInformation:(id)a2 groundTruthFaceToPerson:(id)a3 groundTruthAssetToFaces:(id)a4 measures:(id *)a5 extendTimeoutBlock:(id /* block */)a6 cancelBlock:(id /* block */)a7;
- (int)_measurePVPersonClusters:(id)a0 groundTruthFaceCountPerPerson:(id)a1 groundTruthPersonInformation:(id)a2 groundTruthFaceToPerson:(id)a3 groundTruthAssetToFaces:(id)a4 measures:(id *)a5 extendTimeoutBlock:(id /* block */)a6 cancelBlock:(id /* block */)a7;
- (int)_reportCoreAnalyticsWithVisionClusterMeasure:(id)a0 personClusterMeasure:(id)a1 personClusters:(id)a2 andGroundTruthInformation:(id)a3;
- (int)calculateAndReportClusterAccuracyWithVisionClusterURL:(id)a0 andPersonClusters:(id)a1 withGroundtruth:(id)a2 results:(id *)a3 extendTimeoutBlock:(id /* block */)a4 cancelBlock:(id /* block */)a5;
- (int)_parseSIMLGroundTruthWithURL:(id)a0 faceCountPerPerson:(id *)a1 personInformation:(id *)a2 faceToPerson:(id *)a3 assetToFaces:(id *)a4 extendTimeoutBlock:(id /* block */)a5 cancelBlock:(id /* block */)a6;
- (int)exportClustersStates:(id *)a0 error:(id *)a1 extendTimeoutBlock:(id /* block */)a2 cancelBlock:(id /* block */)a3;
- (unsigned long long)optInPersonCount;
- (id)_anonymizedName:(id)a0;
- (BOOL)optInStatus:(id)a0 error:(id *)a1;
- (BOOL)optInPerson:(id)a0 error:(id *)a1 extendTimeoutBlock:(id /* block */)a2 cancelBlock:(id /* block */)a3;
- (int)calculateAndReportClusterAccuracyWithVisionClusterURL:(id)a0 andPersonClusters:(id)a1 results:(id *)a2 extendTimeoutBlock:(id /* block */)a3 cancelBlock:(id /* block */)a4;
- (int)validateClusterAccuracyWithSIMLGroundtruth:(id)a0 results:(id *)a1 extendTimeoutBlock:(id /* block */)a2 cancelBlock:(id /* block */)a3;

@end
