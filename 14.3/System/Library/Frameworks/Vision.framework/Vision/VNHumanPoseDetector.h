@class VCPRequest;

@interface VNHumanPoseDetector : VNDetector {
    VCPRequest *_humanPoseDetector;
}

+ (Class)recognizedPointsObservationClass;
+ (id)configurationOptionKeysForDetectorKey;

- (void).cxx_destruct;
- (id)vcpPoseRequestSetupOptionsForDetectorOptions:(id)a0 error:(id *)a1;
- (id)vcpPoseRequestRuntimeOptionsForDetectorOptions:(id)a0 error:(id *)a1;
- (id)processWithOptions:(id)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 warningRecorder:(id)a2 error:(id *)a3;
- (BOOL)supportsProcessingDevice:(id)a0;

@end
