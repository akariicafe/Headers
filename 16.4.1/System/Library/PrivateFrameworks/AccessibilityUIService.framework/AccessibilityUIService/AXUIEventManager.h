@class NSHashTable;

@interface AXUIEventManager : NSObject

@property (retain, nonatomic) NSHashTable *eventHandlers;
@property (readonly, nonatomic) BOOL laserEnabled;

+ (id)sharedEventManager;

- (id)_init;
- (void)registerEventHandler:(id)a0;
- (void).cxx_destruct;
- (BOOL)_handleUIEvent:(id)a0;
- (void)unregisterEventHandler:(id)a0;

@end
