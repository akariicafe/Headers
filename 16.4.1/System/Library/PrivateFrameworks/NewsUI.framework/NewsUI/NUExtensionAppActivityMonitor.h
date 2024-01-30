@class NSString, NSNotificationCenter, NSMutableSet, NSHashTable;

@interface NUExtensionAppActivityMonitor : NSObject <NUAppActivityMonitor>

@property (readonly, nonatomic) NSNotificationCenter *notificationCenter;
@property (readonly, nonatomic) NSHashTable *observers;
@property (readonly, nonatomic) NSMutableSet *foregroundObserverBlocks;
@property (readonly, nonatomic) NSMutableSet *backgroundObserverBlocks;
@property (readonly, nonatomic) NSMutableSet *windowForegroundObserverBlocks;
@property (readonly, nonatomic) NSMutableSet *windowBackgroundObserverBlocks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performOnApplicationWillEnterForeground:(id /* block */)a0;
- (void)addObserver:(id)a0;
- (void)performOnApplicationWindowDidBecomeForeground:(id /* block */)a0;
- (id)initWithNotificationCenter:(id)a0;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void)performOnApplicationDidBecomeActive:(id /* block */)a0;
- (void)performOnApplicationDidEnterBackground:(id /* block */)a0;
- (void).cxx_destruct;
- (void)performOnApplicationWindowDidBecomeBackground:(id /* block */)a0;
- (void)applicationDidEnterBackgroundNotification:(id)a0;
- (void)applicationWillEnterForegroundNotification:(id)a0;

@end
