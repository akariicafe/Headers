@interface MGHome : MGGroup

+ (id)type;
+ (id)predicateForCurrentDevice;
+ (id)predicateForType;

- (id)HomeKitHomeIdentifier;
- (id)HomeKitHomeWithHomeManager:(id)a0;
- (id)initWithClientService:(id)a0 home:(id)a1;
- (id)initWithConnectionProvider:(id)a0 home:(id)a1;

@end
