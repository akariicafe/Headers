@class NSObject, NSMutableDictionary, NSXPCConnection;
@protocol OS_dispatch_queue, WiFiP2PSPITransactionResponderXPC;

@interface WiFiP2PSPITransactionRequestor : NSObject {
    NSXPCConnection *_xpcConnection;
    NSObject<OS_dispatch_queue> *_queue;
    id<WiFiP2PSPITransactionResponderXPC> _responderProxy;
    NSMutableDictionary *_openTrasactions;
}

+ (id)shared;

- (void)resetState;
- (void)endTransaction:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isConnected;
- (void)dealloc;
- (void)beginTransaction:(long long)a0 completionHandler:(id /* block */)a1;
- (void)connectIfNecessary:(id /* block */)a0;

@end
