@class PHPhotoLibrary, VCPFaceAnalyzer;

@interface VCPPhotosQuickFaceDetectionManager : NSObject {
    PHPhotoLibrary *_photoLibrary;
    VCPFaceAnalyzer *_faceAnalyzer;
}

- (int)processAsset:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithPhotoLibrary:(id)a0;
- (int)_persistFaces:(id)a0 forAsset:(id)a1;

@end
