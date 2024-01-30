@class NSArray, SSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface SSPreorderManager : NSObject {
    SSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSArray *_itemKinds;
    SSXPCConnection *_observerConnection;
    NSObject<OS_dispatch_queue> *_observerQueue;
    struct __CFArray { } *_observers;
    NSArray *_preorders;
}

@property (readonly) NSArray *itemKinds;
@property (readonly) NSArray *preorders;

+ (id)bookStoreItemKinds;
+ (id)musicStoreItemKinds;

- (void)_connectAsObserver;
- (void)reloadFromServer;
- (void)_sendMessageToObservers:(SEL)a0;
- (void)_handleMessage:(id)a0 fromServerConnection:(id)a1;
- (void)cancelPreorders:(id)a0 withCompletionBlock:(id /* block */)a1;
- (id)init;
- (void)removeObserver:(id)a0;
- (void)dealloc;
- (void)addObserver:(id)a0;
- (id)initWithItemKinds:(id)a0;
- (void)_registerAsObserver;

@end
