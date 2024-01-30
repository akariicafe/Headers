@interface SALocalSearchMapZoomIn : SADomainCommand

+ (id)mapZoomIn;
+ (id)mapZoomInWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
