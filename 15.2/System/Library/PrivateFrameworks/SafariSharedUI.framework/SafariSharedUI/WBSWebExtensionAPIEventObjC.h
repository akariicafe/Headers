@class NSEnumerator, NSMapTable;

@interface WBSWebExtensionAPIEventObjC : WBSWebExtensionAPIObject {
    NSMapTable *_listeners;
}

@property (nonatomic) unsigned long long type;
@property (readonly, nonatomic) void *cpp;
@property (readonly, nonatomic) NSEnumerator *listenersEnumerator;

+ (id)eventWithExtensionIdentifier:(id)a0 type:(unsigned long long)a1;

- (void).cxx_destruct;
- (void)invokeListenersWithArgument:(id)a0 argument:(id)a1;
- (BOOL)hasListenerWithBrowserContextController:(id)a0 listener:(id)a1;
- (void)removeListenerWithBrowserContextController:(id)a0 listener:(id)a1;
- (void)invokeListenersWithArgument:(id)a0;
- (void)addListenerWithBrowserContextController:(id)a0 listener:(id)a1;
- (void)invokeListeners;
- (void)invokeListenersWithArgument:(id)a0 argument:(id)a1 argument:(id)a2;

@end
