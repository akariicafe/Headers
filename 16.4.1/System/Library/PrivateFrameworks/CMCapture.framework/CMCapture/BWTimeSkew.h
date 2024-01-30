@interface BWTimeSkew : NSObject

@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } native;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } original;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } adjusted;
@property (readonly, nonatomic) BOOL isBracketFrame;
@property (readonly, nonatomic) BOOL isSISFrame;
@property (nonatomic) BOOL isStartOfDiscontinuity;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithNativeTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 originalTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 isBracketFrame:(BOOL)a2 isSISFrame:(BOOL)a3;
- (id)description;

@end
