@class NSNumber, SAWeatherCondition, NSString;

@interface SAWeatherForecast : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSNumber *chanceOfPrecipitation;
@property (retain, nonatomic) SAWeatherCondition *condition;
@property (copy, nonatomic) NSNumber *isUserRequested;
@property (copy, nonatomic) NSNumber *timeIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)forecast;
+ (id)forecastWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
