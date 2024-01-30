@interface SALocalSearchMapZoomIn : SADomainCommand

+ (id)mapZoomIn;
+ (id)mapZoomInWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
