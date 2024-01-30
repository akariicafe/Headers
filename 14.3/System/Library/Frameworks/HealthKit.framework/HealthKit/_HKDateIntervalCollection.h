@class NSDateComponents, NSDate;

@interface _HKDateIntervalCollection : NSObject <NSCopying, NSSecureCoding> {
    double _approximateIntervalDuration;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDate *anchorDate;
@property (readonly, copy, nonatomic) NSDateComponents *intervalComponents;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dateIntervalAtIndex:(long long)a0;
- (id)dateIntervalContainingDate:(id)a0 index:(long long *)a1;
- (id)initWithAnchorDate:(id)a0 intervalComponents:(id)a1;
- (id)dateIntervalForIntervalsContainingInterval:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
