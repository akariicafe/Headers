@class WFTemperature;

@interface WADayForecast : NSObject <NSCopying>

@property (copy, nonatomic) WFTemperature *high;
@property (copy, nonatomic) WFTemperature *low;
@property (nonatomic) double percentPrecipitation;
@property (nonatomic) unsigned long long icon;
@property (nonatomic) unsigned long long dayOfWeek;
@property (nonatomic) unsigned long long dayNumber;
@property (nonatomic) BOOL isYesterday;

+ (id)dayForecastForLocation:(id)a0 conditions:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)compareDayNumberToDayForecast:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
