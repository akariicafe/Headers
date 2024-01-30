@interface __HMDHomeAdministratorDynamicRelay : __HMDHomeAdministratorReceiver

+ (id)logCategory;

- (void)__handleRemoteMessage:(id)a0;
- (void)__handleXPCMessage:(id)a0;
- (void)registerForMessage:(id)a0 policies:(id)a1;

@end
