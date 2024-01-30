@class NSString;

@interface SAMPLikesMediaEntity : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *influencedSharedUserId;

+ (id)likesMediaEntity;
+ (id)likesMediaEntityWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
