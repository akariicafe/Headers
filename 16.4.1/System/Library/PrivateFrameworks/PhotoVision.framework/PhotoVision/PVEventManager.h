@class PVContext, NSMutableArray;

@interface PVEventManager : NSObject {
    NSMutableArray *_notificationListeners;
    PVContext *_context;
}

- (void)removeNotificationListener:(id)a0;
- (id)initWithContext:(id)a0;
- (void)addNotificationListener:(id)a0;
- (void).cxx_destruct;
- (void)notifyListeners:(id)a0;
- (void)publishEvent:(id)a0 source:(id)a1;

@end
