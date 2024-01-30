@class TKTokenWatcher;

@interface TKTokenWatcherProxy : NSObject <TKProtocolTokenWatcherHost> {
    TKTokenWatcher *_watcher;
}

- (void).cxx_destruct;
- (void)insertedToken:(id)a0;
- (void)removedToken:(id)a0;
- (id)initWithWatcher:(id)a0;

@end
