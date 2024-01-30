@class NSMutableDictionary, NSString, NSOperationQueue, APSConnection, NSObject;
@protocol OS_dispatch_queue;

@interface CKNotificationListener : NSObject <APSConnectionDelegate, CKPKPushRegistryDelegate>

@property (retain, nonatomic) NSMutableDictionary *subscriptionInfos;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (readonly, nonatomic) NSString *apsEnvironment;
@property (retain, nonatomic) APSConnection *apsConnection;
@property (copy, nonatomic) NSString *machServiceName;
@property (nonatomic) unsigned long long strategy;
@property (nonatomic) BOOL useOpportunisticPushTopics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)suggestedStrategy;

- (id)initWithStrategy:(unsigned long long)a0;
- (BOOL)hasInitializedAPSConnection;
- (id)init;
- (void)connection:(id)a0 didReceivePublicToken:(id)a1;
- (void).cxx_destruct;
- (void)connectionDidReconnect:(id)a0;
- (void)dealloc;
- (void)connection:(id)a0 didReceiveIncomingMessage:(id)a1;
- (BOOL)isRegisteredForSubscriptionWithID:(id)a0 inDatabase:(id)a1;
- (void)registerForMachServiceAPSConnectionNotifications;
- (void)unregisterForSubscriptionWithID:(id)a0 inDatabase:(id)a1;
- (void)updatePushNotificationListeners;
- (id)initWithMachServiceName:(id)a0;
- (void)updateAPSConnection;
- (void)connection:(id)a0 didChangeConnectedStatus:(BOOL)a1;
- (void)checkConfiguration;
- (BOOL)hasAPSConnectionInitiateEntitlement;
- (id)initWithStrategy:(unsigned long long)a0 machServiceName:(id)a1;
- (id)uniqueKeyForSubscriptionID:(id)a0 inDatabase:(id)a1;
- (void)registerForSubscription:(id)a0 inDatabase:(id)a1 handler:(id /* block */)a2;
- (void)handlePushNotificationWithPayload:(id)a0 completionHandler:(id /* block */)a1;
- (void)updatePKPushRegistry;
- (void)didReceiveIncomingPushWithPayload:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
