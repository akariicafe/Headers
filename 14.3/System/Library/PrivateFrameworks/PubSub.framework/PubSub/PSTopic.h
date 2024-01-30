@class PSBrokerTransportCollection, NSArray, NSString, NSMutableDictionary, NSMutableArray, PSBroker;
@protocol PSTopicManager, HMFLocking;

@interface PSTopic : HMFObject <HMFLogging> {
    id<HMFLocking> _lock;
    NSMutableArray *_localSubscribersToSubscriptions;
    NSMutableDictionary *_remoteSubscribersToSubscriptions;
}

@property (readonly, copy) NSArray *subscriptions;
@property (readonly) NSString *logIdentifier;
@property (weak) id<PSTopicManager> topicManager;
@property (weak) PSBroker *broker;
@property (readonly) PSBrokerTransportCollection *transportAdapter;
@property (readonly, copy) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (BOOL)isEqual:(id)a0;
- (void)unsubscribe:(id)a0;
- (id)initWithName:(id)a0 broker:(id)a1;
- (id)addSubscriptionWithFilters:(id)a0 conditionals:(id)a1 invocation:(id)a2;
- (id)addRemoteSubscriptionWithFilters:(id)a0 conditionals:(id)a1 remoteDeviceIdentifier:(id)a2;
- (void)publishEvent:(id)a0;
- (void)republishEvent:(id)a0;

@end
