@class SAWeatherLocation, NSString, NSArray;

@interface SAWeatherAirQualityObject : SADomainObject

@property (nonatomic) long long airQualityIndex;
@property (retain, nonatomic) SAWeatherLocation *airQualityLocation;
@property (copy, nonatomic) NSString *airQualityRatingCategory;
@property (copy, nonatomic) NSString *localizedCategoryName;
@property (copy, nonatomic) NSArray *pollutants;

+ (id)airQualityObject;
+ (id)airQualityObjectWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
