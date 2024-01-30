@interface SALocalSearchDropAPinAtCurrentLocation : SADomainCommand

+ (id)dropAPinAtCurrentLocation;
+ (id)dropAPinAtCurrentLocationWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
