@class NSString, NSMutableSet, NSHashTable;

@interface NUApplicationAppActivityMonitorIOS : NSObject <NUAppActivityMonitor, FCAppActivityReceiver>

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
- (void)sceneWillResignActiveWithSceneID:(id)a0;
- (void)addObserver:(id)a0;
- (void)_applicationWillTerminate;
- (void)performOnApplicationWindowDidBecomeForeground:(id /* block */)a0;
- (void)sceneDidEnterBackground;
- (void)sceneDidEnterBackgroundWithSceneID:(id)a0;
- (void)_windowDidBecomeForeground;
- (void)dealloc;
- (void)_windowDidBecomeBackground;
- (void)removeObserver:(id)a0;
- (void)sceneDidBecomeActive;
- (void)sceneDidBecomeActiveWithURL:(id)a0 sourceApplication:(id)a1 sceneID:(id)a2;
- (void)sceneWillEnterForeground;
- (id)init;
- (void)performOnApplicationDidBecomeActive:(id /* block */)a0;
- (void)performOnApplicationDidEnterBackground:(id /* block */)a0;
- (void).cxx_destruct;
- (void)sceneWillConnect;
- (void)performOnApplicationWindowDidBecomeBackground:(id /* block */)a0;

@end
