@class NSXPCConnection, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface AWServiceManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connection;
    NSMutableSet *_serviceObservers;
}

+ (void)addObserver:(id)a0;
+ (void)removeObserver:(id)a0;
+ (id)sharedManager;
+ (id)invokeWithService:(id /* block */)a0;

- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)invokeWithService:(id /* block */)a0;

@end
