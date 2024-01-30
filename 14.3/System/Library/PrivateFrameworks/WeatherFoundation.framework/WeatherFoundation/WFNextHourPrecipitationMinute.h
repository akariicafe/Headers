@class NSDate;

@interface WFNextHourPrecipitationMinute : NSObject <NSCopying>

@property (readonly, nonatomic) double intensity;
@property (readonly, nonatomic) double chance;
@property (readonly, nonatomic) double perceivedIntensity;
@property (readonly, nonatomic) NSDate *date;

- (void).cxx_destruct;
- (id)initWithIntensity:(double)a0 chance:(double)a1 perceivedIntensity:(double)a2 date:(id)a3;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
