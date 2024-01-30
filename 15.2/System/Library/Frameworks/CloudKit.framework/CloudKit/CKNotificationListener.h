@class NSString, NSMutableDictionary, NSOperationQueue, APSConnection, NSObject;
@protocol OS_dispatch_queue;

@interface CKNotificationListener : NSObject <APSConnectionDelegate, CKPKPushRegistryDelegate> {
    NSString *_apsEnvironment;
    NSMutableDictionary *_subscriptionInfos;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSOperationQueue *_operationQueue;
    APSConnection *_apsConnection;
    unsigned long long _strategy;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) NSString *machServiceName;
@property (nonatomic) BOOL useOpportunisticPushTopics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)connection:(id)a0 didReceivePublicToken:(id)a1;
- (id)initWithMachServiceName:(id)a0;
- (id)initWithStrategy:(unsigned long long)a0;
- (void)connectionDidReconnect:(id)a0;
- (BOOL)isRegisteredForSubscriptionWithID:(id)a0 inDatabase:(id)a1;
- (id)initWithStrategy:(unsigned long long)a0 machServiceName:(id)a1;
- (id)apsConnectionOnQueue;
- (void)unregisterForSubscriptionWithID:(id)a0 inDatabase:(id)a1;
- (void)registerForSubscription:(id)a0 inDatabase:(id)a1 handler:(id /* block */)a2;
- (void)didReceiveIncomingPushWithPayload:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)connection:(id)a0 didChangeConnectedStatus:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (void)handlePushNotificationWithPayload:(id)a0 completionHandler:(id /* block */)a1;
- (void)dealloc;
- (void)connection:(id)a0 didReceiveIncomingMessage:(id)a1;
- (BOOL)hasInitializedAPSConnection;
- (id)uniqueKeyForSubscriptionID:(id)a0 inDatabase:(id)a1;

@end
