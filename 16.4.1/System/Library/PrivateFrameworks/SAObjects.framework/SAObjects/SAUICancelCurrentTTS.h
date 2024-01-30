@interface SAUICancelCurrentTTS : SABaseClientBoundCommand

+ (id)cancelCurrentTTS;
+ (id)cancelCurrentTTSWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
