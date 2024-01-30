@class VNPersonsModel, VCPFaceAnalyzer, PHPhotoLibrary, NSObject;
@protocol OS_dispatch_queue;

@interface VCPPhotosQuickFaceIdentificationManager : NSObject {
    VNPersonsModel *_personsModel;
    PHPhotoLibrary *_photoLibrary;
    VCPFaceAnalyzer *_faceAnalyzer;
    NSObject<OS_dispatch_queue> *_management;
}

- (int)_detectFacesWithPVImage:(id)a0 forAsset:(id)a1 withAnalysis:(id *)a2;
- (id)initWithPhotoLibrary:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (int)_persistResults:(id)a0 withFaces:(id)a1 forAsset:(id)a2;
- (int)processAsset:(id)a0;
- (BOOL)_persistPersonsModel:(id)a0 error:(id *)a1;
- (int)_loadPVImage:(id *)a0 forAsset:(id)a1;
- (int)_generatePersonsModelShouldForce:(BOOL)a0 extendTimeoutBlock:(id /* block */)a1 cancel:(id /* block */)a2;
- (BOOL)_personsModelLastGenerationDidExceedTimeInterval;
- (BOOL)_needToGeneratePersonsModel;
- (int)generatePersonsModelWithExtendTimeout:(id /* block */)a0 cancel:(id /* block */)a1;
- (int)_loadPersonsModel;
- (int)_classifyFaces:(id)a0 forAsset:(id)a1 withResults:(id *)a2;
- (id)fetchPersonsForFaceIDModel;

@end
