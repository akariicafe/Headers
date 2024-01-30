@interface SAUICancelCurrentTTS : SABaseClientBoundCommand

+ (id)cancelCurrentTTS;
+ (id)cancelCurrentTTSWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
