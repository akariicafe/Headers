@class NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface CSSpeechUaapXPCClient : NSObject

@property (retain, nonatomic) NSObject<OS_xpc_object> *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (void)registerUaapApp:(id)a0 forLocale:(id)a1 withAssetFiles:(id)a2 completion:(id /* block */)a3;
- (void)_handleConnectionError:(id)a0;
- (void)registerDatapackUpdate;
- (void)registerMultilingualUaapApp:(id)a0 withAssetFiles:(id)a1 completion:(id /* block */)a2;
- (void)registerUaapApp:(id)a0 withAssetFiles:(id)a1 completion:(id /* block */)a2;

@end
