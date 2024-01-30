@class NSURL, NSString;

@interface SAWeatherLocationSearch : SADomainCommand

@property (copy, nonatomic) NSURL *identifier;
@property (copy, nonatomic) NSString *locationId;

+ (id)locationSearch;
+ (id)locationSearchWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
