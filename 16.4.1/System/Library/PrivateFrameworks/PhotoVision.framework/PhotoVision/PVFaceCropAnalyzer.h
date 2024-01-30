@interface PVFaceCropAnalyzer : NSObject

+ (id)bestFaceForFaceDetectionRequest:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (id)faceFromFaceCrop:(id)a0 visionIntegration:(id)a1 faceAlgorithmUmbrellaVersion:(unsigned int)a2 createFaceTorsoprint:(BOOL)a3 error:(id *)a4;

@end
