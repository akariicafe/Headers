@class NSArray, NSDateInterval;

@interface HKValueHistogram : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *segments;
@property (readonly, copy, nonatomic) NSDateInterval *dateInterval;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (double)fractionOfValuesInSegmentAtIndex:(long long)a0;
- (id)initWithSegments:(id)a0 dateInterval:(id)a1;
- (long long)totalSampleCount;

@end
