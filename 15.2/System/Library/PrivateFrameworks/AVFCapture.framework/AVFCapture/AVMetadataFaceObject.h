@class AVMetadataFaceObjectInternal;

@interface AVMetadataFaceObject : AVMetadataObject <NSCopying> {
    AVMetadataFaceObjectInternal *_internal;
}

@property (readonly) long long faceID;
@property (readonly) BOOL hasRollAngle;
@property (readonly) double rollAngle;
@property (readonly) BOOL hasYawAngle;
@property (readonly) double yawAngle;

+ (id)faceObjectWithFigEmbeddedCaptureDeviceFaceDictionary:(id)a0 input:(id)a1 timeStamp:(id)a2;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithFaceID:(long long)a0 hasRollAngle:(BOOL)a1 rollAngle:(double)a2 hasYawAngle:(BOOL)a3 yawAngle:(double)a4 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a5 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a6 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a7;
- (id)initWithType:(id)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 optionalInfoDict:(id)a4 originalMetadataObject:(id)a5 sourceCaptureInput:(id)a6;
- (id)initDerivedMetadataObjectFromMetadataObject:(id)a0 withTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 isVideoMirrored:(BOOL)a2 rollAdjustment:(double)a3;
- (BOOL)hasLeftEyeClosedConfidence;
- (int)leftEyeClosedConfidence;
- (BOOL)hasRightEyeClosedConfidence;
- (int)rightEyeClosedConfidence;
- (BOOL)hasSmileConfidence;
- (int)smileConfidence;
- (BOOL)hasLeftEyeBounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })leftEyeBounds;
- (BOOL)hasRightEyeBounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rightEyeBounds;
- (id)initWithFaceID:(long long)a0 hasRollAngle:(BOOL)a1 rollAngle:(double)a2 hasYawAngle:(BOOL)a3 yawAngle:(double)a4 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a5 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a6 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a7 optionalInfoDict:(id)a8 originalMetadataObject:(id)a9 sourceCaptureInput:(id)a10;
- (id)initWithFigEmbeddedCaptureDeviceFaceDictionary:(id)a0 input:(id)a1 timeStamp:(id)a2;

@end
