@class SAEmailEmail;

@interface SAEmailSend : SADomainCommand

@property (retain, nonatomic) SAEmailEmail *email;

+ (id)sendWithDictionary:(id)a0 context:(id)a1;
+ (id)send;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
