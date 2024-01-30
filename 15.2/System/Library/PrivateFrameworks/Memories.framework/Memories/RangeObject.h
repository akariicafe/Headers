@interface RangeObject : NSObject

@property (readonly, nonatomic) struct { long long _start; long long _duration; } range;

+ (id)rangeObjectWithRange:(struct { long long x0; long long x1; })a0;
+ (id)rangesFromIndexSet:(id)a0;

- (void)setRange:(struct { long long x0; long long x1; })a0;
- (id)initWithRange:(struct { long long x0; long long x1; })a0;
- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
