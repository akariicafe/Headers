@interface SALocalSearchMapZoomOut : SADomainCommand

+ (id)mapZoomOut;
+ (id)mapZoomOutWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
