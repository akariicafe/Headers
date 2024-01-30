@interface AVValueTiming : NSObject <NSSecureCoding, NSCopying, NSMutableCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double currentValue;
@property (readonly, nonatomic) double anchorValue;
@property (readonly, nonatomic) double anchorTimeStamp;
@property (readonly, nonatomic) double rate;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)valueTimingWithAnchorValue:(double)a0 anchorTimeStamp:(double)a1 rate:(double)a2;
+ (double)currentTimeStamp;

- (void)encodeWithCoder:(id)a0;
- (struct { double x0; double x1; })_timing;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (Class)classForCoder;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)valueForTimeStamp:(double)a0;
- (unsigned long long)hash;
- (id)initWithAnchorValue:(double)a0 anchorTimeStamp:(double)a1 rate:(double)a2;
- (id)initWithValueTiming:(id)a0;
- (BOOL)isEqualToValueTiming:(id)a0;
- (double)timeStampForValue:(double)a0;

@end
