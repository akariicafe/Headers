@class NSArray;

@interface HRTFEnrollmentPoseStatus : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSArray *yawAngles;
@property (readonly) NSArray *pitchAngles;
@property (readonly) NSArray *remainingYawAngles;
@property (readonly) NSArray *remainingPitchAngles;
@property (readonly) double currentYawAngle;
@property (readonly) unsigned char hasYawAngle;
@property (readonly) double currentPitchAngle;
@property (readonly) unsigned char hasPitchAngle;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } faceBoundingBox;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCurrentYawAngleArray:(double *)a0 yawCapturedArray:(char *)a1 yawCount:(unsigned long long)a2 pitchAngleArray:(double *)a3 pitchCapturedArray:(char *)a4 pitchCount:(unsigned long long)a5 yawAngle:(double)a6 pitchAngle:(double)a7 faceBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a8;
- (id)initWithYawAngleArray:(double *)a0 yawCapturedArray:(char *)a1 yawCount:(unsigned long long)a2 pitchAngleArray:(double *)a3 pitchCapturedArray:(char *)a4 pitchCount:(unsigned long long)a5 isEarTracking:(unsigned char)a6 yawAngle:(double)a7 pitchAngle:(double)a8;

@end
