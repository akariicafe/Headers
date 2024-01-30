@interface PADVNFacePoseObservation : NSObject

@property (nonatomic) double roll;
@property (nonatomic) double pitch;
@property (nonatomic) double yaw;
@property (nonatomic) double smilingConfidence;
@property (nonatomic) double eyesClosedConfidence;
@property (nonatomic) double timestamp;

@end
