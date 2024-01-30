@class NSDate;

@interface WFNextHourPrecipitationCondition : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) double intensity;
@property (readonly, nonatomic) double probability;
@property (readonly, nonatomic) NSDate *validUntil;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_stringForType:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)typeForString:(id)a0;
- (id)initWithType:(id)a0 intensity:(double)a1 probability:(double)a2 validUntil:(id)a3;

@end
