@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface SSXPCServer : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_entitlementName;
    NSObject<OS_xpc_object> *_listener;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSMutableDictionary *_observers;
    NSString *_serviceName;
}

+ (id)mainServer;

- (id)init;
- (void)dealloc;
- (void)_dispatchMessage:(id)a0 connection:(id)a1;
- (id)initWithServiceName:(id)a0;
- (void)addObserver:(id)a0 selector:(SEL)a1 forMessage:(long long)a2;
- (void)start;
- (void)removeObserver:(id)a0 selector:(SEL)a1 forMessage:(long long)a2;
- (id)initWithServiceName:(id)a0 entitlement:(id)a1 queue:(id)a2;

@end
