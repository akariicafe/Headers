@class CMAttitude;

@interface CMDeviceMotionInternal : NSObject <NSCopying> {
    struct { double x; double y; double z; } fGravity;
    struct { double x; double y; double z; } fUserAcceleration;
    struct { double x; double y; double z; } fRotationRate;
    CMAttitude *fAttitude;
    struct { double x; double y; double z; } fMagneticField;
    int fMagneticFieldCalibrationLevel;
    BOOL fDoingYawCorrection;
    BOOL fDoingBiasEstimation;
    float fHeading;
    float fHeadingAccuracy;
    BOOL fFusedWithVision;
    BOOL fUsingVisionCorrections;
    long long fSensorLocation;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void)setDeviceMotion:(struct { struct { double x0; double x1; double x2; double x3; } x0; struct { float x0; float x1; float x2; } x1; struct { float x0; float x1; float x2; } x2; struct { float x0; float x1; float x2; } x3; int x4; BOOL x5; BOOL x6; BOOL x7; float x8; BOOL x9; BOOL x10; int x11; })a0 internal:(struct { float x0; })a1;
- (id)initWithDeviceMotion:(struct { struct { double x0; double x1; double x2; double x3; } x0; struct { float x0; float x1; float x2; } x1; struct { float x0; float x1; float x2; } x2; struct { float x0; float x1; float x2; } x3; int x4; BOOL x5; BOOL x6; BOOL x7; float x8; BOOL x9; BOOL x10; int x11; })a0 internal:(struct { float x0; })a1;

@end
