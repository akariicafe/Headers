@class NSUUID;

@interface PSRemoteSubscription : PSSubscription

@property (readonly, copy) NSUUID *remoteDeviceIdentifier;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithTopic:(id)a0 filters:(id)a1 conditionals:(id)a2 remoteDeviceIdentifier:(id)a3;

@end
