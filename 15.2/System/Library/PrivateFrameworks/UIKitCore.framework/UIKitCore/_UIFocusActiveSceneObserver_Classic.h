@class NSString, NSMapTable;

@interface _UIFocusActiveSceneObserver_Classic : _UIFocusActiveSceneObserver <BKSHIDEventDeliveryPolicyObserving> {
    NSMapTable *_hidObserverMapTable;
    struct { unsigned char supportsHIDUpdates : 1; } _flags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilder;
- (id)_initWithScene:(id)a0;
- (BOOL)isActive;
- (void)beginMonitoringContextChangesForWindow:(id)a0;
- (void)stopMonitoringContextChangesForWindow:(id)a0;
- (void)_windowDidDetachContext:(id)a0;
- (void).cxx_destruct;
- (void)observerDeliveryPolicyDidChange:(id)a0;
- (void)_removeDeliverObserverForWindow:(id)a0;
- (void)_addDeliveryObserverForWindow:(id)a0;
- (void)_windowDidAttachContext:(id)a0;
- (void)dealloc;
- (void)_keyWindowDidChangeNotification:(id)a0;

@end
