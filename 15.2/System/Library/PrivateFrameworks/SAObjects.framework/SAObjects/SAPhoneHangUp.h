@interface SAPhoneHangUp : SABaseClientBoundCommand

+ (id)hangUp;
+ (id)hangUpWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
