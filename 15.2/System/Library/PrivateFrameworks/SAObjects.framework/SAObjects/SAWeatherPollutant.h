@class NSNumber, NSString;

@interface SAWeatherPollutant : SADomainObject

@property (copy, nonatomic) NSNumber *amount;
@property (copy, nonatomic) NSString *localizedDescription;
@property (copy, nonatomic) NSString *name;

+ (id)pollutant;
+ (id)pollutantWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
