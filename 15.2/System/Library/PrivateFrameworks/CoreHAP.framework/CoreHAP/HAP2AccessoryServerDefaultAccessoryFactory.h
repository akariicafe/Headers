@class NSString;

@interface HAP2AccessoryServerDefaultAccessoryFactory : NSObject <HAP2AccessoryServerAccessoryFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)accessoryWithAccessoryServer:(id)a0 instanceID:(unsigned long long)a1 discoveredServices:(id)a2;

@end
