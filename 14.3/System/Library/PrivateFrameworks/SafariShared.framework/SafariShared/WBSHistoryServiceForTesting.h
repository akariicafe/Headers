@class NSXPCListener;

@interface WBSHistoryServiceForTesting : WBSHistoryService {
    NSXPCListener *_listener;
}

- (id)init;
- (void).cxx_destruct;
- (id)connectWithClass:(Class)a0;
- (id)_createListener;

@end
