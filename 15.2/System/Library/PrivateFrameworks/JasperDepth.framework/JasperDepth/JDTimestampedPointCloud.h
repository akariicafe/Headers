@class JDPointCloud;

@interface JDTimestampedPointCloud : NSObject

@property (readonly) JDPointCloud *pointCloud;
@property (readonly) struct { long long value; int timescale; unsigned int flags; long long epoch; } timestamp;

- (void).cxx_destruct;
- (id)initWithPointCloud:(id)a0 andTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;

@end
