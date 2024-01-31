@class BAAppStoreProgressConfiguration, BAAgentSystemProxy;

@interface BAAppStoreProgressObserver : NSObject <BAAppStoreProgressObserverConfiguring> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _valid;
    BOOL _configuring;
    BOOL _observing;
    BAAppStoreProgressConfiguration *_configuration;
    BAAgentSystemProxy *_systemProxy;
}

+ (id)new;
+ (id)progressObserverWithConfiguration:(id /* block */)a0;

- (void)updateConfiguration:(id /* block */)a0;
- (id)init;
- (void)invalidate;
- (void)setUpdateHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)setHandlerQueue:(id)a0;
- (void)setAppBundleIdentifiers:(id)a0;

@end
