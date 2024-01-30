@class NSHashTable;

@interface AXUIEventManager : NSObject

@property (retain, nonatomic) NSHashTable *eventHandlers;
@property (readonly, nonatomic) BOOL laserEnabled;

+ (id)sharedEventManager;

- (void).cxx_destruct;
- (id)_init;
- (void)registerEventHandler:(id)a0;
- (BOOL)_handleUIEvent:(id)a0;
- (void)unregisterEventHandler:(id)a0;

@end
