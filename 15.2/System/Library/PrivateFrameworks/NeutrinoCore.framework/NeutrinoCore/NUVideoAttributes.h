@interface NUVideoAttributes : NSObject

@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } duration;

- (id)init;
- (id)initWithDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

@end
