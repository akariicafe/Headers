@interface SAPhoneHangUp : SABaseClientBoundCommand

+ (id)hangUpWithDictionary:(id)a0 context:(id)a1;
+ (id)hangUp;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
