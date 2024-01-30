@class NSArray;

@interface VNHumanBodyPoseObservation : VNRecognizedPointsObservation

@property (readonly, copy) NSArray *availableJointNames;
@property (readonly, copy) NSArray *availableJointsGroupNames;

- (id)recognizedPointForJointName:(id)a0 error:(id *)a1;
- (id)recognizedPointsForJointsGroupName:(id)a0 error:(id *)a1;

@end
