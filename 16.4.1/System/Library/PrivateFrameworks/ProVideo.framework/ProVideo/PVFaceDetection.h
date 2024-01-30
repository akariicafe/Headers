@class AVMetadataFaceObject;

@interface PVFaceDetection : NSObject

@property (readonly, nonatomic) long long ID;
@property (readonly, nonatomic) BOOL hasRollAngle;
@property (readonly, nonatomic) double rollAngleInDegrees;
@property (readonly, nonatomic) BOOL hasYawAngle;
@property (readonly, nonatomic) double yawAngleInDegrees;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundingBox;
@property (readonly, nonatomic) long long detectionOrientation;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } time;
@property (readonly, retain, nonatomic) AVMetadataFaceObject *faceObject;

+ (id)faceDetection:(long long)a0 :(BOOL)a1 :(double)a2 :(BOOL)a3 :(double)a4 :(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5 :(long long)a6 :(struct { long long x0; int x1; unsigned int x2; long long x3; })a7 :(id)a8;

- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqualToFaceDetection:(id)a0;

@end
