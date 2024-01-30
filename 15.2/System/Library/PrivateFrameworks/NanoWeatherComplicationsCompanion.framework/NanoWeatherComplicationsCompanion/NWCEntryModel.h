@class WFAirQualityConditions, NSArray, WFWeatherConditions;

@interface NWCEntryModel : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) WFWeatherConditions *conditions;
@property (readonly) WFAirQualityConditions *airQualityConditions;
@property (readonly) NSArray *hourlyEntryModels;
@property (readonly) WFWeatherConditions *dailyConditions;
@property (readonly) unsigned long long timeOfDay;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithConditions:(id)a0 timeOfDay:(unsigned long long)a1;
- (id)initWithConditions:(id)a0 hourlyEntryModels:(id)a1 dailyConditions:(id)a2 timeOfDay:(unsigned long long)a3;
- (id)initWithConditions:(id)a0 dailyConditions:(id)a1 timeOfDay:(unsigned long long)a2;
- (id)initWithConditions:(id)a0 airQualityConditions:(id)a1 hourlyEntryModels:(id)a2 dailyConditions:(id)a3 timeOfDay:(unsigned long long)a4;
- (id)initWithConditions:(id)a0 hourlyEntryModels:(id)a1 timeOfDay:(unsigned long long)a2;
- (id)initWithConditions:(id)a0 airQualityConditions:(id)a1 dailyConditions:(id)a2 timeOfDay:(unsigned long long)a3;

@end
