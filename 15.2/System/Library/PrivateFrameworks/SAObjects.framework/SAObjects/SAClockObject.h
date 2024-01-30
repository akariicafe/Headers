@class NSNumber, NSString;

@interface SAClockObject : SADomainObject

@property (copy, nonatomic) NSNumber *alCityId;
@property (copy, nonatomic) NSString *cityName;
@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSString *countryName;
@property (copy, nonatomic) NSString *timezoneId;
@property (copy, nonatomic) NSString *unlocalizedCityName;
@property (copy, nonatomic) NSString *unlocalizedCountryName;

+ (id)object;
+ (id)objectWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
