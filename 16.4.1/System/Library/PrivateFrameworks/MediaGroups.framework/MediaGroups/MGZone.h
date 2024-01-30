@interface MGZone : MGGroup

+ (id)type;
+ (id)predicateForCurrentDevice;
+ (id)predicateForType;

- (id)HomeKitZoneIdentifier;
- (id)HomeKitZoneWithHomeManager:(id)a0;
- (id)initWithClientService:(id)a0 zone:(id)a1 home:(id)a2;
- (id)initWithConnectionProvider:(id)a0 zone:(id)a1 home:(id)a2;

@end
