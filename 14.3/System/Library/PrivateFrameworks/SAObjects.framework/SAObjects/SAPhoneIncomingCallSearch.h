@interface SAPhoneIncomingCallSearch : SABaseClientBoundCommand

+ (id)incomingCallSearch;
+ (id)incomingCallSearchWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
