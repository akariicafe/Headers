@class NSMapTable;

@interface WBSWebExtensionAPIWindowsEventObjC : WBSWebExtensionAPIObject {
    NSMapTable *_listeners;
}

@property (nonatomic) unsigned long long type;
@property (readonly, nonatomic) void *cpp;

+ (id)eventWithExtensionIdentifier:(id)a0 type:(unsigned long long)a1;

- (void).cxx_destruct;
- (BOOL)hasListenerWithBrowserContextController:(id)a0 listener:(id)a1;
- (void)addListener:(id)a0 filter:(id)a1 browserContextController:(id)a2 outExceptionString:(id *)a3;
- (void)removeListenerWithBrowserContextController:(id)a0 listener:(id)a1;
- (void)invokeListenersForNormalWindowWithArgument:(id)a0;
- (void)invokeListenersForPopupWindowWithArgument:(id)a0;

@end
