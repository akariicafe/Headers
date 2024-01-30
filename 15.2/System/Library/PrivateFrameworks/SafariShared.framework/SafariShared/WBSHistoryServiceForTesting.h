@class NSXPCListener;

@interface WBSHistoryServiceForTesting : WBSHistoryService {
    NSXPCListener *_listener;
}

- (void).cxx_destruct;
- (id)init;
- (id)_createListener;
- (id)connectWithClass:(Class)a0;

@end
