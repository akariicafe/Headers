@interface SAMacOpenAboutThisMac : SADomainCommand

+ (id)openAboutThisMac;
+ (id)openAboutThisMacWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
