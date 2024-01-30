@interface SARadarFilingDidBegin : SABaseClientBoundCommand

+ (id)filingDidBegin;
+ (id)filingDidBeginWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
