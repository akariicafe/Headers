@interface MGRoom : MGGroup

+ (id)type;
+ (id)predicateForCurrentDevice;
+ (id)predicateForType;

- (id)HomeKitRoomIdentifier;
- (id)HomeKitRoomWithHomeManager:(id)a0;
- (id)initWithClientService:(id)a0 room:(id)a1 home:(id)a2;
- (id)initWithConnectionProvider:(id)a0 room:(id)a1 home:(id)a2;

@end
