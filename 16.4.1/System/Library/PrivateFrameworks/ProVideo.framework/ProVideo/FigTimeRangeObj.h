@interface FigTimeRangeObj : NSObject <FigTimeRangeOperationCopying, NSCopying, NSSecureCoding> {
    struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } _range;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)rangeWithRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;

- (void)getValue:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } *)a0;
- (void)setRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (void)encodeWithCoder:(id)a0;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })range;
- (id)copyWithRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })end;
- (id)initWithCoder:(id)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setStart:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })start;
- (id)description;
- (void)setDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)initWithCMTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (id)initWithFigTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (long long)sortByStartTimeAscending:(id)a0;
- (long long)sortByStartTimeDescending:(id)a0;

@end
