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

+ (BOOL)persistsState;
+ (short)workerType;
+ (long long)applicationDataFolderIdentifier;

- (void)cooldown;
- (void)_cleanup;
- (void)loadPersonsModel;
- (void)processPendingAssetIdentifiers;
- (void)warmupWithProgressBlock:(id /* block */)a0;
- (void)processAsset:(id)a0;
- (void)configureRequest:(id)a0 algorithmUmbrellaVersion:(unsigned int)a1;
- (void).cxx_destruct;
- (void)analyzeAsset:(id)a0 withImageProvider:(id /* block */)a1;
- (BOOL)startAnalysisJob:(id)a0 error:(id *)a1;
- (id)initWithPhotoAnalysisManager:(id)a0 dataLoader:(id)a1;
- (BOOL)stopAnalysisJob:(id)a0 error:(id *)a1;

@end
