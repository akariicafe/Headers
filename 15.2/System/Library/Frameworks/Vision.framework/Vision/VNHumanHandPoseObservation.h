@class NSArray;

@interface VNHumanHandPoseObservation : VNRecognizedPointsObservation

@property (readonly, copy) NSArray *availableJointNames;
@property (readonly, copy) NSArray *availableJointsGroupNames;
@property (readonly) long long chirality;

- (id)recognizedPointForJointName:(id)a0 error:(id *)a1;
- (id)recognizedPointsForJointsGroupName:(id)a0 error:(id *)a1;

@end
