@class VNPersonsModel, VCPFaceAnalyzer, VNEntityIdentificationModel, PHPhotoLibrary, NSObject;
@protocol OS_dispatch_queue;

@interface VCPPhotosQuickFaceIdentificationManager : NSObject {
    VNPersonsModel *_personsModel;
    VNEntityIdentificationModel *_petsModel;
    PHPhotoLibrary *_photoLibrary;
    VCPFaceAnalyzer *_faceAnalyzer;
    NSObject<OS_dispatch_queue> *_management;
}

+ (BOOL)_fastFaceMigrationEnabled;

- (BOOL)_persistPetsModel:(id)a0 error:(id *)a1;
- (BOOL)_persistPersonsModel:(id)a0 error:(id *)a1;
- (int)_generatePetsModelWithExtendTimeoutBlock:(id /* block */)a0 cancel:(id /* block */)a1;
- (BOOL)_faceProcessingPassGoal;
- (int)generateVIPModelWithType:(unsigned long long)a0 ignoreLastGenerationTime:(BOOL)a1 modelGenerated:(BOOL *)a2 extendTimeout:(id /* block */)a3 andCancel:(id /* block */)a4;
- (int)_loadPersonsModelAndInitializeFaceAnalyzer;
- (BOOL)_keepCurrentPersonsModel;
- (id)_fetchPetsToFeedVIPModel;
- (int)_classifyFaces:(id)a0 forAsset:(id)a1 withResults:(id *)a2;
- (int)classifyVIPPets;
- (BOOL)_modelLastGenerationDidExceedTimeIntervalForType:(unsigned long long)a0;
- (int)processAsset:(id)a0;
- (int)_generatePersonsModelWithExtendTimeoutBlock:(id /* block */)a0 cancel:(id /* block */)a1;
- (int)_persistResults:(id)a0 withFaces:(id)a1 forAsset:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (id)initWithPhotoLibrary:(id)a0;
- (id)fetchEntityForModelType:(unsigned long long)a0;
- (int)_loadPetsModel;
- (id)_fetchPersonsToFeedVIPModel;
- (BOOL)_needToGenerateModelWithType:(unsigned long long)a0 ignoreLastGenerationTime:(BOOL)a1;

@end
