@class CPDistributedMessagingCenter;

@interface AFContextManager : NSObject {
    struct __CFArray { } *_contextProviders;
    CPDistributedMessagingCenter *_center;
}

+ (id)defaultContextManager;

- (void)_startListening;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_serverName;
- (void)nothing;
- (BOOL)addContextProvider:(id)a0;
- (void)_shutdownServer;
- (void)_collateContextsIntoArray:(id)a0;
- (void)startCenter:(id)a0;
- (id)_collateContexts;
- (void)_stopListening;
- (void)removeContextProvider:(id)a0;

@end
