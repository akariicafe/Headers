@class PTCinematographyDetection;

@interface PTCinematographyNetworkPayload : NSObject

@property (readonly) struct { long long value; int timescale; unsigned int flags; long long epoch; } time;
@property (readonly) PTCinematographyDetection *detection;
@property (readonly) BOOL isMissingDetection;

- (void).cxx_destruct;
- (id)initWithTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 detection:(id)a1 missing:(BOOL)a2;

@end
