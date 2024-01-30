@class NSObject;
@protocol OS_os_log, HMEPersistentConnectionClientDelegate;

@interface HMEPersistentConnectionClient : HMERouterClient {
    NSObject<OS_os_log> *_logger;
}

@property (weak) id<HMEPersistentConnectionClientDelegate> delegate;

- (id)initWithQueue:(id)a0 storeReadHandle:(id)a1 storeWriteHandle:(id)a2 logger:(id)a3;
- (id)initWithQueue:(id)a0;
- (void)processReceivedCachedEventsFromMessage:(id)a0;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0 storeReadHandle:(id)a1 storeWriteHandle:(id)a2;
- (void)didInvalidateConnection;
- (void)didReconnect;
- (void)processReceivedEventsFromMessage:(id)a0;

@end
