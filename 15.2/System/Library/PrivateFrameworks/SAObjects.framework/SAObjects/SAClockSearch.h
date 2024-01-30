@class NSNumber, NSString, NSURL;

@interface SAClockSearch : SADomainCommand

@property (copy, nonatomic) NSNumber *alCityId;
@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSURL *identifier;
@property (copy, nonatomic) NSString *unlocalizedCityName;
@property (copy, nonatomic) NSString *unlocalizedCountryName;

+ (id)search;
+ (id)searchWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
