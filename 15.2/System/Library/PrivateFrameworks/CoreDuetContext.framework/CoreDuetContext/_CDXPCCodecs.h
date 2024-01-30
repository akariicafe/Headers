@interface _CDXPCCodecs : NSObject

+ (id)keepAliveReplyWithEvent:(id)a0 error:(id)a1;
+ (id)fetchProxySourceDeviceUUIDReplyWithEvent:(id)a0 sourceDeviceUUID:(id)a1 error:(id)a2;
+ (id)deviceIDsFromDictionary:(id)a0 error:(id *)a1;
+ (BOOL)parseUnsubscribeFromContextValueNotificationsEvent:(id)a0 registration:(id *)a1 deviceIDs:(id *)a2 error:(id *)a3;
+ (id)fetchPropertiesEventWithRemoteKeyPaths:(id)a0 error:(id *)a1;
+ (id)keyPathsFromFetchPropertiesEvent:(id)a0 error:(id *)a1;
+ (id)notificationEventWithRegistrationIdentifier:(id)a0 info:(id)a1 error:(id *)a2;
+ (BOOL)addDeviceIDs:(id)a0 toDictionary:(id)a1 error:(id *)a2;
+ (id)requestActivateDevicesReplyWithEvent:(id)a0 error:(id)a1;
+ (void)addError:(id)a0 toReply:(id)a1;
+ (id)unsubscribeFromContextValueNotificationsEventWithRegistration:(id)a0 deviceIDs:(id)a1 error:(id *)a2;
+ (id)errorFromReply:(id)a0;
+ (id)fetchPropertiesReplyWithEvent:(id)a0 error:(id)a1;
+ (id)fetchProxySourceDeviceUUIDEvent;
+ (long long)eventTypeWithEvent:(id)a0;
+ (id)subscribeToContextValueNotificationsReplyWithEvent:(id)a0 error:(id)a1;
+ (BOOL)parseSubscribeToContextValueNotificationsEvent:(id)a0 registration:(id *)a1 deviceIDs:(id *)a2 error:(id *)a3;
+ (id)subscribeToContextValueNotificationsEventWithRegistration:(id)a0 deviceIDs:(id)a1 error:(id *)a2;
+ (BOOL)addRegistration:(id)a0 toDictionary:(id)a1 error:(id *)a2;
+ (BOOL)parseNotificationEvent:(id)a0 registrationIdentifier:(id *)a1 info:(id *)a2 error:(id *)a3;
+ (BOOL)keepAliveFromKeepAliveEvent:(id)a0 error:(id *)a1;
+ (id)keyPathsFromDictionary:(id)a0 error:(id *)a1;
+ (id)registrationFromDictionary:(id)a0 error:(id *)a1;
+ (id)unsubscribeFromContextValueNotificationsReplyWithEvent:(id)a0 error:(id)a1;
+ (id)parseProxySourceDeviceUUIDEvent:(id)a0 error:(id *)a1;
+ (id)messageTypeFromEvent:(id)a0;
+ (id)keepAliveEventWithKeepAlive:(BOOL)a0 error:(id *)a1;
+ (id)requestActivateDevicesEvent;
+ (id)commonContextValueNotificationsEventWithType:(const char *)a0 registration:(id)a1 deviceIDs:(id)a2 error:(id *)a3;
+ (BOOL)addKeyPaths:(id)a0 toDictionary:(id)a1 error:(id *)a2;

@end
