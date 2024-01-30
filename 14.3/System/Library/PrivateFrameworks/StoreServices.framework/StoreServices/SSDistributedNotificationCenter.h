@class NSString, SSXPCServer, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface SSDistributedNotificationCenter : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableArray *_observers;
    NSString *_portName;
    SSXPCServer *_server;
}

@property (readonly) NSString *namedPort;

- (id)initWithNamedPort:(id)a0;
- (void)_distributedNotificationMessage:(id)a0 connection:(id)a1;
- (void)_sendRegistrationMessage:(long long)a0 name:(id)a1;
- (id)addObserverForName:(id)a0 queue:(id)a1 usingBlock:(id /* block */)a2;
- (id)init;
- (void)removeObserver:(id)a0;
- (void)dealloc;

@end
