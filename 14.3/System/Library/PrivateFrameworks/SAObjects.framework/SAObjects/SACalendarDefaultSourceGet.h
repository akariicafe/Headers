@interface SACalendarDefaultSourceGet : SADomainCommand

+ (id)defaultSourceGet;
+ (id)defaultSourceGetWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
