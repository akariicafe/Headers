@class CPDistributedMessagingCenter;

@interface AFContextManager : NSObject {
    struct __CFArray { } *_contextProviders;
    CPDistributedMessagingCenter *_center;
}

+ (id)defaultContextManager;

- (void)nothing;
- (void)_stopListening;
- (id)_collateContexts;
- (void).cxx_destruct;
- (void)_startListening;
- (id)init;
- (id)_serverName;
- (BOOL)addContextProvider:(id)a0;
- (void)_shutdownServer;
- (void)removeContextProvider:(id)a0;
- (void)_collateContextsIntoArray:(id)a0;
- (void)dealloc;
- (void)startCenter:(id)a0;

@end
