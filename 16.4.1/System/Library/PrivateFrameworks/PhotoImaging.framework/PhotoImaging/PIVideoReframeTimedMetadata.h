@class NSArray;

@interface PIVideoReframeTimedMetadata : NSObject

@property (readonly) struct { long long value; int timescale; unsigned int flags; long long epoch; } time;
@property (readonly) NSArray *subjects;
@property (readonly) struct CGVector { double dx; double dy; } estimatedCenterMotion;
@property (readonly) struct CGVector { double dx; double dy; } estimatedMotionBlur;
@property (readonly) struct { void /* unknown type, empty encoding */ columns[3]; } trajectoryHomography;

- (void)setTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void).cxx_destruct;
- (void)setEstimatedMotionBlur:(struct CGVector { double x0; double x1; })a0;
- (void)setEstimatedCenterMotion:(struct CGVector { double x0; double x1; })a0;
- (void)setSubjects:(id)a0;
- (void)setTrajectoryHomography:(struct { void /* unknown type, empty encoding */ x0[3]; })a0;

@end
