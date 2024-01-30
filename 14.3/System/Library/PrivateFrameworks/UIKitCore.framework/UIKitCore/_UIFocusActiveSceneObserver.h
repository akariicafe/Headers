@class NSString, NSMapTable, UIScene;

@interface _UIFocusActiveSceneObserver : NSObject <BKSHIDEventDeliveryPolicyObserving> {
    NSMapTable *_hidObserverMapTable;
    NSMapTable *_observers;
    UIScene *_scene;
    struct { unsigned char supportsHIDUpdates : 1; unsigned char wasActiveScene : 1; } _flags;
}

@property (readonly, nonatomic, getter=isActiveScene) BOOL activeScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (id)initWithScene:(id)a0;
- (void)dealloc;
- (void)_windowDidDetachContext:(id)a0;
- (id)addObserver:(id /* block */)a0;
- (void)beginMonitoringContextChangesForWindow:(id)a0;
- (void)stopMonitoringContextChangesForWindow:(id)a0;
- (void)_keyWindowDidChangeNotification:(id)a0;
- (void)_windowDidAttachContext:(id)a0;
- (void)_addDeliveryObserverForWindow:(id)a0;
- (void)_notifyObserversIfNecessary;
- (void)_removeDeliverObserverForWindow:(id)a0;
- (void)observerDeliveryPolicyDidChange:(id)a0;

@end
