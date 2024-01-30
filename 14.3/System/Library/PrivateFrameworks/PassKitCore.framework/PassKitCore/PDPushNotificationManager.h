@class NSString, NSArray, APSConnection, NSMutableSet, NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface PDPushNotificationManager : NSObject <APSConnectionDelegate> {
    APSConnection *_apsConnection;
    NSMutableSet *_registeredTopics;
    NSHashTable *_consumers;
    long long _enableCriticalReliabilityCount;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _consumersLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _criticalReliabilityLock;
    NSObject<OS_dispatch_queue> *_replyQueue;
}

@property (copy, nonatomic) NSString *pushToken;
@property (readonly, nonatomic) NSArray *topics;
@property (readonly, nonatomic) NSArray *currentConsumers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)connect;
- (id)init;
- (void)connection:(id)a0 didReceivePublicToken:(id)a1;
- (void).cxx_destruct;
- (void)simulatePushForTopic:(id)a0;
- (void)dealloc;
- (void)recalculatePushTopics;
- (void)disableCriticalReliability;
- (void)connection:(id)a0 didReceiveMessageForTopic:(id)a1 userInfo:(id)a2;
- (void)registerConsumer:(id)a0;
- (void)unregisterAllConsumers;
- (void)unregisterConsumer:(id)a0;
- (void)enableCriticalReliability;

@end
