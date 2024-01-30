@class NSString;

@interface SAFetchUserActivity : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *internalGUID;

+ (id)fetchUserActivity;
+ (id)fetchUserActivityWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
