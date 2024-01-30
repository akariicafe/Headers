@class CPDistributedMessagingCenter;

@interface AFContextManager : NSObject {
    struct __CFArray { } *_contextProviders;
    CPDistributedMessagingCenter *_center;
}

+ (id)defaultContextManager;

- (void)_startListening;
- (BOOL)addContextProvider:(id)a0;
- (void)_shutdownServer;
- (id)_collateContexts;
- (void)nothing;
- (void)dealloc;
- (id)_serverName;
- (void)_stopListening;
- (id)init;
- (void)removeContextProvider:(id)a0;
- (void)startCenter:(id)a0;
- (void)_collateContextsIntoArray:(id)a0;
- (void).cxx_destruct;

@end
