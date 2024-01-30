@class NSArray;

@interface SALocalSearchVehicleEventDelete : SADomainCommand

@property (copy, nonatomic) NSArray *eventIds;

+ (id)vehicleEventDelete;
+ (id)vehicleEventDeleteWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
