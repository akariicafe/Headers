@class NSArray;

@interface FlexMLSegment : NSObject

@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } duration;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } trackTime;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } summaryTime;
@property (readonly, nonatomic) NSArray *gainFunction;

- (void).cxx_destruct;
- (id)initWithDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 trackTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 summaryTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 gainFunction:(id)a3;

@end
