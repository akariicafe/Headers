@class NSString, NSMutableSet;

@interface PSBrokerTransportCollection : HMFObject <PSBrokerTransport> {
    NSMutableSet *_transports;
}

@property (readonly) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)addTransport:(id)a0;
- (void)addSubscriptions:(id)a0 forTopicWithName:(id)a1;
- (void)removeSubscriptions:(id)a0 forTopicWithName:(id)a1;
- (void)publishEvent:(id)a0 forTopicWithName:(id)a1 toRemoteDevices:(id)a2;

@end
