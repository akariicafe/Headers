@class NSNumber, NSArray;

@interface SANPSkipTimeInterval : SADomainCommand

@property (copy, nonatomic) NSNumber *adjustmentInMilliseconds;
@property (copy, nonatomic) NSArray *hashedRouteUIDs;

+ (id)skipTimeInterval;
+ (id)skipTimeIntervalWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
