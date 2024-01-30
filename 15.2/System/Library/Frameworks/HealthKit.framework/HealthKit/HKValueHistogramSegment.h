@class HKQuantityRange;

@interface HKValueHistogramSegment : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) HKQuantityRange *quantityRange;
@property (readonly, nonatomic) long long count;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithQuantityRange:(id)a0 count:(long long)a1;

@end
