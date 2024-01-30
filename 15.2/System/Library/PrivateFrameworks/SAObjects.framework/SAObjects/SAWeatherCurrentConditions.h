@class SAWeatherCondition, NSString, SAWeatherWindSpeed, SAWeatherBarometricPressure, NSNumber;

@interface SAWeatherCurrentConditions : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SAWeatherBarometricPressure *barometricPressure;
@property (retain, nonatomic) SAWeatherCondition *condition;
@property (copy, nonatomic) NSNumber *dayOfWeek;
@property (copy, nonatomic) NSString *dewPoint;
@property (copy, nonatomic) NSString *heatIndex;
@property (copy, nonatomic) NSString *moonPhase;
@property (copy, nonatomic) NSString *percentHumidity;
@property (copy, nonatomic) NSNumber *percentOfMoonFaceVisible;
@property (copy, nonatomic) NSString *sunrise;
@property (copy, nonatomic) NSString *sunset;
@property (copy, nonatomic) NSString *temperature;
@property (copy, nonatomic) NSString *timeOfObservation;
@property (copy, nonatomic) NSString *timeZone;
@property (copy, nonatomic) NSString *totalDailyPrecipitation;
@property (copy, nonatomic) NSNumber *uvIndex;
@property (copy, nonatomic) NSString *visibility;
@property (copy, nonatomic) NSString *windChill;
@property (retain, nonatomic) SAWeatherWindSpeed *windSpeed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)currentConditions;
+ (id)currentConditionsWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
