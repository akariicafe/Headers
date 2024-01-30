@interface SALocalSearchVehicleEventSearch : SADomainCommand

+ (id)vehicleEventSearch;
+ (id)vehicleEventSearchWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
