@interface SAUIExtendCurrentTTS : SABaseClientBoundCommand

+ (id)extendCurrentTTS;
+ (id)extendCurrentTTSWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
