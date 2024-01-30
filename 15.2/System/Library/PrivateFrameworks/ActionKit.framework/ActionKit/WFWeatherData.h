@class NSArray, NSUnit, NSMeasurement, NSString, CLLocation, NSDate, NSNumber;

@interface WFWeatherData : NSObject <WFNaming, NSSecureCoding, NSCopying>

@property (class, readonly) NSUnit *temperatureUnit;
@property (class, readonly) NSUnit *visibilityUnit;
@property (class, readonly) NSUnit *pressureUnit;
@property (class, readonly) NSUnit *precipitationAmountUnit;
@property (class, readonly) NSUnit *windSpeedUnit;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *date;
@property (readonly, copy, nonatomic) CLLocation *location;
@property (readonly, nonatomic) NSMeasurement *temperature;
@property (readonly, nonatomic) NSMeasurement *highTemperature;
@property (readonly, nonatomic) NSMeasurement *lowTemperature;
@property (readonly, nonatomic) NSMeasurement *feelsLikeTemperature;
@property (readonly, nonatomic) unsigned long long condition;
@property (readonly, nonatomic) NSString *localizedConditionString;
@property (readonly, nonatomic) NSMeasurement *visibility;
@property (readonly, nonatomic) NSMeasurement *dewpoint;
@property (readonly, copy, nonatomic) NSNumber *humidity;
@property (readonly, nonatomic) NSMeasurement *pressure;
@property (readonly, nonatomic) NSMeasurement *precipitationAmount;
@property (readonly, copy, nonatomic) NSNumber *precipitationChance;
@property (readonly, nonatomic) NSMeasurement *windSpeed;
@property (readonly, copy, nonatomic) NSNumber *windDirection;
@property (readonly, copy, nonatomic) NSNumber *uvIndex;
@property (readonly, copy, nonatomic) NSDate *sunriseTime;
@property (readonly, copy, nonatomic) NSDate *sunsetTime;
@property (readonly, copy, nonatomic) NSNumber *localizedAirQualityIndex;
@property (readonly, copy, nonatomic) NSString *localizedAirQualityCategory;
@property (readonly, copy, nonatomic) NSArray *pollutants;
@property (readonly, copy, nonatomic) NSString *wfName;

+ (BOOL)usesMetricSystem;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithWeatherConditions:(id)a0;
- (void)addAirQualityConditions:(id)a0;
- (void)addMissingDataFromWeatherData:(id)a0;
- (id)measurementForTemperature:(id)a0;
- (unsigned long long)weatherConditionForConditionCode:(unsigned long long)a0;
- (id)temperatureString;

@end
