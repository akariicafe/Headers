@interface RWIProtocolDOMStorageDomainEventDispatcher : NSObject {
    struct AugmentableInspectorController { void /* function */ **x0; } *_controller;
}

- (id)initWithController:(struct AugmentableInspectorController { void /* function */ **x0; } *)a0;
- (void)domStorageItemAddedWithStorageId:(id)a0 key:(id)a1 newValue:(id)a2;
- (void)domStorageItemRemovedWithStorageId:(id)a0 key:(id)a1;
- (void)domStorageItemUpdatedWithStorageId:(id)a0 key:(id)a1 oldValue:(id)a2 newValue:(id)a3;
- (void)domStorageItemsClearedWithStorageId:(id)a0;

@end
