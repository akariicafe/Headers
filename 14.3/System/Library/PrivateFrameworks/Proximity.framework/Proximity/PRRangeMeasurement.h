@interface PRRangeMeasurement : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double measurement;
@property (readonly, nonatomic) double uncertainty;

+ (id)measurementWithRange:(double)a0 uncertainty:(double)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithRange:(double)a0 uncertainty:(double)a1;

@end
