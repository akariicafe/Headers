@interface NEPathEventObserver : NSObject

@property struct network_config_cellular_blocked_observer_s { } *cellBlockedObserver;
@property struct network_config_cellular_blocked_observer_s { } *cellFailedObserver;
@property struct network_config_cellular_blocked_observer_s { } *wifiBlockedObserver;
@property (copy) id /* block */ eventHandler;

- (id)stringForEvent:(long long)a0;
- (void)handleEvent:(long long)a0 forPID:(id)a1 UUID:(id)a2;
- (id)initWithQueue:(id)a0 eventHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)cancel;

@end
