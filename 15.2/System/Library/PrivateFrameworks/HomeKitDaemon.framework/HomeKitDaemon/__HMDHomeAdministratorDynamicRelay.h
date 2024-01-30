@interface __HMDHomeAdministratorDynamicRelay : __HMDHomeAdministratorReceiver

+ (id)logCategory;

- (void)registerForMessage:(id)a0 policies:(id)a1;
- (void)__handleXPCMessage:(id)a0;
- (void)__handleRemoteMessage:(id)a0;

@end
