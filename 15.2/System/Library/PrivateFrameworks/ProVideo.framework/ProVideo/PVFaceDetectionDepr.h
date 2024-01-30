@class AVMetadataFaceObject;

@interface PVFaceDetectionDepr : NSObject

@property (nonatomic) long long ID;
@property (nonatomic) BOOL hasRollAngle;
@property (nonatomic) double rollAngleInDegrees;
@property (nonatomic) BOOL hasYawAngle;
@property (nonatomic) double yawAngleInDegrees;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundingBox;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } time;
@property (nonatomic) long long detectionOrientation;
@property (retain) AVMetadataFaceObject *faceObject;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (id)initWithFaceObject:(id)a0;
- (BOOL)isEqualToFaceDetection:(id)a0;

@end
