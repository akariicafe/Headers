@class NSNumber;

@interface SASTimeIntervalTransport : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *transport;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (double)timeInterval;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)initWithTimeInterval:(double)a0;
- (void).cxx_destruct;

@end
