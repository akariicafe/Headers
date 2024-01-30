@interface SAUIExtendCurrentTTS : SABaseClientBoundCommand

+ (id)extendCurrentTTS;
+ (id)extendCurrentTTSWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
