@interface AXWeatherUtilities : NSObject

+ (id)sharedInstance;

- (unsigned long long)_weatherCodeForGenericIconName:(id)a0;
- (id)descriptionForPrecipitation:(id)a0 weatherConditionCode:(unsigned long long)a1;
- (id)descriptionForWeatherConditionImageName:(id)a0;
- (id)descriptionForWeatherWFConditionCode:(unsigned long long)a0;

@end
