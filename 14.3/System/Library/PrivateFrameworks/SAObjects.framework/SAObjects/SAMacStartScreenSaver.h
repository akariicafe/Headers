@interface SAMacStartScreenSaver : SADomainCommand

+ (id)startScreenSaver;
+ (id)startScreenSaverWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
