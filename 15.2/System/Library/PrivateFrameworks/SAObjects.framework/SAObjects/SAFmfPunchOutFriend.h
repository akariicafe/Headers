@class NSArray;

@interface SAFmfPunchOutFriend : SADomainCommand

@property (copy, nonatomic) NSArray *friends;

+ (id)punchOutFriend;
+ (id)punchOutFriendWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
