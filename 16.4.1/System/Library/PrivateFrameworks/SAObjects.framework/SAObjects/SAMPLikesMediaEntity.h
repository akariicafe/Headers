@class NSString;

@interface SAMPLikesMediaEntity : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *influencedSharedUserId;

+ (id)likesMediaEntity;
+ (id)likesMediaEntityWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
