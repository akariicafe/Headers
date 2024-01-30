@class NSMapTable;

@interface WBSWebExtensionAPIWebRequestEventObjC : WBSWebExtensionAPIObject {
    NSMapTable *_listeners;
}

@property (nonatomic) unsigned long long type;
@property (readonly, nonatomic) void *cpp;

+ (id)eventWithExtensionIdentifier:(id)a0 type:(unsigned long long)a1;

- (void).cxx_destruct;
- (BOOL)hasListenerWithBrowserContextController:(id)a0 listener:(id)a1;
- (void)removeListenerWithBrowserContextController:(id)a0 listener:(id)a1;
- (void)invokeListenersWithArgument:(id)a0 tabID:(double)a1 windowID:(double)a2 resourceLoad:(id)a3;
- (void)addListener:(id)a0 filter:(id)a1 extraInfoSpec:(id)a2 browserContextController:(id)a3 outExceptionString:(id *)a4;

@end
