@class NSNumber;

@interface SALocalSearchGetNavigationStatus : SADomainCommand

@property (copy, nonatomic) NSNumber *getRoute;

+ (id)getNavigationStatus;
+ (id)getNavigationStatusWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
