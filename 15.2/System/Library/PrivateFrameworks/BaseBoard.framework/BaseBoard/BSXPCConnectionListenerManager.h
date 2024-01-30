@class NSLock, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface BSXPCConnectionListenerManager : NSObject {
    NSObject<OS_dispatch_queue> *_listeningQueue;
    NSMutableDictionary *_services;
    NSLock *_servicesLock;
    NSObject<OS_dispatch_queue> *_defaultHandlerQueue;
}

+ (id)defaultHandlerQueue;
+ (void)stopListeningForService:(id)a0;
+ (void)listenForService:(id)a0 onQueue:(id)a1 withHandler:(id)a2;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
