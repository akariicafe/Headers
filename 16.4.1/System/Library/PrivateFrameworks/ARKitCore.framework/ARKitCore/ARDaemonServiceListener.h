@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, ARDaemonServiceListenerDelegate;

@interface ARDaemonServiceListener : NSObject <NSXPCListenerDelegate> {
    NSMutableDictionary *_xpcListeners;
    NSMutableDictionary *_serviceClasses;
    NSObject<OS_dispatch_queue> *_serviceQueue;
    BOOL _anonymousListenerEnabled;
}

@property (readonly, weak, nonatomic) id<ARDaemonServiceListenerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (BOOL)addServiceByName:(id)a0 serviceClass:(Class)a1;
- (BOOL)addServiceWithQueueByName:(id)a0 serviceClass:(Class)a1;
- (id)createService:(id)a0;
- (id)initWithDelegate:(id)a0 enableAnonymousListeners:(BOOL)a1;
- (id)listenerForServiceNamed:(id)a0;

@end
