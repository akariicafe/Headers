@class NSArray;

@interface SALocalSearchVehicleEventDelete : SADomainCommand

@property (copy, nonatomic) NSArray *eventIds;

+ (id)vehicleEventDelete;
+ (id)vehicleEventDeleteWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
