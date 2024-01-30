@class NSString, NSArray;

@interface SANPMoveOutputGroupToDevices : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSArray *hashedRouteUIDs;

+ (id)moveOutputGroupToDevices;
+ (id)moveOutputGroupToDevicesWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
