@interface SAMacStartScreenSaver : SADomainCommand

+ (id)startScreenSaver;
+ (id)startScreenSaverWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
