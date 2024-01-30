@interface PPTIntervalSetRequest : PPTDataRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithMetrics:(id)a0 predicate:(id)a1 timeFilter:(id)a2;

@end
