@class NSArray, NSString;

@interface SANPSetRepeatMode : SADomainCommand

@property (copy, nonatomic) NSArray *hashedRouteUIDs;
@property (copy, nonatomic) NSString *repeatMode;

+ (id)setRepeatMode;
+ (id)setRepeatModeWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
