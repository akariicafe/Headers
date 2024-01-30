@interface PPTHistogramRequest : PPTDataRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long binCount;
@property (readonly) double minRange;
@property (readonly) double maxRange;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithMetrics:(id)a0 predicate:(id)a1 timeFilter:(id)a2 binCount:(unsigned long long)a3 minRange:(double)a4 maxRange:(double)a5;

@end
