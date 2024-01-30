@class NSDate;

@interface RTPredictedDate : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, nonatomic) double uncertainty;
@property (readonly, nonatomic) double confidence;

- (id)initWithDate:(id)a0 uncertainty:(double)a1 confidence:(double)a2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
