@class PVVisionAnalyzer, VNPersonsModel, NSString, PHAAnalysisWorkerJob, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface PHAFaceClassificationServiceWorker : PHAWorker <PVVisionIntegrating> {
    NSObject<OS_dispatch_queue> *_workerQueue;
    NSMutableArray *_pendingAssetIdentifiers;
    PHAAnalysisWorkerJob *_currentJob;
}

@property (retain) PVVisionAnalyzer *analyzer;
@property (retain) VNPersonsModel *personsModel;
@property unsigned long long numberOfAssetsToProcess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (short)workerType;
+ (BOOL)persistsState;
+ (long long)applicationDataFolderIdentifier;

- (BOOL)stopAnalysisJob:(id)a0 error:(id *)a1;
- (void)cooldown;
- (id)initWithPhotoAnalysisManager:(id)a0 dataLoader:(id)a1;
- (void).cxx_destruct;
- (void)_cleanup;
- (void)warmupWithProgressBlock:(id /* block */)a0;
- (void)analyzeAsset:(id)a0 withImageProvider:(id /* block */)a1;
- (void)processAsset:(id)a0;
- (void)loadPersonsModel;
- (void)processPendingAssetIdentifiers;
- (BOOL)startAnalysisJob:(id)a0 error:(id *)a1;
- (void)configureRequest:(id)a0 algorithmUmbrellaVersion:(unsigned int)a1;

@end
