@interface AVMetadataFaceObjectInternal : NSObject

@property (nonatomic) long long faceID;
@property (nonatomic) BOOL hasRollAngle;
@property (nonatomic) double rollAngle;
@property (nonatomic) BOOL hasYawAngle;
@property (nonatomic) double yawAngle;
@property (nonatomic) BOOL hasLeftEyeClosedConfidence;
@property (nonatomic) int leftEyeClosedConfidence;
@property (nonatomic) BOOL hasRightEyeClosedConfidence;
@property (nonatomic) int rightEyeClosedConfidence;
@property (nonatomic) BOOL hasSmileConfidence;
@property (nonatomic) int smileConfidence;
@property (nonatomic) BOOL hasLeftEyeBounds;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } leftEyeBounds;
@property (nonatomic) BOOL hasRightEyeBounds;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rightEyeBounds;

@end
