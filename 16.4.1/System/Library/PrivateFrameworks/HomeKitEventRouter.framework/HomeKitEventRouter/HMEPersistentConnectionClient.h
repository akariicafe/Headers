@class NSObject;
@protocol OS_os_log, HMEPersistentConnectionClientDelegate;

@interface HMEPersistentConnectionClient : HMERouterClient {
    NSObject<OS_os_log> *_logger;
}

@property (weak) id<HMEPersistentConnectionClientDelegate> delegate;

- (BOOL)isActiveForSaving;
- (id)forwardingTopicsForTopics:(id)a0;
- (unsigned long long)willWriteToStore;
- (void)finishedWritingToStore:(unsigned long long)a0;
- (id)initWithQueue:(id)a0 storeReadHandle:(id)a1 storeWriteHandle:(id)a2 logger:(id)a3;
- (void)didReconnect;
- (id)initWithQueue:(id)a0 storeReadHandle:(id)a1 storeWriteHandle:(id)a2;
- (void)processReceivedEventsFromMessage:(id)a0;
- (void)processReceivedCachedEventsFromMessage:(id)a0;
- (void).cxx_destruct;
- (void)didInvalidateConnection;
- (id)initWithQueue:(id)a0;

@end
