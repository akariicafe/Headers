@class NSArray, SALocation, NSString;

@interface SAFmfSearch : SADomainCommand

@property (retain, nonatomic) SALocation *currentLocation;
@property (copy, nonatomic) NSArray *friends;
@property (copy, nonatomic) NSString *proximity;
@property (retain, nonatomic) SALocation *requestedLocation;

+ (id)search;
+ (id)searchWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
