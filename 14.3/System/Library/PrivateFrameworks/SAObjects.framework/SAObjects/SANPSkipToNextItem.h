@class NSArray;

@interface SANPSkipToNextItem : SADomainCommand

@property (copy, nonatomic) NSArray *hashedRouteUIDs;

+ (id)skipToNextItem;
+ (id)skipToNextItemWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
