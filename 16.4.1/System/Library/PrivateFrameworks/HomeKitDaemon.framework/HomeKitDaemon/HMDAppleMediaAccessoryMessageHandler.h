@interface HMDAppleMediaAccessoryMessageHandler : HMDMessageHandler

- (void)handleAppleMediaAccessoryDeviceIsReachableNotification:(id)a0;
- (void)handleAppleMediaAccessoryDeviceUpdatedNotification:(id)a0;
- (id)initWithMessageTargetUUID:(id)a0 messageDispatcher:(id)a1 notificationCenter:(id)a2 ownerPrivateRemoteMessages:(id)a3 adminPrivateRemoteMessages:(id)a4 internalMessages:(id)a5 notifications:(id)a6 notificationsToObject:(id)a7;

@end
