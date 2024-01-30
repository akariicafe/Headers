@class NSArray;

@interface SANPSkipToPreviousItem : SADomainCommand

@property (copy, nonatomic) NSArray *hashedRouteUIDs;

+ (id)skipToPreviousItemWithDictionary:(id)a0 context:(id)a1;
+ (id)skipToPreviousItem;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
