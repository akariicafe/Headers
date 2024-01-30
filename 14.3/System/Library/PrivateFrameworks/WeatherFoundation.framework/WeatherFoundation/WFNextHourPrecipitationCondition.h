@class NSDate;

@interface WFNextHourPrecipitationCondition : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) double intensity;
@property (readonly, nonatomic) double probability;
@property (readonly, nonatomic) NSDate *validUntil;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithType:(id)a0 intensity:(double)a1 probability:(double)a2 validUntil:(id)a3;
- (unsigned long long)typeForString:(id)a0;

@end
