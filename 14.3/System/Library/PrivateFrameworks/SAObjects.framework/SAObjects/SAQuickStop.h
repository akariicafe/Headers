@interface SAQuickStop : SABaseClientBoundCommand

+ (id)quickStop;
+ (id)quickStopWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
