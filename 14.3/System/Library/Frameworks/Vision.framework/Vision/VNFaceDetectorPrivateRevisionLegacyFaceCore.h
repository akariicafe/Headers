@interface VNFaceDetectorPrivateRevisionLegacyFaceCore : VNFaceDetector

+ (id)_convertVNOptionsToFaceCoreSetupOptions:(id)a0;
+ (id)_convertVNOptionsToFaceCoreDetectOptions:(id)a0;
+ (id)_convertVNOptionsToFaceCoreExtractOptions:(id)a0;
+ (id)_convertVNOptionsToFaceCoreOptions:(id)a0 optionsMap:(id)a1;

- (id)processWithOptions:(id)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 warningRecorder:(id)a2 error:(id *)a3;

@end
