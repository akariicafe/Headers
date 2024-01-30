@class NSString;

@interface PVTimelineMarker : NSObject

@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (nonatomic) int type;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *comment;
@property (nonatomic) int color;

+ (id)markerWithOZXTimeMarkerFigTime:(struct _OZXTimeMarkerFigTime { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct __CFString *x2; struct __CFString *x3; unsigned int x4; unsigned int x5; } *)a0;
+ (id)markerWithOZXTimeMarker:(struct _OZXTimeMarker { double x0; double x1; struct __CFString *x2; struct __CFString *x3; unsigned int x4; unsigned int x5; } *)a0;
+ (id)markerWithType:(int)a0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1;

- (void).cxx_destruct;
- (id)initWithType:(int)a0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1;

@end
