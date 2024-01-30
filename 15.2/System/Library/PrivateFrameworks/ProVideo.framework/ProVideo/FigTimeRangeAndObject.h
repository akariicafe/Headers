@interface FigTimeRangeAndObject : FigTimeRangeObj <FigTimeRangeOperationCopying, NSSecureCoding> {
    id _object;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)rangeAndObjectWithRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 andObject:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)copyWithRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)object;
- (id)initWithFigTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 andObject:(id)a1;
- (id)initWithCMTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 andObject:(id)a1;
- (id)representedToolObject;
- (id)startTimeObject;
- (id)durationObject;

@end
