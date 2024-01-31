@interface AVValueTiming : NSObject <NSSecureCoding, NSCopying, NSMutableCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double currentValue;
@property (readonly, nonatomic) double anchorValue;
@property (readonly, nonatomic) double anchorTimeStamp;
@property (readonly, nonatomic) double rate;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (double)currentTimeStamp;
+ (id)valueTimingWithAnchorValue:(double)a0 anchorTimeStamp:(double)a1 rate:(double)a2;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (Class)classForCoder;
- (id)initWithAnchorValue:(double)a0 anchorTimeStamp:(double)a1 rate:(double)a2;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (struct { double x0; double x1; })_timing;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)valueForTimeStamp:(double)a0;
- (id)initWithValueTiming:(id)a0;
- (BOOL)isEqualToValueTiming:(id)a0;
- (double)timeStampForValue:(double)a0;

@end
