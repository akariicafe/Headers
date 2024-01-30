@class NSString, NSMeasurement, NSArray, CLLocation, NSDate, NSNumber;

@interface WFWeatherData : NSObject <WFNaming, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *date;
@property (readonly, copy, nonatomic) CLLocation *location;
@property (readonly, nonatomic) NSMeasurement *temperature;
@property (readonly, nonatomic) NSMeasurement *highTemperature;
@property (readonly, nonatomic) NSMeasurement *lowTemperature;
@property (readonly, nonatomic) NSMeasurement *feelsLikeTemperature;
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

+ (id)pressureUnit;
+ (id)windSpeedUnit;
+ (id)precipitationAmountUnit;
+ (id)userTemperatureUnitString:(id)a0;
+ (id)visibilityUnit;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithDate:(id)a0 location:(id)a1 userTemperatureUnitString:(id)a2 temperature:(id)a3 highTemperature:(id)a4 lowTemperature:(id)a5 feelsLikeTemperature:(id)a6 localizedConditionString:(id)a7 visibility:(id)a8 dewpoint:(id)a9 humidity:(id)a10 pressure:(id)a11 precipitationAmount:(id)a12 precipitationChance:(id)a13 windSpeed:(id)a14 windDirection:(id)a15 uvIndex:(id)a16 sunriseTime:(id)a17 sunsetTime:(id)a18 localizedAirQualityIndex:(id)a19 localizedAirQualityCategory:(id)a20 pollutants:(id)a21;
- (id)temperatureString;

@end
