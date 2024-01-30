@interface SAQuickStop : SABaseClientBoundCommand

+ (id)quickStop;
+ (id)quickStopWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
