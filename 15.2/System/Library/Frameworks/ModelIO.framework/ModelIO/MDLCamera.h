@class CAAnimation;

@interface MDLCamera : MDLObject {
    struct RTCamera { void /* function */ **x0; unsigned long long x1; unsigned long long x2; float x3; float x4; int x5; float *x6; id **x7; struct { void /* unknown type, empty encoding */ x0[4]; } x8; struct { void /* unknown type, empty encoding */ x0[4]; } x9; struct RTRaySegment *x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; } *_camera;
}

@property (copy, nonatomic) CAAnimation *focalLengthAnimation;
@property (copy, nonatomic) CAAnimation *focalDistanceAnimation;
@property (copy, nonatomic) CAAnimation *fStopAnimation;
@property (copy, nonatomic) CAAnimation *apertureAnimation;
@property (copy, nonatomic) CAAnimation *apertureAspectAnimation;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } projectionMatrix;
@property (nonatomic) unsigned long long projection;
@property (nonatomic) float nearVisibilityDistance;
@property (nonatomic) float farVisibilityDistance;
@property (nonatomic) float worldToMetersConversionScale;
@property (nonatomic) float barrelDistortion;
@property (nonatomic) float fisheyeDistortion;
@property (nonatomic) float opticalVignetting;
@property (nonatomic) float chromaticAberration;
@property (nonatomic) float focalLength;
@property (nonatomic) float focusDistance;
@property (nonatomic) float fieldOfView;
@property (nonatomic) float fStop;
@property (nonatomic) unsigned long long apertureBladeCount;
@property (nonatomic) float maximumCircleOfConfusion;
@property (nonatomic) double shutterOpenInterval;
@property (nonatomic) float sensorVerticalAperture;
@property (nonatomic) float sensorAspect;
@property (nonatomic) void /* unknown type, empty encoding */ sensorEnlargement;
@property (nonatomic) void /* unknown type, empty encoding */ sensorShift;
@property (nonatomic) void /* unknown type, empty encoding */ flash;
@property (nonatomic) void /* unknown type, empty encoding */ exposureCompression;
@property (nonatomic) void /* unknown type, empty encoding */ exposure;

- (float)aspect;
- (float)fov;
- (float)zFar;
- (void)setAspect:(float)a0;
- (float)zNear;
- (long long)version;
- (float)aperture;
- (void).cxx_destruct;
- (void)setAperture:(float)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)lookAt:(SEL)a0;
- (void)setFov:(float)a0;
- (void)dealloc;
- (void)setZNear:(float)a0;
- (void)setZFar:(float)a0;
- (struct RTCamera { void /* function */ **x0; unsigned long long x1; unsigned long long x2; float x3; float x4; int x5; float *x6; id **x7; struct { void /* unknown type, empty encoding */ x0[4]; } x8; struct { void /* unknown type, empty encoding */ x0[4]; } x9; struct RTRaySegment *x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; } *)rtCamera;
- (struct { void /* unknown type, empty encoding */ x0[4]; })getViewMatrixAtTime:(double)a0;
- (struct { void /* unknown type, empty encoding */ x0[4]; })getProjectionMatrixAtTime:(double)a0;
- (void /* unknown type, empty encoding */)rayTo:(id)a0 forViewPort:(SEL)a1;
- (float)circleOfConfusionForDistance:(float)a0;
- (id)bokehKernelWithSize:(SEL)a0;
- (void)frameBoundingBox:(struct { })a0 setNearAndFar:(BOOL)a1;
- (void)lookAt:(id)a0 from:(SEL)a1;

@end
