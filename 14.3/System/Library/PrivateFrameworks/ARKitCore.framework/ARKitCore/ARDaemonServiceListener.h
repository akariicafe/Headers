@class NSString, NSDictionary, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, ARDaemonServiceListenerDelegate;

@interface ARDaemonServiceListener : NSObject <NSXPCListenerDelegate> {
    NSMutableDictionary *_xpcListeners;
    NSMutableDictionary *_serviceClasses;
    NSObject<OS_dispatch_queue> *_serviceQueue;
    BOOL _anonymousListenerEnabled;
}

@property (readonly, nonatomic) NSDictionary *listeners;
@property (readonly, weak, nonatomic) id<ARDaemonServiceListenerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getARDaemonServiceSubClasses;

- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)initWithDelegate:(id)a0;
- (id)initWithDelegate:(id)a0 enableAnonymousListeners:(BOOL)a1;
- (BOOL)addServiceByName:(id)a0 serviceClass:(Class)a1;
- (BOOL)createService:(id)a0;

@end
