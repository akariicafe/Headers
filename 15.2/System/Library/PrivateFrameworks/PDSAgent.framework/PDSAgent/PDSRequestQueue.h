@class FTMessageDelivery, PDSRequest, PDSUserTracker, NSDate, NSObject;
@protocol OS_dispatch_queue, PDSRequestQueueDelegate;

@interface PDSRequestQueue : NSObject

@property (retain, nonatomic) PDSRequest *inflightRequest;
@property (retain, nonatomic) PDSRequest *queuedRequest;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) FTMessageDelivery *messageDelivery;
@property (retain, nonatomic) PDSUserTracker *userTracker;
@property (copy, nonatomic) id /* block */ pushTokenBlock;
@property (copy, nonatomic) id /* block */ entryStoreBlock;
@property (nonatomic) long long authRetries;
@property (retain, nonatomic) NSDate *lastReauthAttempt;
@property (weak, nonatomic) id<PDSRequestQueueDelegate> delegate;
@property (nonatomic) long long messageTimeout;

- (BOOL)_isAuthIssue:(long long)a0;
- (void)_cancelPendingRequests;
- (void)_dequeueIfNeeded;
- (BOOL)enqueueRequest:(id)a0;
- (id)_hwVersion;
- (id)_deviceInfo;
- (void).cxx_destruct;
- (id)_osVersion;
- (void)_logEntries:(id)a0;
- (void)_reAuthAndContinueWithRequest:(id)a0 forUser:(id)a1;
- (void)_flightRequest:(id)a0;
- (id)initWithMessageDelivery:(id)a0 userTracker:(id)a1 queue:(id)a2 pushTokenBlock:(id /* block */)a3 entryStoreBlock:(id /* block */)a4;
- (void)_removeDeadEntriesForUser:(id)a0 withError:(id *)a1;
- (id)_machineID;
- (void)_logProtoUserPushToken:(id)a0;

@end
