@interface PTCinematographyFocusFramesOptions : NSObject <NSCopying>

@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } minimumRackFocusPullTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } maximumRackFocusPullTime;
@property (nonatomic) float maximumDisparityPerSecond;

+ (struct { long long x0; int x1; unsigned int x2; long long x3; })_defaultMinimumRackFocusPullTime;
+ (struct { long long x0; int x1; unsigned int x2; long long x3; })_defaultMaximumRackFocusPullTime;
+ (float)_defaultMaximumDisparityPerSecond;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)writeToGlobalMetadata:(id)a0;
- (id)initWithGlobalMetadata:(id)a0;

@end
