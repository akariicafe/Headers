@class NSUUID, NSString, NSArray, NSSet, NSMutableDictionary, NSMutableArray, NSMapTable, HMFUnfairLock;

@interface PSBroker : HMFObject <HMFLogging, PSBrokerCapabilities> {
    HMFUnfairLock *_lock;
    NSMutableDictionary *_topics;
    NSMutableArray *_remoteBrokers;
    NSMapTable *_topicManagers;
    NSArray *_transportFactories;
    NSMutableArray *_activeTransports;
}

@property (readonly, copy) NSArray *availableTopics;
@property (copy) NSString *displayName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSUUID *identifier;
@property (readonly, copy) NSArray *exportedTopics;
@property (readonly, copy) NSSet *supportedTransportIdentifiers;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)logIdentifier;
- (id)initWithIdentifier:(id)a0 transportFactories:(id)a1;
- (void)addRemoteBroker:(id)a0;
- (void)removeRemoteBrokerWithIdentifier:(id)a0;
- (void)registerManager:(id)a0 forTopicWithName:(id)a1;
- (id)topicWithName:(id)a0;

@end
