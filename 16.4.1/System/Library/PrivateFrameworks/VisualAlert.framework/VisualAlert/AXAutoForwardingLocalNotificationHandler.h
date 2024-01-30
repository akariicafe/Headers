@interface AXAutoForwardingLocalNotificationHandler : AXLocalNotificationHandler {
    SEL *_possibleHandlers;
    unsigned long long _possibleHandlersCount;
}

- (void)_startObserving;
- (void)_stopObserving;
- (void)dealloc;
- (void)processHandler:(SEL)a0;
- (id)_forwardDistributedNotificationNameForHandler:(SEL)a0;
- (BOOL)_handleForwardDistributedNotificationWithName:(id)a0 object:(const void *)a1 userInfo:(id)a2;
- (id)_notificationTypeDescription;
- (id)_prefixForForwardDistributedNotificationName;
- (id)initWithNotificationName:(id)a0 target:(id)a1 dispatcher:(id /* block */)a2 possibleHandlers:(SEL)a3;
- (id)initWithNotificationName:(id)a0 target:(id)a1 dispatcher:(id /* block */)a2 startObserving:(BOOL)a3;
- (id)initWithNotificationName:(id)a0 target:(id)a1 handler:(SEL)a2;

@end
