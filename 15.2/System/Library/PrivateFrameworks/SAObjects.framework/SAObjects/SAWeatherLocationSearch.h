@class NSURL, NSString;

@interface SAWeatherLocationSearch : SADomainCommand

@property (copy, nonatomic) NSURL *identifier;
@property (copy, nonatomic) NSString *locationId;

+ (id)locationSearch;
+ (id)locationSearchWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
