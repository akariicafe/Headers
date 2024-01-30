@interface HMDCoordinationPrimaryMeshLogEvent : HMMLogEvent

@property BOOL isLeader;
@property BOOL didChangeLeader;
@property BOOL didElectLeader;
@property BOOL isInSecondaryMesh;

@end
