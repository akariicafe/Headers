@class NSString;

@interface SAMPDislikesMediaEntity : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *influencedUserSharedUserId;

+ (id)dislikesMediaEntity;
+ (id)dislikesMediaEntityWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
