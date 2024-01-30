@interface SAPhoneIncomingCallSearch : SABaseClientBoundCommand

+ (id)incomingCallSearch;
+ (id)incomingCallSearchWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
