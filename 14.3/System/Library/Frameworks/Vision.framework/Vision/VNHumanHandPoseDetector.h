@interface VNHumanHandPoseDetector : VNHumanPoseDetector

+ (Class)recognizedPointsObservationClass;

- (id)vcpPoseRequestRuntimeOptionsForDetectorOptions:(id)a0 error:(id *)a1;
- (BOOL)completeInitializationForSession:(id)a0 error:(id *)a1;

@end
