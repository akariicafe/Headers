@interface AXPSAPDevice : AXHearingAidDevice

+ (id)characteristicsUUIDs;

- (id)serviceUUID;
- (unsigned long long)deviceType;
- (unsigned long long)requiredProperties;
- (id)persistentRepresentation;

@end
